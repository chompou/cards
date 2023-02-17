#include <iostream>
#include <vector>
#include "CardDeck.h"

using namespace std;

void CardDeck::swap(int pos1, int pos2)
{
    cout << "Before swap, first card: " << pos1 << endl;
    cout << "Before swap, second card: " << pos2 << endl;

    int temp;
    temp = pos1;
    pos1 = pos2;
    pos2 = temp;

    cout << "After swap, first card: " << pos1 << endl;
    cout << "After swap, second card: " << pos2 << endl;

    return;
}

void CardDeck::print()
{
    for (int i = 0; i < 52; i++)
    {
        cout << cards[i].toString() << endl;
    }
}

void CardDeck::shuffleDeck()
{
    auto rd = random_device{};
    auto rng = default_random_engine{rd()};
    shuffle(begin(cards), end(cards), rng);
}

Card CardDeck::drawCard()
{
    Card temp = cards[52];
    cards.erase(cards.begin() + 52);
    return temp;
}