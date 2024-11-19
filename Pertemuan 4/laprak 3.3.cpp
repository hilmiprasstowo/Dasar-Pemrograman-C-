#include<iostream> 
using namespace std; 
int main() 
{  
   int a,b,c; int x,y,z; 
   cout<<"angka a : ";cin>>a; 
   cout<<"angka b : ";cin>>b; 
   cout<<"angka c : ";cin>>c;
   cout<<endl;
   system("pause >nul | echo klik apa saja untuk melihat hasil.......");
   cout<<endl;
   x= 2+a*3+b+c-2*2;
   y= (3+a)*3+b+c-3*2;
   z= 2+a*3+b+(c-2)*2;
   cout<<"Nilai a : "<<a; 
   cout<<"\nNilai b : "<<b; 
   cout<<"\nNilai c : "<<c; 
   cout<<"\nHasil x : "<<x; 
   cout<<"\nHasil y : "<<y; 
   cout<<"\nHasil z : "<<y;

   return 0;
}