#include<iostream>
using namespace std;
int main(){
    int l,m,r,x;
    int arr[10];
    int i;
    cout<<"Enter the array";
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"Enter the search element";
    cin>>x;
    l=0;
    r=9;
    m=l+(r-l)/2;
    while(l<r){
        if(arr[m]<x){
            l=m+1;
            if(arr[l]==x)
            cout<<"Element is present at "<<l;
        }
        else if(arr[m]==x){
            cout<<"Element is present at "<<m;
        }
        else{
            r=m-1;
            if(arr[r]==x)
            cout<<"Element is present at "<<r;
        }
        return 0;

    }
    

}