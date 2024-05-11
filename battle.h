#include <iostream>

using namespace std;


void criticalPlayer(){
        cout<<"Crit Rate Default : "<<critRateDefault<<endl;

    if(randomNumberCritical <= critRateDefault){
        cout<<"Serangan Anda Critical!, +50% Damage ."<<endl;
        cout<< "total damage : "<<totalDmgPlayer<<" + "<<totalDmgPlayer/2<<"(Critical)"<<endl;
        totalDmgPlayer = totalDmgPlayer + totalDmgPlayer/2;
    }

}

void criticalMonster(){
    critRateDefault = 0.1;
    if(Monster.highStatusEffect == "[Unknown]" || Monster.highStatusEffect == "[Abnormal]"){
        critRateDefault += Monster.critRateBonus;
    }
        cout<<"Crit Rate Default : "<<critRateDefault<<endl;
    if(randomNumberCritical <= critRateDefault){
        cout<<"Serangan "<<Monster.MonsterName<<" Critical!, +50% Damage ."<<endl;
        cout<< "total damage : "<<Monster.totalAP<<" + "<<Monster.totalAP/2<<"(Critical)"<<endl;
        Monster.totalAP = Monster.totalAP + Monster.totalAP/2;
    }

}

void logicWeaponEffect(){
    //skill effect weapon
    //efek grade myhtical
    if(Players.skillEffectWeapon == skillEffectWeapon[2]){
        cout<<"Pasif Skill Weapon : Monster Terkena Status [Dominated]"<<endl;
        Monster.statusEffect = statusEffect[2];
    //efek grade Legendary
    }else if(Players.skillEffectWeapon == skillEffectWeapon[1]){
        cout<<"Pasif Skill Weapon : Monster Terkena Status [Cursed]"<<endl;
        Monster.statusEffect = statusEffect[1];
    //efek grade Epic
    }else if(Players.skillEffectWeapon == skillEffectWeapon[0]){
        cout<<"Pasif Skill Weapon : Monster Terkena Status [Bleeding]"<<endl;
        Monster.statusEffect = statusEffect[0];
    }
}

void playerTurn(int &totalPlayerHP){
    cout<<"daftar skill :\n1."<<Players.skill[0]<<"\n2."<<Players.skill[1]<<"\n3."<<Players.skill[2]<<endl;
    cout<<"pilih skill : ";
    cin>>pilSkill;

    //skill Kelas
    switch(pilSkill){
        case 1:
        totalDmgPlayer = Players.totalAP + Players.dmgSkill[0] + Players.dmgWeapon;
        break;
        case 2:
        totalDmgPlayer = Players.totalAP + Players.dmgSkill[1] + Players.dmgWeapon;
        break;
        case 3:
        totalDmgPlayer = Players.totalAP + Players.dmgSkill[2] + Players.dmgWeapon;
        break;
    }
    
    //skill pasif Ras
    if(pilRas == 1){
        cout<<"Ras Pasive Skill : "<<pasifRas[0]<<endl;
        critRateDefault = 0.1;
        critRateBonusPlayer = 0.1;
        critRateDefault += critRateBonusPlayer;
        cout<<"[nature luck] active +10% Crit Rate"<<endl;
    }else if(pilRas == 2){
        cout<<"Ras Pasive Skill : "<<pasifRas[1]<<endl;          
    }else if(pilRas == 3){
        cout<<"Ras Pasive Skill : "<<pasifRas[2]<<endl;
        bonusHpPAsive = totalPlayerHP * 0.05;
        cout<<"HP player : "<<totalPlayerHP<<" + "<<bonusHpPAsive<<"(5% HP)"<<endl;    
        totalPlayerHP += bonusHpPAsive;
    }

}

