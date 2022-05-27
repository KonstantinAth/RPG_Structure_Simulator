#ifndef  MAGE_HEADER_H
#define MAGE_HEADER_H
#include "HeroHeader.h"
class Mage : public Hero {
public:
	Mage() : Hero() { InitializeStats(150.0f, 250.0f, 35.0f, 200.0f, 100.0f); }
	Mage(std::string heroName) : Hero(heroName) {
		this->heroName = heroName;
		InitializeStats(150.0f, 250.0f, 35.0f, 200.0f, 100.0f);
	}
	Mage(std::string heroName, AFFILITIATION affiliation, Item* item) : Hero(heroName, Afilliation, equipedItem) {
		this->heroName = heroName;
		this->Afilliation = affiliation;
		equipedItem = item;
		InitializeStats(150.0f, 250.0f, 35.0f, 200.0f, 100.0f);
	}
};
#endif 