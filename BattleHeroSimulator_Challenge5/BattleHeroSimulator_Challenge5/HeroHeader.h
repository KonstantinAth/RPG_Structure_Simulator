//Preventing the header file from being used multiple times...
#ifndef HERO_HEADER_H
#define HERO_HEADER_H
#include <iostream>
#include <string>
#include "Affiliation.h"
#include "ItemHeader.h"
class Hero
{
protected:
	std::string heroName;
	float health;
	float physicalDamage;
	float magicDamage;
	float stamina;
	float mana;
	AFFILITIATION Afilliation;
	//Ask Akis about that...
	class Item* equipedItem;
	void InitializeStats(float health, float physicalDamage, float magicDamage, float stamina, float mana){
		this->health = health;
		this->physicalDamage = physicalDamage;
		this->magicDamage = magicDamage;
		this->mana = mana;
	}
public:
	Hero();
	Hero(std::string heroName);
	Hero(std::string heroName, AFFILITIATION affiliation, Item* item);
	std::string GetHeroName() { return heroName; }
	float GetHealth() { return health; }
	float GetPhysicalDamage() { return physicalDamage; }
	float GetMagicDamage() { return magicDamage; }
	float GetStamina() { return stamina; }
	float GetMana() { return mana; }
	AFFILITIATION GetHeroAffiliation() { return Afilliation; }
	//Ask Akis about that as well...
	class Item& GetEquipedItem() { return *equipedItem; }
};
#endif // !HERO_HEADER_H