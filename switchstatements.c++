//greetingsusing switch statement
#include<iostream>
using namespace std;
int main(){
    int button;
    cout<<"Input a Number:";
    cin>>button;
    switch(button){
        case 1:
        cout<<"Hello"<<endl;
        break;
        case 2:
        cout<<"Namaste"<<endl;
        break;
        case 3:
        cout<<"Salut"<<endl;
        break;
        case 4:
        cout<<"Ciao"<<endl;
        break;

    default:
    cout<<"I am still learning more!"<<endl;
    break;
    }
    return 0;
} 