#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52
#define HAND 5

// card structure definition
struct card {
    const char *face; // define pointer face
    const char *suit; // define pointer suit
};

typedef struct card Card; // new type name for struct card

// prototypes
void fillDeck(Card * const wDeck, const char * wFace[],
              const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck, Card * const Phand1, Card * const Phand2);
int pair(Card * const Phand, char *suit[], char *face[]);
int twoPair(Card * const Phand, char *suit[], char *face[]);
int threeOfKind(Card * const Phand, char *suit[], char *face[]);
int fourOfKind(Card * const Phand, char *suit[], char *face[]);
int straightHand(Card * const Phand, char *suit[], char *face[]);
int flushHand(Card * const Phand, char *suit[], char *face[]);
void compareHands(unsigned int hand[][2], char *suit[], char *face[]);

int main(void)
{
    Card deck[CARDS]; // define array of Cards
    
    Card hand1[HAND]; // define array of hand1
    Card hand2[HAND]; // define array of hand2
    
    int P1Result = 0;
    int P2Result = 0;
    
    int resultArray[100];
    
    FILE *cfPtr;
    
    // initialize array of pointers
    const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten",
        "Jack", "Queen", "King"};
    
    // initialize array of pointers
    const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};
    
    srand(time(NULL)); // randomize
    
    if ((cfPtr = fopen("results.txt", "r")) == NULL) {
        puts("File could not be opened");
    } else {
    for (int game = 0; game < 100; game++){
        fillDeck(deck, face, suit); // load the deck with Cards
        shuffle(deck); // put Cards in random order
        deal(deck, hand1, hand2); // deals a hand
        
        P1Result += pair(hand1, suit, face);
        P1Result += twoPair(hand1, suit, face);
        P1Result += threeOfKind(hand1, suit, face);
        P1Result += fourOfKind(hand1, suit, face);
        P1Result += straightHand(hand1, suit, face);
        P1Result += flushHand(hand1, suit, face);
        P2Result += pair(hand1, suit, face);
        P2Result += twoPair(hand1, suit, face);
        P2Result += threeOfKind(hand1, suit, face);
        P2Result += fourOfKind(hand1, suit, face);
        P2Result += straightHand(hand1, suit, face);
        P2Result += flushHand(hand1, suit, face);
        
        if (P1Result > P2Result){
            printf("Hand 1 was better than Hand 2");
            resultArray[game] = 1;
        } else {
            printf("Hand 2 was better than Hand 1");
            resultArray[game] = 0;
        }
        
        // insert record in file
        fwrite(&resultArray,
               sizeof(struct card), 1, cfPtr);
        
        P1Result = 0;
        P2Result = 0;
        }
    }
    fclose (cfPtr); // fclose closes the file
}

// place strings into Card structures
void fillDeck(Card * const wDeck, const char * wFace[],
              const char * wSuit[])
{
    // loop through wDeck
    for (size_t i = 0; i < CARDS; ++i) {
        wDeck[i].face = wFace[i % FACES];
        wDeck[i].suit = wSuit[i / FACES];
    }
}

// shuffle cards
void shuffle(Card * const wDeck)
{
    // loop through wDeck randomly swapping Cards
    for (size_t i = 0; i < CARDS; ++i) {
        size_t j = rand() % CARDS;
        Card temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

// deal cards
void deal(const Card * const wDeck, Card * const Phand1, Card * const Phand2)
{
    // loop through wDeck and deal 2 hands
    for (size_t i = 0; i < 10; ++i) {
        if (i < HAND) {
            Phand1[i].face = wDeck[i].face;
            Phand1[i].suit = wDeck[i].suit;
        } else if ( i > HAND && i < 10) {
            Phand2[i].face = wDeck[i].face;
            Phand2[i].suit = wDeck[i].suit;
        }
        
    }
}

int pair(Card * const Phand, char *suit[], char *face[]) {
    unsigned int counter[FACES] = { 0 };
    int result = 0;
    
    for (size_t r = 0; r < 5; ++r) {
        for(int i = 0; i < FACES; ++i) {
            if (strcmp(face[i], Phand[r].face) == 0) {
                ++counter[i];
            }
        }
    }
    
    for (size_t t =0; t < FACES; ++t) {
        result = (counter[t] == 2 ? 1 : 0);
        if (result == 1) {
            printf("You have a pair");
        }
    }
    
    return result;
}

int twoPair(Card * const Phand, char *suit[], char *face[]) {
    unsigned int counter[FACES] = { 0 };
    int result = 0;
    
    for (size_t r = 0; r < 5; ++r) {
        for(int i = 0; i < FACES; ++i) {
            if (strcmp(face[i], Phand[r].face) == 0) {
                ++counter[i];
            }
        }
    }
    
    for (size_t t =0; t < FACES; ++t) {
        result += (counter[t] == 2 ? 1 : 0);
        if (result == 2) {
            printf("You have a two pair");
        }
    }
    
    return result;
}

int threeOfKind(Card * const Phand, char *suit[], char *face[]) {
    unsigned int counter[FACES] = { 0 };
    int result = 0;
    
    for (size_t r = 0; r < 5; ++r) {
        for(int i = 0; i < FACES; ++i) {
            if (strcmp(face[i], Phand[r].face) == 0) {
                ++counter[i];
            }
        }
    }
    
    for (size_t t =0; t < FACES; ++t) {
        result = (counter[t] == 3 ? 3 : 0);
        if (result == 3) {
            printf("You have a three of a kind");
        }
    }
    
    return result;
}

int fourOfKind(Card * const Phand, char *suit[], char *face[]) {
    unsigned int counter[FACES] = { 0 };
    int result = 0;
    
    for (size_t r = 0; r < 5; ++r) {
        for(int i = 0; i < FACES; ++i) {
            if (strcmp(face[i], Phand[r].face) == 0) {
                ++counter[i];
            }
        }
    }
    
    for (size_t t =0; t < FACES; ++t) {
        result = (counter[t] == 4 ? 4 : 0);
        if (result == 4) {
            printf("You have a four of a kind");
        }
    }
    
    return result;
}

int straightHand(Card * const Phand, char *suit[], char *face[]) {
    
    unsigned int s[5] = { 0 };
    unsigned int temp;
    int result = 0;
    
    for (size_t r = 0; r < 5; ++r) {
        for(int i = 0; i < FACES; ++i) {
            if (strcmp(face[i], Phand[r].face) == 0) {
                s[r] = i;
            }
        }
    }
    
    for (size_t pass = 1; pass < 5; ++pass) {
        for (size_t comp = 0; comp < 4; ++comp) {
            if (s[comp] > s[comp + 1]) {
                temp = s[comp];
                s[comp] = s[comp + 1];
                s[comp + 1] = temp;
            }
        }
    }
    result = (s[4] - 1 == s[3] && s[3] - 1 == s[2]
              && s[2] - 1 == s[1] && s[1] - 1 == s[0] ? 5 : 0 );
    if (result == 5) {
        printf("You have a straight hand");
    }
    
    return result;
}

int flushHand(Card * const Phand, char *suit[], char *face[]) {
    
    unsigned int counter[SUITS] = { 0 };
    int result = 0;
    
    for (size_t r = 0; r < 5; ++r) {
        for(int i = 0; i < FACES; ++i) {
            if (strcmp(suit[i], Phand[r].suit) == 0) {
                ++counter[i];
            }
        }
    }
    
    for (size_t t =0; t < SUITS; ++t) {
        result = (counter[t] == 5 ? 6 : 0);
        if (result == 6) {
            printf("You have a flush hand");
        }
    }
    
    return result;
}
