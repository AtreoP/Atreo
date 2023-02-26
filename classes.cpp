#include<iostream>
using namespace std;
class add{
    private:
    int n1,n2,n3;
    public:
    void input(int var1,int var2){
        n1=var1;
        n2=var2;
    }
    void sum(void){
        n3=n1+n2;
    }
    void disp(void){
        cout<<"sum is"<<" "<<n3<<endl;
    }
};
int main(){
    add A1;
    int x,y;
    cout<<"enter 2 nos"<<endl;
    cin>>x;
    cin>>y;
    A1.input(x,y);
    A1.sum();
    A1.disp();
    return 0;
}