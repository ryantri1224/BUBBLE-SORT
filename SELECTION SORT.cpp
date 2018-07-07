#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int nilai[20];
    int n,i,j,x,pos,tampung;
     cout<<"PROGRAM PENGURUTAN BILANGAN SELECTION SORT\n\n";
    cout<<"Masukan banyak inputan : ";
    cin>>n;
    for (int i=0; i<n; i++)
   {
   cout<<"Nilai ke "<<(i+1)<<" : ";
   cin>>nilai[i];
   }
    for (int i=0;i<n-1;++i)
 {
  pos=i;
  for (int j=i+1;j<n;++j)
  {
   if (nilai[j]<nilai[pos])
   {
             pos=j;   
   }
  }
  if (pos !=i)
  {
                tampung=nilai[pos];
    nilai[pos]=nilai[i];
    nilai[i]=tampung;
} 
	cout<<endl;
    cout<<"\nData setelah diurutkan  : "<<endl;
   
 for (int i=0;i<n;++i)
 {
  cout<<nilai[i]<<" ";
  }
     
   
getch();    
}
}
