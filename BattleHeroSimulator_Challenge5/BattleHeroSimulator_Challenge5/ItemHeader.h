//Preventing the header file from being used multiple times...
#ifndef ITEM_HEADER_H
#define ITEM_HEADER_H
#include <iostream>
#include <string>
#include "Affiliation.h"
#include "HeroHeader.h"
class Item {
private:
	std::string itemName;
	AFFILITIATION itemAffiliation;
public:
	Item();
	Item(std::string name, AFFILITIATION affiliation);
	std::string GetItemName() { return itemName; }
	AFFILITIATION GetItemAffiliation() { return  itemAffiliation; }
	float GetIncreasingStats(class Hero* hero);
};
#endif // !ITEM_HEADER_H