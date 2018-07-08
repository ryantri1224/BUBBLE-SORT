#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

main()
{ 
     int queue[5];
     int depan=0;
     int belakang=0;
     int pilihan, data, i;
     
do
{
  menu:
  cout<<"\t PROGRAM ARRAY OF QUEUE "<<endl;
  cout<<"\t MENU "<<endl;
  cout<<"\t 1. Masukan Data "<<endl;
  cout<<"\t 2. Keluarkan / Hapus Data"<<endl;
  cout<<"\t 3. Lihat Data Antrian "<<endl;
  cout<<"\t 4. Exit Program "<<endl;
  cout<<"\t Pilih Menu [1/2/3/4] ";
  cin>>pilihan;

  switch (pilihan)
  {
  case 1: //enqueue
  //apakah queue belum penuh?
  if (belakang < 4 )
  { 
  cout<<"\t Data Masuk = "; 
  cin>>data;
  queue[belakang+1] = data;
  belakang++;
  system("cls"); getch();
  
  if (belakang == 0)
   depan = 0;
   }
   else
    cout<<"\t Queue penuh! \n";
    getch(); system("cls"); goto menu;
    break;

    case 2: //dequeue
    //apakah queue belum kosong?
    if (depan <= belakang)
    { 
          cout<<"\t Data keluar = "<<queue[depan];
          depan++;
          getch(); 
          }
          else
    cout<<"\t Queue kosong!\n";
    getch(); system("cls");
    break;
    
    
    case 3:
             cout<<endl;
             cout<<"\t Tampilan Data QUEUE Yang Sudah Di Masukan "<<endl; 
             for(i=depan; i<=belakang; i++)    
             cout<<"\t DATA ANTRIAN QUEUE "<<" "<<queue[i]<<endl;
             cout<<"\n";
             getch(); system("cls"); goto menu;
             break;

    case 4:
             cout<<"\t TERIMAKASIH TELAH MENGGUNAKAN PROGRAM KAMI ";
     
             }
             }
             while (pilihan != 4);
             getch();
             }
