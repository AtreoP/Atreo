#include<iostream>
using namespace std;
class deletion{
     private:
    int arr[10],size,i,num,pos;
    public:
    void input(){
        cout<<"enter the size of the array";
        cin>>size;
        cout<<"enter the elements of array";
        for(i=0;i<size;i++){
            cin>>arr[i];
        }
        cout<<"enter the number you want to delete";
        cin>>num;
        cout<<"enter the position from which you want to delete the number";
        cin>>pos;
    }
    void del(){
        if(pos<=0 || pos>size+1){
            cout<<"invalid position";
        }
        else{
            for(i=pos-1;i<size-1;i++){
                arr[i]=arr[i+1];
            }
            size--;
        }
    }
    void output(){
        for(i=0;i<size;i++){
            cout<<arr[i];
        }
    }
};
int main(){
    deletion ob;
    ob.input();
    ob.del();
    ob.output();
}