#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

void menuAksi(){
    int pilTambahan;
    string ulangAksi;
    do{
        system("cls");
        cout << "\nMenu tambahan:" << endl;
        cout << "1. tampilkan profil karakter" << endl;
        cout << "2. Farming" << endl;
        cout << "3. Battle" << endl;
        cout << "4. Inventory" << endl;
        cout << "5. Logout" << endl;
        cout << "Pilih menu tambahan: ";
        cin >> pilTambahan;

        switch (pilTambahan) {
            case 1:
            system("cls");
            detailKarakter();
            cout<<"ketik enter untuk lanjut....";
            cin.ignore();
            cin.get();
            ulangAksi = "n";
            break;

            case 2:
            do{
            system("cls");
            farming();
            cout<<"Farming Lagi? <y/n> : ";
            cin>>ulangAksi;   
            }while(ulangAksi == "y");
            break;

            case 3:
            do{
            system("cls");
            battle();
            cout<<"Battle Lagi? <y/n> : ";
            cin>>ulangAksi;   
            }while(ulangAksi == "y");
             break;

            case 4:
            bukaInventory();
            ulangAksi = "n";
            break;

            case 5:
            // Kembali ke menu utama
            if(logOrNew == "new"){
                // Kembali ke menu utama
                cout<<"apakah anda yakin ingin logout? <y/n> : ";
                cin>>pilSaveData;
                if(pilSaveData != "n"){
                    saveDataPlayer();
                    saveDataInv();
                    jmlPlayer++;                    
                    Players.weaponName = "-Tidak Ada Senjata-";
                    Players.dmgWeapon = 0;
                    Players.rarityWeapon = "";
                    Players.skillEffectWeapon = "";
                    Players.detailWeapon = "";
                    ulangAksi = "logout";
                    lanjutAwal = "y";
                    //reset jml item
                    jmlInvItem = 0;
                }else{
                    ulangAksi = "n";
                }
            }else if(logOrNew == "login"){
                // Kembali ke menu utama
                cout<<"apakah anda ingin menyimpan data saat ini? <y/n> : ";
                cin>>pilSaveData;
                if(pilSaveData != "n"){
                    saveDataPlayerLogin();
                    saveDataInvLogin();
                }
                Players.weaponName = "-Tidak Ada Senjata-";
                Players.dmgWeapon = 0;
                Players.rarityWeapon = "";
                Players.skillEffectWeapon = "";
                Players.detailWeapon = "";
                ulangAksi = "logout";
                lanjutAwal = "y";
                //reset jml item
                jmlInvItem = 0;
            }
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
        
    }while(ulangAksi == "n");
}


