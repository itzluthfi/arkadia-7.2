#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    // Drop chance sebesar 1%
    string DropItemName[]= {"sword","dual sword","war axe","serpent arrow","heavenly boots"};
    float dropChance[] = {0.5,0.4,0.3,0.2,0.1};
    string itemName;
    string lanjut = "y";
    
    // Jumlah percobaan drop
    //const int jumlahPercobaan = 100;
while(lanjut == "y"){
    for (int i = 5; i > 0; i--) {
        // Menghasilkan angka acak antara 0.0 hingga 1.0
        float randomNumber = static_cast<float>(rand()) / RAND_MAX;
        cout<<"random number : "<<randomNumber<<endl;

        // Jika angka acak kurang dari atau sama dengan drop chance, maka item di-drop
        bool itemDiDrop = (randomNumber <= dropChance[i]);

        // Menampilkan hasil percobaan
        if (itemDiDrop) {
            itemName = DropItemName[i];
            cout << "Percobaan ke-" << i + 1 << ": Item "<<itemName<<" di-drop!" << endl;
        } else {
            cout << "Percobaan ke-" << i + 1 << ": Tidak ada item yang di-drop." << endl;
        }
        cout<<"================================="<<endl;
    }
    cout<<"lanjut? <y/n> : ";
    cin>>lanjut;
}
    return 0;
}
