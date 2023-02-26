#include<iostream>
#define size 5
using namespace std;
struct stack{
    int s[size];
    int top;
}st;
int main(){
    int top=size-1;
    if(top==true){
        cout<<"Full";
    }
    else{
        for(int i=0;i<top;i++){
            cout<<struct[i];
            top++;
        }
    }
    return 0;
}