#include<iostream>
using namespace std;
class num{
    protected:
    int a,b;
};
class multiply:public num{
    private:
    int mult;
    public:
    void accept(void){
        cout<<"enter 1st no."<<endl;
        cin>>a;
        cout<<"enter the 2nd no."<<endl;
        cin>>b;
    }
    void display(void){
        mult=a*b;
        cout<<"The product is"<<mult<<endl;
    }
};
class divide:public num{
    private:
    int div;
    public:
    void accept(void){
        cout<<"enter the 1st no."<<endl;
        cin>>a;
        cout<<"enter the 2nd no."<<endl;
        cin>>b;
    }
    void display(void){
        div=a/b;
        cout<<"The quotient is"<<div<<endl;
    }
};
class mod:public num{
    private:
    int modo;
    public:
    void accept(void){
        cout<<"enter the 1st no."<<endl;
        cin>>a;
        cout<<"enter the 2nd no."<<endl;
        cin>>b;
    }
    void display(void){
        modo=a%b;
        cout<<"The remainder is"<<modo<<endl;
    }
};
int main(){
    multiply A;
    divide B;
    mod C;
    A.accept();
    A.display();
    B.accept();
    B.display();
    C.accept();
    C.display();
    return 0;
}