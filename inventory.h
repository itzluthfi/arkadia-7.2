#include <iostream>
using namespace std;

void bukaInventory() {
    system("cls");
    cout << "Inventory : \n";
    if (jmlInvItem == 0) {
        cout << "- Tidak Ada Item -" << endl;
        cout << "ketik enter untuk lanjut....";
        cin.ignore();
        cin.get();
    } else {
        for (int i = 0; i < jmlInvItem; i++) {
            cout << i + 1 << ". " << invItems[i].rarityName << " " << invItems[i].weaponName << endl;
        }
        cout << jmlInvItem + 1 << ". Keluar" << endl;
        cout << "masukkan Pilihan (1-" << jmlInvItem + 1 << ") : ";
        cin >> pilInvItem;

        if (pilInvItem != jmlInvItem + 1) {
            system("cls");
            cout << "Nama           : " << invItems[pilInvItem - 1].weaponName << endl;
            cout << "Grade          : " << invItems[pilInvItem - 1].rarityName << endl;
            cout << "Bonus Ap       : " << invItems[pilInvItem - 1].dmgWeapon << endl;
            cout << "Special Effect : " << invItems[pilInvItem - 1].skillEffectWeapon << endl;
            cout << "Detail         : \n-" << invItems[pilInvItem - 1].detailWeapon << endl<< endl;
            if(Players.weaponName == "-Tidak Ada Senjata-" ){
                cout << "Equip Item? <y/n> : ";
                cin >> pilEquip;
                if (pilEquip == "y") {
                    //status effect weapon
                    //myhticial
                    if (invItems[pilInvItem - 1].rarityName == Rarity[0]) {
                        Players.skillEffectWeapon = statusEffect[2];
                    //legendary
                    } else if (invItems[pilInvItem - 1].rarityName == Rarity[1]) {
                        Players.skillEffectWeapon = statusEffect[1];
                    //epik
                    } else if (invItems[pilInvItem - 1].rarityName == Rarity[2]) {
                        Players.skillEffectWeapon = statusEffect[0];
                    }

                    //ADD ke profil player
                        Players.weaponName = invItems[pilInvItem - 1].weaponName;
                        Players.dmgWeapon = invItems[pilInvItem - 1].dmgWeapon;
                        Players.rarityWeapon = invItems[pilInvItem - 1].rarityName;
                        Players.detailWeapon = invItems[pilInvItem - 1].detailWeapon;
                        Players.skillEffectWeapon = invItems[pilInvItem - 1].skillEffectWeapon;
                    //simpan data ke temp
                        tempInvItems.weaponName = invItems[pilInvItem-1].weaponName;
                        tempInvItems.dmgWeapon = invItems[pilInvItem-1].dmgWeapon;
                        tempInvItems.rarityName = invItems[pilInvItem-1].rarityName;
                        tempInvItems.detailWeapon = invItems[pilInvItem-1].detailWeapon;
                        tempInvItems.skillEffectWeapon = invItems[pilInvItem-1].skillEffectWeapon;
                    //hapus item dari inv
                    for (int i = pilInvItem - 1; i < jmlInvItem - 1; i++) {
                        invItems[i].weaponName = invItems[i + 1].weaponName;
                        invItems[i].dmgWeapon = invItems[i + 1].dmgWeapon;
                        invItems[i].rarityName = invItems[i + 1].rarityName;
                        invItems[i].detailWeapon = invItems[i + 1].detailWeapon;
                        invItems[i].skillEffectWeapon = invItems[i + 1].skillEffectWeapon;
                    }
                    jmlInvItem--;
                }else{
                    bukaInventory();
                }
            }else{              
                cout << "Apakah Anda Ingin Menukar Item Yang Sedang Dipakai? <y/n> : ";
                cin>> pilSwitch;
                if(pilSwitch == "y"){
                    //tukar data temp dan profil
                    //ADD ke profil player
                        Players.weaponName = invItems[pilInvItem - 1].weaponName;
                        Players.dmgWeapon = invItems[pilInvItem - 1].dmgWeapon;
                        Players.rarityWeapon = invItems[pilInvItem - 1].rarityName;
                        Players.detailWeapon = invItems[pilInvItem - 1].detailWeapon;
                        Players.skillEffectWeapon = invItems[pilInvItem - 1].skillEffectWeapon;
                    //isi data inv dengan data temp
                        invItems[pilInvItem-1].weaponName = tempInvItems.weaponName;
                        invItems[pilInvItem-1].dmgWeapon = tempInvItems.dmgWeapon;
                        invItems[pilInvItem-1].rarityName = tempInvItems.rarityName;
                        invItems[pilInvItem-1].detailWeapon = tempInvItems.detailWeapon;
                        invItems[pilInvItem-1].skillEffectWeapon = tempInvItems.skillEffectWeapon;
                    //perbarui isi temp
                        tempInvItems.weaponName = Players.weaponName;
                        tempInvItems.dmgWeapon = Players.dmgWeapon;
                        tempInvItems.rarityName = Players.rarityWeapon;
                        tempInvItems.detailWeapon =  Players.detailWeapon;
                        tempInvItems.skillEffectWeapon = Players.skillEffectWeapon;
                   
                }else{
                    bukaInventory();
                }
            }            
            
                           
        }
    }
}
