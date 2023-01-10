//To display calculator using swith statements
#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Input any character:";
    cin>>button;
    int a,b;
    cin>>a>>b;
    switch(button){
        case 'a':
        cout<<a+b<<endl;
        break;
        case 'b':
        cout<<a-b<<endl;
        break;
        case 'c':
        cout<<a*b<<endl;
        break;
        case 'd':
        cout<<a/b<<endl;
        break;
        default:
        cout<<"Not available"<<endl;
    }
    return 0;
}