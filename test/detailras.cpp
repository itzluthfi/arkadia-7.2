#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_RACES = 10;

struct Race {
    string name;
    string passiveSkill;
    string passiveEffect;
};

Race races[] = {
    {"Human", "Adaptive Nature", "Versatile Learner: Humans gain 5% bonus experience points from all sources."},
    {"Elf", "Elven Agility", "Graceful Reflexes: Elves have a 10% chance to evade enemy attacks."},
    {"Dwarf", "Dwarven Resilience", "Sturdy Constitution: Dwarves gain +20 maximum HP."},
    {"Orc", "Orcish Might", "Fierce Strength: Orcs deal 5% extra damage in combat."},
    {"Gnome", "Gnomish Ingenuity", "Inventive Mind: Gnomes have a 15% chance to disarm traps successfully."},
    {"Tiefling", "Infernal Pact", "Hellish Endurance: Tieflings regenerate 1 AP per turn."},
    {"Halfling", "Lucky Charm", "Fortunate Luck: Halflings have a 20% chance to avoid critical hits."},
    {"Dragonborn", "Draconic Heritage", "Dragon's Roar: Dragonborns can intimidate enemies, reducing enemy damage by 10%."},
    {"Half-elf", "Versatile Diplomat", "Diplomatic Grace: Half-elves gain +10 to Charisma."},
    {"Aasimar", "Celestial Blessing", "Heavenly Aura: Aasimars receive a healing aura, restoring 2 HP per turn to allies within range."}
};

void displayAllRaceInfo() {
    for (int i = 0; i < MAX_RACES; ++i) {
        cout << "Race: " << races[i].name << endl;
        cout << "   - Passive Skill: " << races[i].passiveSkill << endl;
        cout << "   - Passive Effect: " << races[i].passiveEffect << endl << endl;
    }
}

int main() {
    displayAllRaceInfo();
    return 0;
}
