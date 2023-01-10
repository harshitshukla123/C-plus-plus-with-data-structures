//to print the positive number and terinate the loop when negative number comes
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    do{
        cout<<n<<endl;
        cin>>n;
    }
    while(n>0);
    return 0;
}