#include <iostream>

using namespace std;

//save data player baru
void saveDataPlayer(){
    savePlayers[jmlPlayer].username = usernameBaru;
    savePlayers[jmlPlayer].password = passwordBaru;
    for(int i = 0; i < 3; i++){
        savePlayers[jmlPlayer].skill[i] = Players.skill[i];
        savePlayers[jmlPlayer].dmgSkill[i] = Players.dmgSkill[i];
    }    
    savePlayers[jmlPlayer].race = Players.ras;
    savePlayers[jmlPlayer].pasifRace = Players.pasifRas;
    savePlayers[jmlPlayer].jobClass = Players.kelas;
    savePlayers[jmlPlayer].hp = Players.totalHP;
    savePlayers[jmlPlayer].ap = Players.totalAP;
    savePlayers[jmlPlayer].weaponName = Players.weaponName;
    savePlayers[jmlPlayer].rarityWeapon = Players.rarityWeapon;
    savePlayers[jmlPlayer].dmgWeapon = Players.dmgWeapon;
    savePlayers[jmlPlayer].detailWeapon = Players.detailWeapon;
    savePlayers[jmlPlayer].skillEffectWeapon = Players.skillEffectWeapon;
    savePlayers[jmlPlayer].jmlInvItem = jmlInvItem;
    
}

void saveDataInv(){
    for(int i = 0; i < jmlInvItem; i++){
        saveInvItems[jmlPlayer].weaponName[i] = invItems[i].weaponName;
        saveInvItems[jmlPlayer].rarityName[i] = invItems[i].rarityName;
        saveInvItems[jmlPlayer].dmgWeapon[i] = invItems[i].dmgWeapon;
        saveInvItems[jmlPlayer].detailWeapon[i] = invItems[i].detailWeapon;
        saveInvItems[jmlPlayer].skillEffectWeapon[i] = invItems[i].skillEffectWeapon;     
    }
}


//save data player lama(login)
void saveDataPlayerLogin(){
    savePlayers[idPlayerLogin].username = usernameBaru;
    savePlayers[idPlayerLogin].password = passwordBaru;
    for(int i = 0; i < 3; i++){
        savePlayers[idPlayerLogin].skill[i] = Players.skill[i];
        savePlayers[idPlayerLogin].dmgSkill[i] = Players.dmgSkill[i];
    }    
    savePlayers[idPlayerLogin].race = Players.ras;
    savePlayers[idPlayerLogin].pasifRace = Players.pasifRas;
    savePlayers[idPlayerLogin].jobClass = Players.kelas;
    savePlayers[idPlayerLogin].hp = Players.totalHP;
    savePlayers[idPlayerLogin].ap = Players.totalAP;
    savePlayers[idPlayerLogin].weaponName = Players.weaponName;
    savePlayers[idPlayerLogin].rarityWeapon = Players.rarityWeapon;
    savePlayers[idPlayerLogin].dmgWeapon = Players.dmgWeapon;
    savePlayers[idPlayerLogin].detailWeapon = Players.detailWeapon;
    savePlayers[idPlayerLogin].skillEffectWeapon = Players.skillEffectWeapon;
    savePlayers[idPlayerLogin].jmlInvItem = jmlInvItem;
    
}

void saveDataInvLogin(){
    for(int i = 0; i < jmlInvItem; i++){
        saveInvItems[idPlayerLogin].weaponName[i] = invItems[i].weaponName;
        saveInvItems[idPlayerLogin].rarityName[i] = invItems[i].rarityName;
        saveInvItems[idPlayerLogin].dmgWeapon[i] = invItems[i].dmgWeapon;
        saveInvItems[idPlayerLogin].detailWeapon[i] = invItems[i].detailWeapon;
        saveInvItems[idPlayerLogin].skillEffectWeapon[i] = invItems[i].skillEffectWeapon;     
    }
}
