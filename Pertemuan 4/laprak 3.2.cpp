#include<iostream> 
using namespace std;

int main() 
{  int a, b, c; 
      bool s; 
      a= 15; 
      b= 3*5; 
      c = 10; 
      s= ((a==b)||(b<c));
      cout<<(a<b)<<endl; 
      cout<<(a<=b)<<endl; 
      cout<<(b>c)<<endl; 
      cout<<(b>=c)<<endl; 
      cout<<(a!=b)<<endl; 
      cout<<(a==b)<<endl; 
      cout<<(b==c)<<endl; 
      cout<< s <<endl; 
      //hasil 0 = false
      //hasil 1 = true
}