//
//  main.cpp
//  deckOfCardsUsingVectors
//
//  Created by Gregory Francois on 3/22/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <ctime>

int main()
{
    using std::cout;
    using std::vector;
    using std::string;
    
    const int NUMBER_OF_CARDS = 52;
    vector<int> deck(NUMBER_OF_CARDS);  // Create vector deck
    
    string suits[4] = {"Spades","Hearts","Diamonds","Clubs"};
    string ranks[13] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
    
    // Initialize cards
    for (int i = 0; i < NUMBER_OF_CARDS; i++)
        deck[i] = i;
    // Shuffle the cards
    srand((int)time(0));
    for (int i = 0; i < NUMBER_OF_CARDS; i++)
    {
        // Generating an index randomly
        int index = rand() % NUMBER_OF_CARDS;
        int temp = deck[i];
        deck[i] = deck[index];
        deck[index] = temp;
    }
    // Display the first four cards
    for (int i = 0; i < 4; i++)
    {
        cout << ranks[deck[i] % 13] << " of " << suits[deck[i] / 13] << "\n";
    }
    return 0;
}