void monsterTurn(){
switch(pilMonster){
                case 1:
                cout<<"Monster skill : "<<endl;
                cout<<"1."<<skillAboleth[0]<<endl;
                cout<<"2."<<skillAboleth[1]<<endl;
                cout<<"3."<<skillAboleth[2]<<endl;

                Monster.skillName = skillAboleth[Monster.randomAttack];
                Monster.totalAP = dmgSkillAboleth[Monster.randomAttack];
                break;

                case 2:
                cout<<"Monster skill : "<<endl;
                cout<<"1."<<skillDeathSlaad[0]<<endl;
                cout<<"2."<<skillDeathSlaad[1]<<endl;
                cout<<"3."<<skillDeathSlaad[2]<<endl;

                Monster.skillName = skillDeathSlaad[Monster.randomAttack];
                Monster.totalAP = dmgSkillDeathSlaad[Monster.randomAttack];
                break;

                case 3:
                cout<<"Monster skill : "<<endl;
                cout<<"1."<<skillRedDragonWyrling[0]<<endl;
                cout<<"2."<<skillRedDragonWyrling[1]<<endl;
                cout<<"3."<<skillRedDragonWyrling[2]<<endl;

                Monster.skillName = skillRedDragonWyrling[Monster.randomAttack];
                Monster.totalAP = dmgSkillRedDragonWyrling[Monster.randomAttack];
                break;
                case 4:
                cout<<"Monster skill : "<<endl;
                cout<<"1."<<skillCelestialGolemOfDisaster[0]<<endl;
                cout<<"2."<<skillCelestialGolemOfDisaster[1]<<endl;
                cout<<"3."<<skillCelestialGolemOfDisaster[2]<<endl;

                Monster.skillName = skillCelestialGolemOfDisaster[Monster.randomAttack];
                Monster.totalAP = dmgSkillCelestialGolemOfDisaster[Monster.randomAttack];
                break;
                case 5:
                cout<<"Monster skill : "<<endl;
                cout<<"1."<<skillDivineKnightWhoFall[0]<<endl;
                cout<<"2."<<skillDivineKnightWhoFall[1]<<endl;
                cout<<"3."<<skillDivineKnightWhoFall[2]<<endl;

                Monster.skillName = skillDivineKnightWhoFall[Monster.randomAttack];
                Monster.totalAP = dmgSkillDivineKnightWhoFall[Monster.randomAttack];
                break;
            }
}


