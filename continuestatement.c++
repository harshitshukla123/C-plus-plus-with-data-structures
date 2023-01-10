//to display all the numbers from 1 to 100 except for the numbers that are divisble by 3
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}