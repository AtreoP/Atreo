#include<iostream>
//#include<vector>
#include<stack>
using namespace std;
//V_E_C_T_O_R
/*int main(){
    vector<int> v;
    cout<<"Capacity-->"<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    v.push_back(20);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    v.push_back(35);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    v.push_back(45);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    v.push_back(50);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    for(int i:v){
        cout<<i<<" ";
        cout<<endl;
    }
    cout<<"Element at 4th position-->"<<v.at(3)<<endl;
    cout<<"Size-->"<<v.size()<<endl;
    cout<<"Front element-->"<<v.front()<<endl;
    cout<<"Last element-->"<<v.back()<<endl;
    return 0;
}*/
//S_T_A_C_k
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"Last element-->"<<s.top();
    s.pop();
    cout<<"New element-->"<<s.top();
    cout<<"Size-->"<<s.size();
    cout<<"Empty or not-->"<<s.empty();
    s.swap(2,3);
    for(int i:s){
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}