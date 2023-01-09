#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"a is max\n";
    }
    else if(b>c){
        cout<<"b is max\n";
    }
    else {
        cout<<"c is max\n";
    }
    return 0;
}