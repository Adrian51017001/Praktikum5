#include<iostream.h>
#include<conio.h>
#include<stdlib>
#include<iomanip>

int main ()
{
char hari;
cout<<"pilihan : "<<endl;
cout<<"A : Senin ";
cout<<"B : Selasa ";
cout<<"C : Rabu ";
cout<<"D : Kamis ";
cout<<"E : Jumat ";
cout<<"F : Sabtu ";
cout<<"G : Ahad ";
cout<<endl;
cout<<endl;
cout<<"masukkan kode hari (A-G) : ";
cin>>hari;
if (hari=='a' ||hari=='A')
  cout<<"senin"<<endl;
else
if (hari=='b' ||hari=='B')
  cout<<"selasa"<<endl;
  else
if (hari=='c' ||hari=='C')
  cout<<"rabu"<<endl;
  else
if (hari=='d' ||hari=='D')
  cout<<"kamis"<<endl;
else
if (hari=='e' ||hari=='E')
  cout<<"jumat"<<endl;
else
if (hari=='f' ||hari=='F')
  cout<<"sabtu"<<endl;
else
if (hari=='g' ||hari=='G')
  cout<<"ahad"<<endl;
else
cout<<"maaf kode yang anda masukkan salah";
getch();
}



