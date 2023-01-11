//take an array of input size n from user and display maximum and minimum elements in it
#include<iostream>
#include<climits>  //used when initialisation value of max and min are defined in the following manner
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }//can also be written as max=max(max,arr[i]);
        for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            }}//can also be written as max=max(max,arr[i]);
            cout<<max<<" "<<min<<endl;
            return 0;
    }
}