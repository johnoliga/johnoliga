#include <iostream>

// Constants for Uno card colors
const int RED = 0;
const int GREEN = 1;
const int BLUE = 2;
const int YELLOW = 3;

// Constants for Uno card values
const int ZERO = 0;
const int ONE = 1;
const int TWO = 2;
const int THREE = 3;
const int FOUR = 4;
const int FIVE = 5;
const int SIX = 6;
const int SEVEN = 7;
const int EIGHT = 8;
const int NINE = 9;
const int SKIP = 10;
const int REVERSE = 11;
const int DRAW_TWO = 12;
const int WILD = 13;       // Wild card
const int DRAW_FOUR = 14;  // Draw Four card

struct UnoCard {
    int color;
    int value;
};

UnoCard unoDeck[4][15]; // A 4x15 array to represent the Uno deck, including the new cards
UnoCard playerHand[7];  // Player's hand
UnoCard computerHand[7]; // Computer's hand

int main() {
    // Initialize the Uno deck by filling the unoDeck array
    for (int c = 0; c < 4; c++) {
        for (int v = 0; v <= 14; v++) {  // Updated the loop range to include the new card values
            unoDeck[c][v] = { c, v };
        }
    }

    // Deal 7 cards to the player and the computer
    for (int i = 0; i < 7; i++) {
        playerHand[i] = unoDeck[RED][i]; // The player's cards are taken from the first color (RED)
        computerHand[i] = unoDeck[RED][i + 7]; // The computer's cards start from the 8th card in the deck
    }

    std::cout << "Welcome to Uno!\n";

    while (true) {
        // Implement the game logic here

        // Simulate the effect of a "Draw Four" card (changing the color)
        UnoCard drawFourCard = { WILD, DRAW_FOUR };
        int userChoice = /* Get user's choice of color (0 for RED, 1 for GREEN, 2 for BLUE, 3 for YELLOW) */; 

        if (/* Determine if the current card is a "Draw Four" card */) {
            drawFourCard.color = userChoice; // Change the color to the user's choice
        }

        // Break the loop when the game is over
        bool game_over = false;
        if (game_over) {
            break;
        }
    }

    std::cout << "Game over! Thanks for playing Uno.\n";

    return 0;
}