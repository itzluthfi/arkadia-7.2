#include <iostream>
#include <string>
#include "databaseSave.h"
#include "databaseInventory.h"
#include "databasePlayer.h"
#include "databaseItem.h"
#include "databaseFarming.h"
#include "databaseBattle.h"
#include "inventory.h"
#include "newKarakter.h"
#include "saveData.h"
#include "tampilan.h"
#include "farming.h"
#include "battle.h"
#include "aksi.h"
#include "playerLama.h"


using namespace std;


int main() {  
    int pil;
    introGame();
    do{
    system("cls");
    // Menampilkan pesan perpisahan
    typeText("Semoga keberanianmu membawa kejayaan di ARCADIA! Selamat berpetualang!\n");
    //membuat srand lebih acak tergantung dari waktu sistem saat mulai di jalankan
    srand(static_cast<unsigned>(time(0)));
    
    cout << "Menu:" << endl;
    cout << "1. Buat Karakter Baru" << endl;
    cout << "2. login karakter lama" <<endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pil;

    switch (pil) {
        case 1: 
            logOrNew = "new";
            cout<<"masukkan username : ";
            cin>>usernameBaru;
            cout<<"masukkan password : ";
            cin>>passwordBaru;
            //pilih ras
            cout<<"pilih race anda : "<<endl;
            detailRas(ras,HP,AP,3);
            cout << "Masukkan pilihan ras (1-3): ";
            cin >> pilRas;
            cout<<"----------------------------------------"<<endl;
            system("cls");
            // pilih kelas
            cout<<"pilih kelas anda : "<<endl;
            detailKelas();
            cout << "Masukkan pilihan kelas (1-3): ";
            cin >> pilKelas;
            
            //proses buat karakter
            newKarakter();
            
            //aksi
            menuAksi();
            break;
        case 2:
         logOrNew = "login";
         playerlama();
         lanjutAwal = "y";
        break;
        case 3:
            cout << "Terima kasih. Sampai jumpa!" << endl;
            lanjutAwal = "n";
            break;


        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }
    
    }while(lanjutAwal == "y");
    return 0;
}
