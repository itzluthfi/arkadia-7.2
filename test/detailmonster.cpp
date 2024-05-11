#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_MONSTERS = 20;

struct Monster {
    string name;
    int hp;
    int ap;
    string skills[3];
    int dmgSkills[3];
};

Monster monsters[] = {
    {"Aboleth", 200, 12, {"Spike Hand", "Multiple Claw", "Burning Roar"}, {40, 65, 85}},
    {"Death Slaad", 400, 10, {"Dark Slash", "Dark Ball", "Dark Rift"}, {60, 90, 120}},
    {"Red Dragon Wyrmling", 700, 15, {"Burning Tail", "Flame Burst", "Domain Of Hell"}, {125, 160, 235}},
    {"Spectral Banshee", 300, 18, {"Wail of Despair", "Spectral Grasp", "Ethereal Gaze"}, {50, 80, 110}},
    {"Gorgon Sentinel", 450, 14, {"Petrifying Gaze", "Stone Breath", "Iron Stomp"}, {70, 95, 120}},
    {"Chimera Beast", 600, 20, {"Lion Roar", "Goat Stampede", "Serpent's Wrath"}, {90, 110, 140}},
    {"Venomous Arachnid", 250, 16, {"Web Snare", "Toxic Bite", "Venomous Barrage"}, {40, 70, 100}},
    {"Frostbite Yeti", 500, 12, {"Ice Smash", "Snowstorm Howl", "Glacial Slam"}, {80, 100, 120}},
    {"Dreadful Lich", 800, 25, {"Necrotic Grasp", "Cursed Souls Eruption", "Lich's Dominion"}, {120, 150, 200}},
    {"Molten Phoenix", 1000, 30, {"Fiery Plumage", "Inferno Dive", "Blazing Rebirth"}, {150, 180, 240}},
    // Tambahkan 10 monster lainnya
    {"Thunderstorm Elemental", 550, 22, {"Electric Surge", "Cyclone Burst", "Thunderous Roar"}, {90, 120, 150}},
    {"Frostwind Serpent", 750, 18, {"Icy Bite", "Arctic Tail Whip", "Frozen Breath"}, {110, 140, 180}},
    {"Demonic Incubus", 350, 20, {"Seductive Allure", "Hellfire Grasp", "Diabolic Embrace"}, {60, 80, 110}},
    {"Cursed Wraith", 500, 15, {"Soul Drain", "Ethereal Slash", "Doomed Howl"}, {80, 100, 130}},
    {"Iron Golem", 900, 25, {"Metal Fist Slam", "Molten Core Burst", "Ironclad Defense"}, {130, 160, 200}},
    {"Acidic Ooze", 300, 12, {"Corrosive Drip", "Toxic Slam", "Amorphous Split"}, {50, 70, 90}},
    {"Shadow Stalker", 450, 20, {"Umbral Strike", "Darkened Ambush", "Shadowmeld"}, {70, 100, 120}},
    {"Blighted Treant", 650, 15, {"Poisoned Thorns", "Entangling Vines", "Verdant Restoration"}, {100, 120, 150}},
    {"Lava Drake", 850, 28, {"Magma Breath", "Lava Burst", "Scorching Dive"}, {140, 170, 220}},
    {"Thunderhawk Griffin", 600, 22, {"Thunder Talons", "Aerial Assault", "Eagle's Eye"}, {110, 140, 180}}
};

void displayAllMonsterInfo() {
    for (int i = 0; i < MAX_MONSTERS; ++i) {
        cout << "Monster: " << monsters[i].name << endl;
        cout << "   - HP: " << monsters[i].hp << endl;
        cout << "   - AP: " << monsters[i].ap << endl;
        cout << "   - Skills:\n";
        for (int j = 0; j < 3; ++j) {
            cout << "      " << j + 1 << ". " << monsters[i].skills[j] << " (Damage: " << monsters[i].dmgSkills[j] << ")\n";
        }
        cout << endl;
    }
}

int main() {
    displayAllMonsterInfo();
    return 0;
}
