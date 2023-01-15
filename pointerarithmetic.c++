#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    cout<<ptr;
    ptr++;
    cout<<ptr<<endl;
    return 0;
}