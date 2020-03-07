#include <iostream>
#include <conio.h>

using namespace std;

void hitungKembalian(int totbel, int jml_uang){
    int rp50k = 50000;
    int rp20k = 20000;
    int rp10k = 10000;
    int rp5k  = 5000;
    int rp1k  = 1000;
    int rp500 = 500;

    int kembalian = jml_uang - totbel;

    if (kembalian <= jml_uang){
        
        if(kembalian >= rp50k){
            cout << " " << kembalian / 50000 << " x 50000" << endl; 
            kembalian = kembalian % 50000;
        }

        if(kembalian >= rp20k){
            cout << " " << kembalian / 20000 << " x 20000" << endl; 
            kembalian = kembalian % 20000;
        }

        if(kembalian >= rp10k){
            cout << " " << kembalian / 10000 << " x 10000" << endl; 
            kembalian = kembalian % 10000;
        }

        if(kembalian >= rp5k){
            cout << " " << kembalian / 5000<< " x 5000" << endl; 
            kembalian = kembalian % 5000;
        }

        if(kembalian >= rp1k){
            cout << " " << kembalian / 1000 << " x 1000" << endl;
            kembalian = kembalian % 1000;
        }

        if(kembalian >= rp500){
            cout << " " << kembalian / 500 << " x 500" << endl;
            kembalian = kembalian % 500;
        }
        



    }

}

main()
{
    int totbel, jml_uang;

    cout << "------------------------------------" << endl;
    cout << "\n          Program Kembalian       " << endl;
    cout << "\n------------------------------------" << endl;
    cout << "\n Total Beli      : ";
    cin >> totbel;
    cout << "\n Jumlah Uang     : ";
    cin >> jml_uang;
    cout << "\n------------------------------------" << endl;
    cout << "\n Kembalian : " << jml_uang - totbel << endl;
    cout << "\n------------------------------------" << endl;


    hitungKembalian(totbel,jml_uang);


    getch();
}