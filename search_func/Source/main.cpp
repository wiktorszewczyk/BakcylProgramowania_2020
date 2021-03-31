#include <iostream>
#include <sqlite3.h>
#include "search_func.hpp"

	
int main()
{
    SearchFlags sf;
    std::vector<Card> cards = searchFor(sf);
    std::cout << cards.at(8).getCardCode() << std::endl;
    std::cout << cards.at(8).getName() << std::endl;
    std::cout << cards.at(8).getDescriptionRaw() << std::endl;
    std::cout << cards.at(8).getSupertype() << std::endl;
    std::cout << cards.at(8).getCardKeywords().at(0) << std::endl;
    
    return 0;
}
