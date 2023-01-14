//Pointers are the variables which staores the address of other variables
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr;
    ptr=&a; 
    cout<<*ptr<<endl;
    *ptr=20;
    cout<<a<<endl;
    return 0;
} 