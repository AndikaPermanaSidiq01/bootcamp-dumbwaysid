#include <iostream>
#include <conio.h>

using namespace std;



main()
{
    int total, lahir, ditanya;
    int mati;
    int jml;

    total = 2169;
    lahir = 92;
    mati = 11.1;
    ditanya = 276;


    cout << " Jumlah Awal iguana ada : " << total << endl;
    cout << "\n Setiap 92 hari setiap iguana serempak melahirkan 1 maka jumlah iguana : " << total + total << endl;
    jml = total * mati / 100;
    cout << "\n Sebelum melahirkan mati 11.1% maka jumlah iguana adalah : " << jml << endl;
    total = total - jml;
    cout << "\n Maka jumlah iguana sebelum melahirkan adalah : " << total << endl;
    lahir = total + total;
    cout << "\n Jumlah iguana setelah 92 hari pertama melahirkan adalah " << lahir << endl;

    total = lahir;
    jml = total * mati / 100;


    total = total - jml;
    
    lahir = total + total;
    cout << "\n Jumlah iguana setelah 92 hari kedua melahirkan adalah " << lahir << endl;

    total = lahir;
    jml = total * mati / 100;


    total = total - jml;
    
    lahir = total + total;

    cout << "\n Jadi Jumlah iguana setelah 276 hari adalah " << lahir << endl;




    getch();
}
