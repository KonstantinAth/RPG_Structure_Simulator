#ifndef  WARRIOR_HEADER_H
#define WARRIOR_HEADER_H
#include "HeroHeader.h" 
class Warrior : public Hero {
public :
	Warrior() : Hero() {
		InitializeStats(150.0f, 250.0f, 35.0f, 200.0f, 100.0f);
	}
	Warrior(std::string heroName) : Hero(heroName) {
		this->heroName = heroName;
		InitializeStats(150.0f, 250.0f, 35.0f, 200.0f, 100.0f);
	}
	Warrior(std::string heroName, AFFILITIATION affiliation, Item* item) : Hero(heroName, affiliation, equipedItem) {
		this->heroName = heroName;
		this->Afilliation = affiliation;
		this->equipedItem = item;
		InitializeStats(250.0f, 250.0f, 35.0f, 200.0f, 100.0f);
	}
};
#endif