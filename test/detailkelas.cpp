#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_CLASSES = 20;

struct CharacterClass {
    string name;
    string weapon[5];
    int dmgWeapon[5];
};

CharacterClass characterClasses[] = {
    {"Fighter", {"Frostbite Dagger", "Crimson Lotus Katana", "Shadebane Dual Axes", "Heroic Spear", "Doombringer Claymore"}, {15, 35, 55, 75, 100}},
    {"Wizard", {"Frostfire Grimoire", "Shadowmeld Enigma Staff", "Cloak Of Abyss", "Sanguine Astral Orb", "Malevolent Enchantress Crown"}, {15, 35, 65, 80, 120}},
    {"Ranger", {"Starfall Hunter's Longbow", "Blazefury Marksman's Bow", "Dragonheart Composite Bow", "Wraithlord's Doomshot Bow", "Apocalypse Bringer Bow"}, {15, 35, 75, 85, 125}},
    {"Paladin", {"Divine Hammer", "Holy Avenger Sword", "Shield of Righteousness", "Radiant Lance", "Aegis of the Divine"}, {20, 40, 60, 80, 110}},
    {"Assassin", {"Venomous Dagger", "Shadowstrike Twin Blades", "Silent Crossbow", "Cloak of Shadows", "Poisoned Shuriken"}, {25, 45, 70, 90, 120}},
    {"Sorcerer", {"Arcane Staff", "Mystic Orb of Elements", "Burning Scroll", "Thunderstorm Wand", "Crystalized Fireball"}, {18, 38, 58, 78, 105}},
    {"Bard", {"Melodious Lyre", "Harmony Rapier", "Soothing Flute", "Charming Dagger", "Dance of Blades Fan"}, {18, 35, 50, 70, 95}},
    {"Barbarian", {"Raging Waraxe", "Berserker's Maul", "Fury Greatsword", "Thundering Hammer", "Molten Battle Axe"}, {30, 50, 75, 100, 130}},
    {"Druid", {"Nature's Staff", "Moonlight Scimitar", "Wild Thorn Whip", "Starshower Wand", "Ancient Oak Shield"}, {20, 40, 55, 75, 100}},
    {"Monk", {"Zen Fist Wraps", "Divine Crane Staff", "Swift Kick Boots", "Eagle Claw Gauntlets", "Spiritual Nunchaku"}, {25, 45, 65, 85, 110}},
    {"Necromancer", {"Bone Reaper Scythe", "Cursed Grimoire", "Soul Harvester Dagger", "Dreadlord's Staff", "Necrotic Skull Scepter"}, {22, 40, 60, 80, 110}},
    {"Archmage", {"Staff of Arcane Mastery", "Elemental Grimoire", "Astral Wand", "Chronomancer's Hourglass", "Ethereal Orb"}, {25, 50, 75, 100, 130}},
    {"Mechanist", {"Clockwork Crossbow", "Steam-Powered Gauntlets", "Tesla Coil Dagger", "Mechanical Wrench", "Gyroblade Thrower"}, {30, 45, 65, 85, 110}},
    {"Oracle", {"Divine Scepter", "Healing Rod", "Cleansing Chalice", "Prophecy Tome", "Celestial Harp"}, {18, 35, 50, 70, 95}},
    {"Swashbuckler", {"Rapier of Elegance", "Daring Cutlass", "Hidden Dagger", "Acrobatic Blunderbuss", "Marauder's Flintlock"}, {22, 40, 55, 75, 100}},
    {"Elemental Warden", {"Nature's Embrace Staff", "Aquaflow Crystal", "Pyro Essence Gauntlets", "Aero Tempest Bow", "Geoforge Warhammer"}, {28, 50, 70, 90, 120}},
};

void displayAllClassInfo() {
    for (int i = 0; i < MAX_CLASSES; ++i) {
        cout << "Class: " << characterClasses[i].name << endl;
        cout << "   - Weapons:\n";
        for (int j = 0; j < 5; ++j) {
            cout << "      " << j + 1 << ". " << characterClasses[i].weapon[j] << " (Damage: " << characterClasses[i].dmgWeapon[j] << ")\n";
        }
        cout << endl;
    }
}

int main() {
    displayAllClassInfo();
    return 0;
}
