#include<iostream>
int main(){
    int a,b,c;
    std::cout<<"enter 3 nos--";
    std::cin>>a>>b>>c;
    if(a>b && a>c){
        std::cout<<"a is greatest."<<std::endl;
    }
    else if(b>c && b>a){
        std::cout<<"b is greatest."<<std::endl;
    }
    else{
        std::cout<<"c is greatest."<<std::endl;
    }
    return 0;
}