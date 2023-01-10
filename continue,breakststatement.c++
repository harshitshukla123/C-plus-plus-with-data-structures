//Neha's mom allows her to go out only on odd days and gives pocketmoney of 3000 and dif that will be 0 she can't go out 

#include<iostream>
using namespace std;
int main(){
    int i,pocketMoney=3000;
    for(i=1;i<=30;i++){
        if(i%2==0){
            continue;
        }
        if(pocketMoney==0){
            break;
        }
        cout<<"Go out today"<<endl;
        pocketMoney=pocketMoney-300;
         
    }
}