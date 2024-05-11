#include <iostream>
using namespace std;

int jmlPlayer = 0;
string usernameBaru;
int passwordBaru;
string ras[] = {"elf", "human", "orc"};
string pasifRas[] = {"[Nature Luck] Elfs have a 10% chance to avoid critical hits.",
                     "[The Carnivors] Humans have a 15% Bonus Damage When Battle.",
                     "[Orcish Endurance] Orcs regenerate 5% HP per turn."};
int HP[3] = {90, 100, 150};
int AP[3] = {9, 7, 5};
string kelas[] = {"Fighter", "Wizzard", "Ranger"};
string skillFighter[] = {"Blink Strike", "Heart Crushing Attack", "Divine Retribution"};
int dmgskillFighter [] = {30,80,105};
string skillWizzard[] = {"Soul Beam", "Meteor Spawn", "Astral Domination"};
int dmgskillWizzard [] = {35,70,100};
string skillRanger[] = {"Wind Bullet", "Skybeam Arrow", "Eternal Destroyer Shot"};
int dmgskillRanger [] = {25,65,110};



int bonusHP[3] = {80, 60, 60};
int pilRas;
int pilKelas;
string lanjutAwal;


//  struktur player saat ini(active)
struct Player {
    string username;
    string ras;
    string kelas;
    int totalHP;
    int totalAP;
    string pasifRas;
    string skill[3];
    int dmgSkill[3];
    string weaponName = "-Tidak Ada Senjata-";
    int dmgWeapon;
    string rarityWeapon;
    string detailWeapon;
    string skillEffectWeapon;
    int jmlInvItem;
};

// Deklarasi variabel struktur
Player Players;