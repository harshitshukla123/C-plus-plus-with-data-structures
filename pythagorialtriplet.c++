//pythagorian triplet take three nuumbers a,b,c and find max of those then if it satisfies a2=b2+c2 then it is pythagorian triplet ow not
#include<iostream>
using namespace std;
bool max(int a,int b,int c){
    int x=max(a,max(b,c));
    int y,z;
    if(x==a){
        y=b;
        z=c;
    }
    else if(y==a){
        x=b;
        z=c;
    }
    else{
        x=b;
        y=c;
    }
    if(a*a==b*b+c*c){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(max(a,b,c)){
        cout<<"Pythagorian triplet";
    }
    else{
        cout<<"Not a pythagorian triplet";
    }
    return 0;

}