#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("factorial is %d",factof(n));
return 0;   
}
int factof(int n){
    int i;
    int fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    if(n<=1){
        return 1;
    }
    else{
        return n*factof(n-1);
    }
}

