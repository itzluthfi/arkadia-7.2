#include <iostream>
using namespace std;


struct Inventory {
    string weaponName;
    int dmgWeapon;
    string rarityName;
    string detailWeapon;
    string skillEffectWeapon;
};


Inventory invItems[100];
Inventory tempInvItems;
int jmlInvItem = 0;
int pilInvItem;
string pilEquip;
string pilSwitch;