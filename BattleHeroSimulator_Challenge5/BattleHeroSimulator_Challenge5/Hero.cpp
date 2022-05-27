#include "HeroHeader.h"
Hero::Hero() {
	heroName = "";
	InitializeStats(0, 0, 0, 0, 0);
}
Hero::Hero(std::string heroName) {
	this->heroName = heroName;
	InitializeStats(0, 0, 0, 0, 0);
}
Hero::Hero(std::string heroName, AFFILITIATION affiliation, Item* item) {
	this->heroName = heroName;
	this->Afilliation = affiliation;
	equipedItem = item;
	health = 0;
	physicalDamage = 0;
	stamina = 0;
	mana = 0;
}