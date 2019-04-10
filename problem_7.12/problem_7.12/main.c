//
//  main.c
//  problem_7.12
//
//  Created by Chris Miller on 7/7/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SUITS 4
#define FACES 13
#define CARDS 52
#define HAND 5

// prototypes
void shuffle(unsigned int wDeck[][FACES]); // shuffling modifies wDeck
void deal(unsigned int wDeck[][FACES], const char *wFace[],
          const char *wSuit[]); // dealing doesn't modify the arrays

int main(void)
{
    // initialize deck array
    unsigned int deck[SUITS][FACES] = { 0 };
    
    srand(time(NULL)); // seed random-number generator
    
    shuffle(deck); // shuffle the deck
    
    // initialize suit array
    const char *suit[SUITS] =
    {"Hearts", "Diamonds", "Clubs", "Spades"};
    
    // initialize face array
    const char *face[FACES] =
    {"Ace", "Deuce", "Three", "Four",
        "Five", "Six", "Seven", "Eight",
        "Nine", "Ten", "Jack", "Queen", "King"};
    
    deal(deck, face, suit); // deal the deck
}

// shuffle cards in deck
void shuffle(unsigned int wDeck[][FACES])
{
    // for each of the cards, choose slot of deck randomly
    for (size_t card = 1; card <= CARDS; ++card) {
        size_t row; // row number
        size_t column; // column number
        
        // choose new random location until unoccupied slot found
        do {
            row = rand() % SUITS;
            column = rand() % FACES;
        } while(wDeck[row][column] != 0); // end do...while
        
        // place card number in chosen slot of deck
        wDeck[row][column] = card;
    }
}

// deal cards in deck
void deal(unsigned int wDeck[][FACES], const char *wFace[],
          const char *wSuit[])
{
    char* cards[HAND];
    // deal each of the cards
    for (size_t card = 1; card <= HAND; ++card) {
        // loop through rows of wDeck
        for (size_t row = 0; row < SUITS; ++row) {
            // loop through columns of wDeck for current row
            for (size_t column = 0; column < FACES; ++column) {
                // if slot contains current card, display card
                if (wDeck[row][column] == card) {
                    cards[card] = wFace[column];
                    printf("%5s of %-8s%c", wFace[column], wSuit[row],
                           card % 2 == 0 ? '\n' : '\t'); // 2-column format
                    }
                }
            }
        }
    for (int i = 0; i < HAND; ++i) {
        for (int j = 0; j < FACES; ++j) {
            if(!strcmp(cards[i], wFace[j])) {
                printf("Pair Found");
            } else {
                continue;
            }
        }
    }
}
