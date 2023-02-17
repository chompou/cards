#include <iostream>
#include "card.h"
#include <string>
#include "utilities.h"

using namespace std;

Card::Card(Suit suit, Rank rank): s{suit}, r{rank}
{}

int Card::getSuit(Suit s)
{
    return s;
}

int Card::getRank(Suit r)
{
    return r;
}


string Card::toString() 
{
    string cardString = rankToString(r) + " of " + suitToString(s);
    return cardString;
}