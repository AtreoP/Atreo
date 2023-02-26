#include<iostream>
using namespace std;
class insertion{
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
        cout<<"enter the number you want to insert";
        cin>>num;
        cout<<"enter the position at which you want to insert the number";
        cin>>pos;
    }
    void insert(){
        if(pos<=0 || pos>size+1){
            cout<<"invalid position";
        }
        else{
            for(i=size-1;i>=pos-1;i--){
                arr[i+1]=arr[i];
            }
            arr[pos-1]=num;
            size++;
        }
    }
    void output(){
        for(i=0;i<size;i++){
            cout<<arr[i];
        }
    }
};
int main(){
    insertion ob;
    ob.input();
    ob.insert();
    ob.output();
}