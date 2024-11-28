#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    
    for(a=1; a<=5; a++){
        for(b=5; b>=1; b--){
            if(b>=a){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(b=1; b<=5; b++){
            if(b>=a){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    cout<<endl;
    }
    for(a=4; a>=1; a--){
        for(b=5; b>=1; b--){
            if(b>=a){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(b=1; b<=5; b++){
            if(b>=a){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    cout<<endl;
    }    
}