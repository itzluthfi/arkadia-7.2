#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void dropLogicWeapon() {
    float randomRateNumber = static_cast<float>(rand()) / RAND_MAX;

    for (int i = 0; i < jmlDropRate; i++) {
        if (randomRateNumber <= dropRateWeapon[i]) {
            if (randomRateNumber <= dropRateWeapon[0]) {
                typeText2("??????");
                cout << endl;
                typeText2("Semua Bulu Kudukmu Berdiri!!!,Sesuatu Yang Misterius Dan Asing Telah Muncul!");
                cout << endl;
            } else if (randomRateNumber <= dropRateWeapon[1]) {
                typeText2("???\n");
                typeText2("Muncul Sesuatu benda bersinar sangat terang!!!\n");
            }

            invItems[jmlInvItem].rarityName = Rarity[i];
            invItems[jmlInvItem].skillEffectWeapon = skillEffectWeapon[i];

            switch (pilKelas) {
                case 1:
                    invItems[jmlInvItem].weaponName = weaponFighter[i];
                    invItems[jmlInvItem].dmgWeapon = dmgWeaponFighter[i];
                    invItems[jmlInvItem].detailWeapon = detailWeaponFighter[i];
                    break;
                case 2:
                    invItems[jmlInvItem].weaponName = weaponWizzard[i];
                    invItems[jmlInvItem].dmgWeapon = dmgWeaponWizzard[i];
                    invItems[jmlInvItem].detailWeapon = detailWeaponWizard[i];
                    break;
                case 3:
                    invItems[jmlInvItem].weaponName = weaponRanger[i];
                    invItems[jmlInvItem].dmgWeapon = dmgWeaponRanger[i];
                    invItems[jmlInvItem].detailWeapon = detailWeaponRanger[i];
                    break;
            }

            cout << "3. Obtained a " << invItems[jmlInvItem].rarityName << " " << invItems[jmlInvItem].weaponName << endl;
            jmlInvItem++;
            return;
        }
    }
}





void farming(){
    cout<<"===== Pilih Terrain ====="<<endl;
    detailTerrain();
    cout<<"masukkan pilihan (1-"<<jmlTerrain<<") : ";
    cin>>pilTerrain;
        if(Players.totalHP >= HPreq[pilTerrain-1] && Players.totalAP >= APreq[pilTerrain - 1]){
                
                Players.totalHP += HPobtain[pilTerrain-1];
                Players.totalAP += APobtain[pilTerrain-1];
                loading();
                cout << "penyerangan terrain berhasil!" << endl;
                cout << "Hadiah penyerangan : "<<endl;
                cout<<   "1. +"<<HPobtain[pilTerrain-1]<<" HP"<<endl;
                cout<<   "2. +"<<APobtain[pilTerrain-1]<<" AP"<<endl;
                //drop item
                dropLogicWeapon();
            }else{
                loading();
                cout << "KAMU MATI!,farming sesuai kemampuan dahulu agar lebih kuat!" << endl;         
            }
}