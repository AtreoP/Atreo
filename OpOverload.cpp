#include<iostream>
using namespace std;
class demo{
    private:
    int a,b;
    public:
    demo():a(4),b(3){}
    demo(int x,int y):a(x),b(y){}
    void show(){
        cout<<a<<b<<endl;
    }
    demo operator + (demo ob){
        demo temp;
        temp.a = a + ob.a;
        temp.b = b + ob.b;
        return temp;
    }
    void operator++(){
        a++;
        b++;
    }
};
int main(){
    demo ob1;
    demo ob2(3,2);
    ob1.show();
    ob2.show();
    demo ob3 = ob1 + ob2; 
    ob1.operator + (ob2);
    ++ob2;
    ob3.show();
}