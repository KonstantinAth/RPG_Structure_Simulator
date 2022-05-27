#ifndef  ARCHER_HEADER_H
#define ARCHER_HEADER_H
#include "HeroHeader.h"
class Archer : public Hero {
public:
	Archer() : Hero() { InitializeStats(150.0f, 250.0f, 35.0f, 200.0f, 100.0f); }
	Archer(std::string heroName) : Hero(heroName) {
		this->heroName = heroName; 
		InitializeStats(150.0f, 250.0f, 35.0f, 200.0f, 100.0f);
	}
	Archer(std::string heroName, AFFILITIATION affiliation, Item* item) : Hero(heroName, Afilliation, item) {
		this->heroName = heroName;
		this->Afilliation = affiliation;
		equipedItem = item;
		InitializeStats(150.0f, 250.0f, 35.0f, 200.0f, 100.0f);
	}
};
#endif