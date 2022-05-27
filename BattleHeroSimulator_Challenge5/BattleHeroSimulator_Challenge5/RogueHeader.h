#ifndef  ROGUE_HEADER_H
#define ROGUE_HEADER_H
#include "HeroHeader.h"
class Rogue : public Hero {
public:
	Rogue() : Hero() { InitializeStats(150.0f, 250.0f, 35.0f, 200.0f, 100.0f); }
	Rogue(std::string heroName) : Hero(heroName) {
		this->heroName = heroName;
		InitializeStats(150.0f, 250.0f, 35.0f, 200.0f, 100.0f);
	}
	Rogue(std::string heroName, AFFILITIATION affiliation, Item* item) : Hero(heroName, Afilliation, equipedItem) {
		this->heroName = heroName;
		this->Afilliation = affiliation;
		equipedItem = item;
		InitializeStats(100.0f, 250.0f, 35.0f, 300.0f, 170.0f);
	}
};
#endif