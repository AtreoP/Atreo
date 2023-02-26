#include<iostream>
using namespace std;
void rotate(int arr[],int d,int n){
    int temp[n];
    int k=0;
    for(int i=d;i<n;i++){
        temp[k]=arr[i];
        k++;
    }
    for(int i=0;i<d;i++){
        temp[k]=arr[i];
        k++;
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(int arr[]){
    int N=sizeof(arr)/sizeof(arr[0]);
    int d;
    cout<<"enter no. of elements you want to shift";
    cin>>d;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    rotate(arr,d,N);
    printarray(arr,N);
    return 0;
}
