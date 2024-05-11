#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int ATTACK_INDEX = 0;
const int CRITICAL_CHANCE_INDEX = 1;

// Fungsi untuk menentukan apakah serangan adalah critical hit dengan memperhitungkan kemampuan kritis
bool isCriticalHit(const int character[]) {
    int chance = rand() % 100 + 1;
    return chance <= character[CRITICAL_CHANCE_INDEX];
}

// Fungsi untuk mengeksekusi serangan dengan potensi critical hit
void performAttack(int character[]) {
    if (isCriticalHit(character)) {
        cout << "Critical Hit! Damage: " << character[ATTACK_INDEX] * 2 << endl;
    } else {
        cout << "Normal Hit. Damage: " << character[ATTACK_INDEX] << endl;
    }
}

// Fungsi untuk menerapkan passive skill (meningkatkan kemungkinan critical)
void applyPassiveSkill(int character[]) {
    character[CRITICAL_CHANCE_INDEX] += 10;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    // Membuat karakter dalam bentuk array
    int player[2] = {10, 20}; // attack = 10, criticalChance = 20

    // Menerapkan passive skill
    applyPassiveSkill(player);

    // Menjalankan beberapa serangan untuk menguji
    for (int i = 0; i < 100; ++i) {
        performAttack(player);
    }

    return 0;
}