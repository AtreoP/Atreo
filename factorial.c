#include<stdio.h>
#include<conio.h>
int main(){
    int num,fact=1;
    system("cls");
    printf("Enter number");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    printf("the factorial is %d",fact);
return 0;
}