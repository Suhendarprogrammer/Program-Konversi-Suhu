#include <iostream>
using namespace std;
int main ()
{
    float celc,kelv,fahr,rea;
    cout<<"********PROGRAM KONVERSI SUHU********\n";
    cout<<"=====================================\n";
    cout<<"\nMasukkan Suhu Dalam Celcius : ";
    cin>>celc;
    cout<<"===============================\n\n";
    kelv=celc+273.15;
    fahr=(celc*1.8)+32;
    rea=celc*0.8;
    cout<<"\n..........HASIL KONVERSI SUHUNYA ADALAH..........\n\n";
    cout<<"FAHRENHEIT : "<<fahr<<"\n";
    cout<<"KELVIN : "<<kelv<<"\n";
    cout<<"REAMUR : "<<rea<<"\n";
    return 0;
}
