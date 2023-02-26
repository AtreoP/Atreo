#include<iostream>
using namespace std;
int main(){
    int i,j,a[10];
    int temp,n;
    cout<<"Enter Array";
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n-1;i++){
        cin>>a[n+1];
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                cout<<"New Array is"<<a[i];
            }
        }
    }
    return 0;
}