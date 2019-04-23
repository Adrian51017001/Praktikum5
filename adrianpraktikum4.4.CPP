#include<iostream.h>
#include<conio.h>

void main()
	{
	int bill;

   cout<<"masukkan bilangan yang akan dicek = ";
   cin>>bill;

   if (bill > 0)
       cout<<bill<<" adalah bilangan positif";
   else if (bill < 0)
       cout<<bill<<" adalah bilangan negatif";
   else
       cout<<"anda menginputkan bilangan nol (0)";
   getch(); }

