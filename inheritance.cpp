#include<iostream>
using namespace std;
class number{
    protected:
    int a,b;
};
class add:public number{
    private:
    int sum;
    public:
    void accept(void){
        cout<<"enter 1st no."<<endl;
        cin>>a;
        cout<<"enter 2nd no."<<endl;
        cin>>b;
    }
    void display(void){
        sum=a+b;
        cout<<"The sum is"<<sum<<endl;
    }
};
class subt:public number{
    private:
    int diff;
    public:
    void accept(void){
        cout<<"enter 1st no."<<endl;
        cin>>a;
        cout<<"enter 2nd no."<<endl;
        cin>>b;
    }
    void display(void){
        diff=a-b;
        cout<<"The difference is"<<diff<<endl;
    }
};
class multiply:public number{
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
class divide:public number{
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
class mod:public number{
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
    add A;
    subt B;
    multiply C;
    divide D;
    mod E;
    A.accept();
    A.display();
    B.accept();
    B.display();
    C.accept();
    C.display();
    D.accept();
    D.display();
    E.accept();
    E.display();
    return 0;
}

