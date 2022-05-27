#include <iostream>
#include <map>
#include "HeroHeader.h"
#include "ItemHeader.h"
#include "ArcherHeader.h"
#include "RogueHeader.h"
#include "WarriorHeader.h"
#include "MageHeader.h"
int main() {
    std::map < AFFILITIATION, std::string > affiliationMap = {
        {AFFILITIATION::WARRIOR, "WARRIOR"},
        {AFFILITIATION::ROGUE, "ROGUE"},
        {AFFILITIATION::FILTHY_MAGE, "MAGE"},
        {AFFILITIATION::ARCHER, "ARCHER"},
    };
    Item item("stuff of MAGIC", AFFILITIATION::FILTHY_MAGE);
    Item itemArcher("Bow of WISDOM", AFFILITIATION::ARCHER);
    Item itemWarrior("Morning Star", AFFILITIATION::WARRIOR);
    Item itemRogue("Poison Daggers", AFFILITIATION::ROGUE);
    Item itemMage("Stuff of Mystic", AFFILITIATION::FILTHY_MAGE);
    Hero hero("Kostas");
    Hero* genericHeroptr;
    Archer archer("Green Archer", AFFILITIATION::ARCHER, &itemArcher);
    Warrior warrior("Savage Warrior", AFFILITIATION::WARRIOR, &itemWarrior);
    Rogue rogue("Sneaky Rogue", AFFILITIATION::ROGUE, &itemRogue);
    Mage mage("Filthy Mage", AFFILITIATION::FILTHY_MAGE, &itemMage);
    genericHeroptr = &archer;
    std::cout << "Welcome user : " << hero.GetHeroName() << " your item is the : " << item.GetItemName() << 
        " with affiliation at " << affiliationMap.at(item.GetItemAffiliation()) << std::endl;
    std::cout << "Welcome user : " << genericHeroptr->GetHeroName() << " Health is : " << genericHeroptr->GetHealth() << " your item is the : " << genericHeroptr->GetEquipedItem().GetItemName() <<
        " with affiliation of " << affiliationMap.at(itemArcher.GetItemAffiliation()) << std::endl;
    item.GetIncreasingStats(&hero);
    itemArcher.GetIncreasingStats(genericHeroptr);
    genericHeroptr = &warrior;
    std::cout << "Welcome user : " << genericHeroptr->GetHeroName() << " Health is : " << genericHeroptr->GetHealth() << " your item is the : " << genericHeroptr->GetEquipedItem().GetItemName() <<
        " with affiliation of " << affiliationMap.at(genericHeroptr->GetEquipedItem().GetItemAffiliation()) << std::endl;
    genericHeroptr = &rogue;
    std::cout << "Welcome user : " << genericHeroptr->GetHeroName() << " Health is : " << genericHeroptr->GetHealth() << " your item is the : " << genericHeroptr->GetEquipedItem().GetItemName() <<
        " with affiliation of " << affiliationMap.at(genericHeroptr->GetEquipedItem().GetItemAffiliation()) << std::endl;
    genericHeroptr = &mage;
    std::cout << "Welcome user : " << genericHeroptr->GetHeroName() << " Health is : " << genericHeroptr->GetHealth() << " your item is the : " << genericHeroptr->GetEquipedItem().GetItemName() <<
        " with affiliation of " << affiliationMap.at(genericHeroptr->GetEquipedItem().GetItemAffiliation()) << std::endl;
    system("pause");
}