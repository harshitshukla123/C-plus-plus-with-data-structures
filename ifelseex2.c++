//if greater than 5000 then neha ,if greater than 2000 then rashmi and below 2000 with frieds
#include<iostream>
using namespace std;
int main(){
    int savings;
    cin>>savings;
    if(savings>5000){
    cout<<"Neha\n";
    }
    else if(savings>2000){
        cout<<"Rashmi\n";

    }
    else{
        cout<<"Friends\n";
    }
    return 0;
}