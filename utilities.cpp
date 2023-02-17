#include <iostream>
#include <string>
#include "card.h"
#include "utilities.h"
using namespace std;

static const char *typeStrings[] = 
{
    "Clubs", "Diamonds", "Hearts", "Spades",
};

string suitToString(int suitType)
{
    string My_String(typeStrings[suitType]);
    return My_String;
}

static const char *rankStrings[] =
{
    "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace",
};

string rankToString(int rankType)
{
    string My_String(rankStrings[rankType]);
    return My_String;
}

// e) Symboler er vanskeligere å mixe opp med int verdier, og gjør det lettere for noen andre å forstå hva koden handler om.