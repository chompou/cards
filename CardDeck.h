#pragma once
#include <iostream>
#include "card.h"
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

class CardDeck
{
private:
    std::vector<Card> cards;

public:
    CardDeck()
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 13; j++)
            {
                Card card(static_cast<Suit>(i), static_cast<Rank>(j));
                cards.push_back(card);
            }
        }
    }

    void swap(int pos1, int pos2);
    void print();
    void shuffleDeck();
    Card drawCard();
};
