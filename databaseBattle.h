#include <iostream>
using namespace std;

//data Monster
string monster [] = {"Aboleth", "Death Slaad",  "Red Dragon Wyrmling", "Celestial Golem","Divine Angel Who Fall"}; 
int monsterHP [] = { 300, 500, 1000, 1500, 2000};
//int monsterAP [] = {12, 10, 15,20,30};
int jmlMonster = sizeof(monster)/sizeof(monster[0]);

//skill Monster
string skillAboleth [] = {"Spike Hand", "Multiple Claw", "Burning Roar"};
int dmgSkillAboleth [] = {50,80,125};
string skillDeathSlaad [] = {"Dark Slash", "Dark Ball", "Dark Rift"};
int dmgSkillDeathSlaad [] = {60,90,180};
string skillRedDragonWyrling[] = {"Burning Tail", "Flame Burst", "Domain Of Hell"};
int dmgSkillRedDragonWyrling[] = {125,180,250};
string skillCelestialGolemOfDisaster[] = {"Heavenly Smash","Inferiority Roar","Cataclysmic Quake"};
int dmgSkillCelestialGolemOfDisaster[] = {180, 250, 380};
string skillDivineKnightWhoFall[] = {"Divine Strike", "Hand Of Domination", "Judgmental Fall"};
int dmgSkillDivineKnightWhoFall[] = {250, 350, 500};

//data monster
struct Monsters {
    string MonsterName;
    int totalHP;
    int totalAP;
    float defends;
    int randomAttack;
    string statusEffect;
    string highStatusEffect;
    string skillName;
    int dmgSkill;
    float critRateBonus;
    float missRateBonus;
};

//deklarasi monster
Monsters Monster;


//fase 2 boss legendary dan myhtical
//legendary[abnormal](HP full,+15% defends,+15% crit rate)
//Myhtical[unknown](HP full,+30% defends,+30% crit rate,resist all debuff)
string monsterStatus[] = {"[Abnormal]","[Unknown]"};
int maxHPMonster;
int chanceRestoreHp;

//status effect from weapon
//[bleeding] = -2% HP
//[Cursed] = -5% HP
//[Dominated] = -25% akurasi
string statusEffect[] = {"[Bleeding]","[Cursed]","[Dominated]"};
//string statusEffectPlayer;


//miss rate
float randomMissRate;
float missRateDefault;

//critical 
float critRateDefault;
float randomNumberCritical;
float critRateBonusPlayer;
int criticalDmg;
int bonusDmg;
int bonusHpPAsive;


//temp battle
int turn;
//monster
int pilMonster;
//player
int totalPlayerHP;
int totalDmgPlayer;
int pilSkill;