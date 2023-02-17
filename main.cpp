#include <iostream>
#include <string>
#include "card.h"
#include "utilities.h"
#include "CardDeck.h"
#include <algorithm> 
#include <iterator> 
#include <vector>

using namespace std;

int main()
{
    Rank r = Rank::king;
    Suit s = Suit::hearts;
    string rank = rankToString(r);
    string suit = suitToString(s);
    cout << "Rank: " << rank << " Suit: " << suit << '\n';

    Card c{Suit::spades, Rank::ace};
    cout << c.toString() << '\n';
    
    CardDeck cards;
    cards.print();
    cards.shuffleDeck();
    cards.print();
    cout << "Card drawn:" << endl;
    cout << cards.drawCard().toString() << endl;
    return 0;
}