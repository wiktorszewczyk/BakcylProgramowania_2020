#include <string>
#include <vector>
#include <map>
#include "Card.hpp"
#include "Deck.hpp"
#include "../Logger/Logger.hpp"
#include "../Logger/ExceptionLevels.cpp"
class DeckBuilder 
{
    private:
    int maxNumberOfCards;
    int maxNumberOfHeroes;
    int maxNumberOfEachCard;
    std::map<Card,int> cardCount;
    Deck deck;
    public:
    DeckBuilder();
    ~DeckBuilder();
    void addCard(Card &cardToAdd);
    void removeCard(Card &cardToRemove);
}; 

