void playerlama() {
    cout << "Masukkan username: ";
    cin >> loginUsername;
    cout << "Masukkan password: ";
    cin >> loginPassword;
    
    bool karakterDitemukan = false;

    for (int i = 0; i < jmlPlayer; i++) {
        cout<<"Player ke - "<<i+1<<" : "<<endl;
        cout<<"isi data player username : "<<savePlayers[i].username<<endl;
        cout<<"isi data player password : "<<savePlayers[i].password<<endl;
        cout<<"=============================================="<<endl;
        if (loginUsername == savePlayers[i].username && loginPassword == savePlayers[i].password) {
            karakterDitemukan = true;
            cout << "Login berhasil!" << endl;

            //perbarui data players
            Players.username = savePlayers[i].username;
            Players.ras = savePlayers[i].race;
            Players.kelas = savePlayers[i].jobClass;
            Players.totalHP = savePlayers[i].hp;
            Players.totalAP = savePlayers[i].ap;
            Players.pasifRas = savePlayers[i].pasifRace;

            for (int j = 0; j < 3; j++) {
                Players.skill[j] = savePlayers[i].skill[j];
                Players.dmgSkill[j] = savePlayers[i].dmgSkill[j];
            }
            Players.jmlInvItem = savePlayers[i].jmlInvItem;
            Players.weaponName = savePlayers[i].weaponName;
            Players.rarityWeapon = savePlayers[i].rarityWeapon;
            Players.dmgWeapon = savePlayers[i].dmgWeapon;
            Players.detailWeapon = savePlayers[i].detailWeapon;
            Players.skillEffectWeapon = savePlayers[i].skillEffectWeapon;
             
             //perbarui data inventory
             for(int k = 0; k < Players.jmlInvItem; k++){
             invItems[k].weaponName = saveInvItems[i].weaponName[k];
             invItems[k].rarityName = saveInvItems[i].rarityName[k];
             invItems[k].dmgWeapon = saveInvItems[i].dmgWeapon[k];
             invItems[k].detailWeapon = saveInvItems[i].detailWeapon[k];
             invItems[k].skillEffectWeapon = saveInvItems[i].skillEffectWeapon[k];
             }

                //cetak perbaruan data players
                cout << "Data player yang diperbarui:" << endl;
                cout << "Username     : " << Players.username << endl;
                cout << "Ras          : " << Players.ras << endl;
                cout << "Kelas        : " << Players.kelas << endl;
                cout << "Total HP     : " << Players.totalHP << endl;
                cout << "Total AP     : " << Players.totalAP << endl;
                cout << "Pasif Ras    : " << Players.pasifRas << endl;
                cout << "Skill        : " << endl;
                for (int j = 0; j < 3; j++) {
                    cout << "  - Skill " << j+1 << ": " << Players.skill[j] << " (Dmg: " << Players.dmgSkill[j] << ")" << endl;
                }
                cout << "Jumlah Inv Item: " << Players.jmlInvItem << endl;
                cout << "Weapon Name  : " << Players.weaponName << endl;
                cout << "Grade Weapon : " << Players.rarityWeapon << endl;
                cout << "Dmg Weapon   : " << Players.dmgWeapon << endl;
                cout << "Detail Weapon: " << Players.detailWeapon << endl;
                cout << "Skill Effect : " << Players.skillEffectWeapon << endl;
                cout<<"============================================="<<endl;
                //perbauran inv item
                jmlInvItem = Players.jmlInvItem;
                cout << "Inventory Items:" << endl;
                if(jmlInvItem == 0){
                    cout<<"-Tidak Ada Item-"<<endl;
                }
                for (int k = 0; k < Players.jmlInvItem; k++) {
                cout << "  - Item " << k+1 << ":" << endl;
                cout << "    Weapon Name         : " << invItems[k].weaponName << endl;
                cout << "    Grade Weapon        : " << invItems[k].rarityName << endl;
                cout << "    Dmg Weapon          : " << invItems[k].dmgWeapon << endl;
                cout << "    Detail Weapon       : " << invItems[k].detailWeapon << endl;
                cout << "    Skill Effect Weapon : " << invItems[k].skillEffectWeapon << endl;
               }
               //id untuk save data player (login)
                idPlayerLogin = i;
            break;
        }
    }

    if (!karakterDitemukan) {
        cout << "Login Gagal!,Username Atau Password Salah."<< endl;
    }

    cout << "Ketik ENTER untuk lanjut....";
    cin.ignore();
    cin.get();
    //jalankan menu aksi jika login berhasil
    if(karakterDitemukan){
        menuAksi();
    }
}
