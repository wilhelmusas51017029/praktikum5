#include<iostream.h>
#include<conio.h>

main(){
int bil;

cout<<"masukkan bilangan yang akan dicek = ";
cin>>bil;

if (bil > 0)
cout<<bil<<" adalah bilangan positif";
else if (bil< 0)
cout<<bil<<"adalah bilangan negatif";
else
cout<<"anda menginputkan bilangan nol (0)";
getch();}
