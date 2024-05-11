#include <iostream>
#include <string>
using namespace std;

//save data players
const int MAX_PLAYERS = 100;

struct savePlayer {
    string username;
    int password;
    string race;
    string pasifRace;
    string jobClass;
    int hp;
    int ap;
    string skill[3];
    int dmgSkill[3];
    string weaponName;
    string rarityWeapon;
    int dmgWeapon;
    string detailWeapon;
    string skillEffectWeapon;
    int jmlInvItem;
};

savePlayer savePlayers[MAX_PLAYERS];
string loginUsername;
int loginPassword;
string pilSaveData;
int idPlayerLogin;
string logOrNew;

//save data inventory players
struct saveInv {
    string weaponName[100];
    int dmgWeapon[100];
    string rarityName[100];
    string detailWeapon[100];
    string skillEffectWeapon[100];
};

saveInv saveInvItems[MAX_PLAYERS];