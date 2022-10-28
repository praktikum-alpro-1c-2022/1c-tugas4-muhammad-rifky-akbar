#include <iostream>
using namespace std;

int main (){
    int menu;
    int hrg1 = 5000, hrg2 = 7000, hrg3 = 4500, hrg4 = 4000;

    cout << "   Daftar menu" << endl;
    cout << "==============================" << endl;
    cout << "1. Nasi goreng informatika : " << hrg1 << endl;
    cout << "2. Nasi soto ayam internet : " << hrg2 << endl;
    cout << "3. Gado gado Disket        : " << hrg3 << endl;
    cout << "4. Bubur ayam LAN          : " << hrg4 << endl;
    cout << "==============================" << endl;
    cout << "Masukkan pilihan Anda (1,2,3,4): ";
    cin >> menu;

    switch (menu){
    case 1:
        cout << "Pilihan anda no.1 Nasi goreng informatika " << hrg1 << endl;
        break;
    case 2:
        cout << "Pilihan anda no.2 Nasi soto ayam internet " << hrg2 <<endl;
        break;
    case 3:
        cout << "Pilihan anda no.3 Gado-gado Disket " << hrg3 << endl;
        break;
    case 4:
        cout << "Pilihan anda no.4 Bubur ayam LAN " << hrg4 << endl;
        break;
    default:
        cout << "Mohon pilih berdasarkan menu yang ada" << endl;
        break;

    }
    return 0;
}
