#include<iostream>
using namespace std;
const size=3;
template<class A>
class vector{
    A* v;
    public:
    vector(){
        v=new A[size];
        for(int i=0;i<size;i++){
            cout<<i<<endl;
        }
    }
};
int main(){
    vector<int> a;
    a.A();
    return 0;
}