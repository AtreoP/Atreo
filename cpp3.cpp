#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int m,i;
    string month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    cout<<"enter month number\n";
    cin>>m;
    if(m<=12 && m!=0){
    for(i=0;i<=m-1;i++){
        cout<<"The month is"<<" "<<month[m-1]<<endl;
        break;
    }
    }
    else{
        cout<<"Invalid number\n";
    }
    return 0;
}