void battle(){
     turn = 1;
     //pilih monster
     detailMonster();
     cout<<"masukkan pilihan (1-"<<jmlMonster<<") : ";
     cin>>pilMonster;
     system("cls");
     //massage Boss spawn
     if(pilMonster == 5){
        typeText2("?????\nSemua Tulangmu Bergetar!!!,Eksistensi Yang Lebih Tinggi Telah Muncul!\n");
        typeText2("Sang "+ monster[pilMonster-1] +" Telah Menunjukkan Keberadaanya.");
     }else if(pilMonster == 4){
        typeText2("Bumi Berguncang!!!, Mahkluk Yang Sangat Besar Keluar Dari tanah!\n");
        typeText2("Sang Celestial Golem Telah Muncul Ke Permukaan.");
     }

     //inisialisasi sebelum bertarung
     totalPlayerHP = Players.totalHP;
     Monster.MonsterName = monster[pilMonster-1];
     Monster.totalHP = monsterHP[pilMonster-1];
     Monster.critRateBonus = 0.0;
     Monster.missRateBonus = 0.0;
     Monster.defends = 0.0;
     Monster.highStatusEffect = "";
     Monster.statusEffect = "";
     chanceRestoreHp = 1;
     maxHPMonster = monsterHP[pilMonster-1];
     critRateDefault = 0.1;
     
     
     //informasi stat
     //player
     cout<<endl<<"total HP  player : "<<totalPlayerHP<<endl;
     cout<<"total bonus AP  player : "<<Players.totalAP<<endl;
     //monster
     cout<<"total HP monster : "<<Monster.totalHP<<endl;
     //cout<<"defend monster : "<<Monster.defends<<endl;

     //bertarung
      while (totalPlayerHP > 0 && Monster.totalHP > 0) {
            cout<<endl<<"======= BERTARUNG ======="<<endl;

            //random
            //acak float dari 0 sampai 1
            randomNumberCritical = static_cast<float>(rand()) / RAND_MAX;
            Monster.randomAttack = rand() % 3;
            randomMissRate = static_cast<float>(rand()) / RAND_MAX;
            //reset miss rate 
            missRateDefault = 0.05;
            
            
            //Putaran round
            cout << "Turn ke - " << turn << " : "<< endl;
            //giliran player menyerang
            typeText("Player "+ Players.username +" Menyerang : \n");
            playerTurn(totalPlayerHP);
            typeText("Player "+ Players.username +" menggunakan skill "+Players.skill[pilSkill-1]+"! \n");

            //cek miss : true jika miss, false jika tidak miss
            if(randomMissRate <= missRateDefault){
                Monster.statusEffect = "";
                typeText("serangan anda berhasil di hindari oleh " + Monster.MonsterName +"! \n");       
            }else{
                logicWeaponEffect();
                cout<<"total damage player : "<<Players.dmgSkill[pilSkill-1]<<"("<<Players.skill[pilSkill-1]<<")+"<<Players.totalAP<<"(bonus AP)"<<"+"<<Players.dmgWeapon<<"("<<Players.weaponName<<")"<<endl;
                if(pilRas == 2){
                    bonusDmg = totalDmgPlayer * 0.15;
                    cout<<"Bonus Damage : "<<bonusDmg<<"(15% Bonus damage [The Carnivors])"<<endl;
                    totalDmgPlayer += bonusDmg; 
                    cout<<"Total Damage Player : "<<totalDmgPlayer<<endl;
                }
                criticalPlayer();
                if(Monster.highStatusEffect == monsterStatus[1]){
                    cout<<"karena efek status [Unknown] Monster +30% Defends"<<endl;
                    cout<<"damage player berkurang sebesar : "<<totalDmgPlayer*Monster.defends<<endl;
                    totalDmgPlayer -= totalDmgPlayer*Monster.defends;
                }
                cout<<"HP monster berkurang sebesar : "<<totalDmgPlayer<<endl;
                
                Monster.totalHP -= totalDmgPlayer;

                // Pengecekan jika Monster.totalHP kurang dari nol, setel menjadi nol
                Monster.totalHP = (Monster.totalHP > 0 ? Monster.totalHP : 0);

                cout << "HP " << Players.username << " : " << totalPlayerHP << endl;
                cout << "HP " << Monster.MonsterName << " : " << Monster.totalHP << endl;

            cout<<"----------------------------------------"<<endl;
            }
            
            //acak lagi
            randomMissRate = static_cast<float>(rand()) / RAND_MAX;
            randomNumberCritical = static_cast<float>(rand()) / RAND_MAX;
            
            //giliran monster menyerang
            if(Monster.totalHP != 0){
            typeText("Monster "+ Monster.MonsterName +" Menyerang : \n");
            monsterTurn();
          
            typeText("monster "+Monster.MonsterName+" menggunakan skill "+Monster.skillName+"! \n");

            //cek apakah status unknown
            //cek status [Dominated]
            if(Monster.highStatusEffect != monsterStatus[1] ){
            if(Monster.statusEffect == "[Dominated]"){
                cout<<"Di Karenakan Status [Dominated] -25% akurasi"<<endl;
                Monster.missRateBonus = 0.25;
            }
            }else if(Monster.highStatusEffect == monsterStatus[1]){
                cout<<"dikarenakan status [Unknown] +30% Crit Rate"<<endl;
            }else if(Monster.highStatusEffect == monsterStatus[0]){
                cout<<"dikarenakan status [Abnormal] +15% Crit Rate"<<endl;
            }

            //cek miss : true jika miss, false jika tidak miss
            if(randomMissRate <= missRateDefault + Monster.missRateBonus){
                typeText("serangan "+Monster.MonsterName+" berhasil di hindari oleh " + Players.username +"! \n");  
            }else{
                 cout<<"Total Damage Monster : "<<Monster.totalAP<<endl;
                 criticalMonster();
                 cout<<"HP player berkurang sebesar : "<<Monster.totalAP<<endl;           
                 totalPlayerHP -= Monster.totalAP;
            
                 // Pengecekan jika totalPlayerHP kurang dari nol, setel menjadi nol
                 totalPlayerHP = (totalPlayerHP > 0 ? totalPlayerHP : 0);

                 cout << "HP " << Players.username << " : " << totalPlayerHP << endl;
                 cout << "HP " << Monster.MonsterName << " : " << Monster.totalHP << endl;          
            }
             
            if(Monster.totalHP <= maxHPMonster/2 && chanceRestoreHp > 0){
                if(pilMonster == 5 ){
                    Monster.highStatusEffect = monsterStatus[1];           
                    Monster.totalHP = maxHPMonster;
                
                    typeText2("Fase 2 Telah Di Mulai!\n");
                    typeText("Monster "+ Monster.MonsterName +" Memasuki Status [Unknown].\n");
                    typeText("restore 100% HP,+30% defends,+30% crit rate,resist all debuff!\n");
                    cout<<"HP Monster : "<<Monster.totalHP<<endl;
                    Monster.defends = 0.3;
                    Monster.critRateBonus = 0.3;
                    chanceRestoreHp--;
                }else if(pilMonster == 4){
                    Monster.highStatusEffect = monsterStatus[0];           
                    Monster.totalHP = maxHPMonster;            
                    typeText2("Fase 2 Telah Di Mulai!\n");
                    typeText("Monster "+ Monster.MonsterName +" Memasuki Status [Abnormal].\n");
                    typeText("restore 100% HP,+15% defends,+15% crit rate.\n");
                    cout<<"HP Monster : "<<Monster.totalHP<<endl;
                    Monster.defends = 0.15;
                    Monster.critRateBonus = 0.15;
                    chanceRestoreHp--;

                }
            }
            // cout<<"monster status now : "<<Monster.highStatusEffect<<endl;
            // cout<<"Monster.defends : "<<Monster.defends<<endl;
            // cout<<"crit bonus monster : "<<Monster.crit<<endl;
            // cout<<"kesempatan restore hp  : "<<chanceRestoreHp<<endl;
            //cek status [unknown]
            //cek status [Cursed] dan bleeding      
            if(Monster.highStatusEffect != monsterStatus[1] ){
            if(Monster.statusEffect == "[Cursed]"){
                cout<<"Di Karenakan Status [Cursed] -5% HP"<<endl;
                Monster.totalHP -= Monster.totalHP * 5/100;
                cout<<"hp Monster berkurang sebesar : "<<Monster.totalHP*5/100<<endl;
            }else if(Monster.statusEffect == "[Bleeding]"){
                cout<<"Di Karenakan Status [Bleeding] -2% HP"<<endl;
                Monster.totalHP -= Monster.totalHP * 2/100;
                cout<<"hp Monster berkurang sebesar : "<<Monster.totalHP*2/100<<endl;
                cout<<"HP " << Monster.MonsterName << " : " << Monster.totalHP << endl;
            }
            }else if(Monster.highStatusEffect == monsterStatus[1]){
                cout<<"Karena status [Unknown] Semua Efek Debuff Dibatalkan!"<<endl;
            }
            }

            if (totalPlayerHP <= 0) {
             typeText2("HP Player 0, Player "+Players.username+" Telah DiKalahkan,KAMU KALAH!\n");
            } else if (Monster.totalHP <= 0) {
             typeText2("Monster "+Monster.MonsterName+" Berhasil di Kalahkan,KAMU MENANG!\n");
             //cout<<"reward : "<<endl;           
            }
           turn++;
           cout<<"========================================"<<endl;
           cout<<"ketik [Enter] untuk lanjut....";
           cin.ignore();
           cin.get();
           system("cls");
    }
    
}
