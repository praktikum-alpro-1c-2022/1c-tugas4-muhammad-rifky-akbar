#include <iostream>
using namespace std;

int main (){
    int total;
    int kodesusu, juml;
    char ukuran;

    cout << "Masukkan kode susu (1,2,3) : ";
    cin >> kodesusu;

    if (kodesusu==1){
        cout << "   Dancow" << endl;
        cout << "Masukkan ukuran (b/s/k): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> juml;
            total = juml * 10000;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> juml;
            total = juml * 4250;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> juml;
            total = juml * 2100;
            cout << "Jumlah pembeliannya : " << total << endl;
        }
    }else if (kodesusu==2){
        cout << "   Indomilk" << endl;
        cout << "Masukkan ukuran (b/s/k): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> juml;
            total = juml * 8500;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> juml;
            total = juml * 4000;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> juml;
            total = juml * 2025;
            cout << "Jumlah pembeliannya : " << total << endl;
        }
    }else if (kodesusu==3){
        cout << "   Sustacal" << endl;
        cout << "Masukkan ukuran (b/s/k): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> juml;
            total = juml * 17000;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> juml;
            total = juml * 14500;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> juml;
            total = juml * 8300;
            cout << "Jumlah pembeliannya : " << total << endl;
        }
    }

    return 0;
}
