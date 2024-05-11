#include <iostream>
#include <string>
using namespace std;



// Fungsi untuk membuat karakter baru
void newKarakter() {
    Players.username = usernameBaru;
    Players.ras = ras[pilRas - 1];
    Players.kelas = kelas[pilKelas - 1];
    Players.totalHP = HP[pilRas - 1] + bonusHP[pilKelas - 1];
    Players.totalAP = AP[pilRas - 1];
    Players.pasifRas = pasifRas[pilRas - 1];

    for (int i = 0; i < 3; i++) {
        Players.skill[i] = "-None-";
        Players.dmgSkill[i] = 0;
    }

    switch (pilKelas) {
        case 1:
            for (int i = 0; i < 3; i++) {
                Players.skill[i] = skillFighter[i];
                Players.dmgSkill[i] = dmgskillFighter[i];
            }
            break;
        case 2:
            for (int i = 0; i < 3; i++) {
                Players.skill[i] = skillWizzard[i];
                Players.dmgSkill[i] = dmgskillWizzard[i];
            }
            break;
        case 3:
            for (int i = 0; i < 3; i++) {
                Players.skill[i] = skillRanger[i];
                Players.dmgSkill[i] = dmgskillRanger[i];
            }
            break;
        default:
            break;
    }
}

