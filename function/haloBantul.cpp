#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma , nNike, nCommpass, nNB;
int hAdibas = 300,  hNB = 250, hPuma = 150, hNike = 350;

void input()

cout  << "Masukkan jumlah adidas = ";
cin >> nAdidas;

cout << "masukkan jumlah puma = ";
cin >> nPuma 

cout << "masukkan jumlah New Balance = ";
cin >> nNB;

cout << "masukkan jumlah compass  = ";
cin >> nCompass

cout << "masukkan jumlah nike  = ";
cin >>  nNike;



int totalHarga()
{
return (nAdidas * hAdibas) + (nPuma * hPuma) + (nNB  - hNB) + (nCompass - hCompass) + (nNike - hNike);
}


    void display()

    cout << endl;
    cout << "============" << endl;
    cout << endl; 
    cout << "jumlah puma =" nPuma << endl;
    cout << "Jumlah Adidas = " << nAdidas << endl;
    cout << endl;
    cout << "Total Harga = Rp." << totalHarga(); << endl;
   


int main ()
{
    input();
    display();
}