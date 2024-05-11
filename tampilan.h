#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <thread>


using namespace std;



void detailRas(string ras[],int hp[], int ap[],int jml){
    cout<<"\nList Race Player Sebagai Berikut : "<<endl;

    cout<<"===================================================================="<<endl;
    cout<<"|No.|\tRace\t|\tHP\t|\tAP\t|\tPasive\t   |"<<endl;
    cout<<"===================================================================="<<endl;
    for(int i=0; i<jml; i++){
    cout<<"|"<<i+1<<". |\t"<<ras[i]<<"\t|\t"<<hp[i]<<"\t|\t"<<ap[i]<<"\t|\t???\t   |"<<endl;
    }
    cout<<"===================================================================="<<endl;


}

void detailKelas(){
    cout<<"\nList Class Player Sebagai Berikut : "<<endl;
    cout<<"================================================================================="<<endl;
    cout<<"|No.|\t\tClass\t\t|\tBonus HP\t|\t Skill \t\t|"<<endl;
    cout<<"================================================================================="<<endl;
    for(int i=0; i<3; i++){
    cout<<"|"<<i+1<<". |\t\t"<<kelas[i]<<"\t\t|\t"<<bonusHP[i]<<"\t\t|\t"<<"skill???"<<"\t|"<<endl;
    }
    cout<<"================================================================================="<<endl;
}

void detailKarakter() {
    // Menampilkan informasi karakter player
    cout <<"Profil Player :\n";
    cout << "username        : " << usernameBaru << endl;
    cout << "Ras             : " << Players.ras << endl;
    cout << "Pasif Ras       : " << Players.pasifRas<<endl;
    cout << "Kelas           : " << Players.kelas << endl;
    cout << "HP              : " << Players.totalHP << endl;
    cout << "Bonus AP        : " << Players.totalAP << endl;
    cout << "Weapon          : " << Players.weaponName << endl;
    if(Players.weaponName != "-Tidak Ada Senjata-"){
    cout << "Grade           : " << Players.rarityWeapon << endl;
    cout << "Bonus AP Weapon : " << Players.dmgWeapon << endl;
    cout << "SKill Effect    : " << Players.skillEffectWeapon<<endl;
    }
    // cout<<  "Detail Weapon : "<<DetailProfilWeapon<<endl;
}

void detailTerrain(){
     cout<<"================================================================================================================================="<<endl;
     cout<<"|No.|\t\tTerrain\t\t|\tHP Required\t|\tAP Required\t|\tHP Obtained\t|\tAP Obtained\t|"<<endl;
     cout<<"================================================================================================================================="<<endl;
     cout<<"|1. |           Gehenna         |       150             |       8               |       +100            |       +10              |"<<endl;
     cout<<"|2. |           Pandemonium     |       400             |       20              |       +150            |       +15             |"<<endl;
     cout<<"|3. |           Atra-hasis      |       700             |       50              |       +200            |       +20             |"<<endl;
     cout<<"|4. |           Inazuma         |       1500            |       100             |       +300            |       +30             |"<<endl;
     cout<<"|5. |           Eridu City      |       3500            |       200             |       +500            |       +50             |"<<endl;
     cout<<"================================================================================================================================="<<endl;
}



void detailMonster() {
    cout << "=====================================================================================================================" << endl;
    cout << "| NO. |           MONSTER              |       HP      |                             SKILL                          |" << endl;
    cout << "=====================================================================================================================" << endl;
    cout << "|  1. |  Aboleth                       |      200      |  Spike Hand     | Multiple Claw        | Burning Roar      |" << endl;
    cout << "|  2. |  Death Slaad                   |      400      |  Dark Slash     | Dark Ball            | Dark Rift         |" << endl;
    cout << "|  3. |  Red Dragon Wyrmling           |      800      |  Burning Tail   | Flame Burst          | Domain of Hell    |" << endl;
    cout << "|  4. |  Celestial Golem               |     1800      |  Heavenly Smash | Divine Shockwave     | Cataclysmic Quake |" << endl;
    cout << "|  5. |  Divine Knight Who Fall        |     2000      |  Divine Strike  | Heavenly Sword Rains | Judgmental Fall   |" << endl;
    cout << "=====================================================================================================================" << endl;
}





void typeText(const string& text) {
    for (char c : text) {
        cout << c << flush; // Menampilkan satu karakter tanpa buffering
        this_thread::sleep_for(chrono::milliseconds(23)); // Jeda 23 milidetik (0.023 detik)
    }
}

void typeText2(const string& text) {
    for (char c : text) {
        cout << c << flush; // Menampilkan satu karakter tanpa buffering
        this_thread::sleep_for(chrono::milliseconds(40)); // Jeda 50 milidetik (0.050 detik)
    }
}

void introGame(){
    // Menampilkan judul game dengan efek mengetik
    cout<<   "===============================================================================\n";
    cout<<   "  #     #                    SELAMAT DATANG DI            #         #       #  \n";
    cout<<   "#  #  #   #                      GAME RPG               #   #     #   #   #   #\n";
    cout<<   "    #       #              \"ARCADIA ADVENTURE\"      #       # #       #      \n";
    cout<<   "===============================================================================\n";
    // Menampilkan instruksi atau deskripsi cerita yang lebih seru
    cout << endl;
    typeText("Selamat datang, pemberani! Di tengah dunia yang penuh misteri dan bahaya, \n");
    typeText("ARCADIA memanggilmu untuk sebuah petualangan epik yang akan mengguncang bumi.\n");
    typeText("Bertarunglah melawan makhluk-makhluk mitos, temui sihir-sihir kuno, dan temukan\n");
    typeText("rahasia-rahasia yang tersembunyi di dalam hutan terlarang dan gua-gua gelap.\n");

    // Menampilkan pesan untuk memulai game
    cout << endl;
    typeText("Tantangan besar menantimu, pemberani! Tekan [Enter] dan mulailah legenda baru!...");

    // Menunggu pengguna menekan tombol Enter
    cin.get();
}

  
 void loading(){
     typeText("Menyerang "+terrain[pilTerrain-1]+" : =============================\n");
  }