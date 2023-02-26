#include<iostream>
using namespace std;
class top{
    public:
     void fun(){
        cout<<"from top";
    }
};
class bottom:public top{
    public:
    void fun(){
        cout<<"from bottom";
    }
};
int main(){
    top *p=new top;
    p->fun();
}