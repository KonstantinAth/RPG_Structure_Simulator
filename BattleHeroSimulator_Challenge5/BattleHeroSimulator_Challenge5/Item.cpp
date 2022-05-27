#include "ItemHeader.h"
Item::Item() {
	itemName = "";
	itemAffiliation = AFFILITIATION::WARRIOR;
}
Item::Item(std::string itemName, AFFILITIATION affiliation) {
	this->itemName = itemName;
	this->itemAffiliation = affiliation;
}
float Item::GetIncreasingStats(Hero* hero) {
	float statsBuff = 0.0;
	if ((*hero).GetHeroAffiliation() == itemAffiliation) {
		std::cout << "Same Affiliation..." << std::endl;
		//Increase the appropriate stat, do not only check the affiliation as it is...
	}
	else {
		std::cout << "Not the same affiliation..." << std::endl;
	}
	return statsBuff;
}