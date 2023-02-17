#pragma once
#include <iostream>
#include <string>
enum Suit { clubs, diamonds, hearts, spades };
enum Rank { two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace };

class Card
{
    private:
        Suit s;
        Rank r;
    public:
        Card(Suit suit, Rank rank);
        int getSuit(Suit s);
        int getRank(Suit r);
        std::string toString();
};