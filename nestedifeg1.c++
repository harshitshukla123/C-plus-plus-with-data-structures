//if greater than 5000 then neha ,if greater than 2000 then rashmi and below 2000 with frieds
#include<iostream>
using namespace std;
int main(){
    int savings;
    cin>>savings;
    if(savings>5000){
        if(savings>10000){
            cout<<"road trip\n";
        }
        else{
            cout<<"Shopping mall";
        }
    }
    else if(savings>2000){
        if(savings>3000){
            cout<<"MC Donalds";
        }
        else{
            cout<<"Normal hotel";
        }
    }
    else{
        cout<<"Friends\n";
    }
    return 0;
}