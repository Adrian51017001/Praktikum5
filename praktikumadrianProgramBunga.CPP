#include<iostream.h>
#include<conio.h>

void main()
	{
    char kode;
    char nama[30], *bunga;
    double harga, bayar;
    int jumlah;
    harga = 0;
    clrscr();
    cout<<"      AHLISIHIR FLORIST      \n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"nama pembeli     : "; cin>>nama;
    cout<<"\n";
    cout<<"input kode bunga : "; cin>>kode;
    cout<<"input jumlah beli: "; cin>>jumlah;
    clrscr();
    if(kode=='a') {
     harga = 100000;
     bunga = "mawar";
     }
    else if(kode=='b') {
     bunga = "melati";
     harga = 200000;
     }
    else if(kode=='c') {
     bunga = "anggrek";
     harga = 300000;
    }
    else if(kode=='d') {
     bunga = "nusa indah";
     harga = 40000;
    }
    else{
      cout<<"tidak ada kode yang sesuai";
      }

cout<<"      STRUK PEMBAYARAN    \n";
 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
 cout<<"nama pembeli      : "<<nama<<"\n";
 cout<<"jenis bunga       : "<<bunga<<"\n";
 cout<<"harga per satuan  : "<<harga<<"\n";
 cout<<"jumlah beli       : "<<jumlah<<"\n";
 cout<<"----------------------------------\n";
 cout<<"\tTotal harga     : Rp. "<<harga * jumlah<<"\n";
 cout<<"\tUang bayar      : Rp. "; cin>>bayar;
 cout<<"\tUang kembali    : Rp. "<<bayar - (harga * jumlah)<<"\n\n";
 cout<<"--------------Terima Kasih---------------";
 getch();
 }

