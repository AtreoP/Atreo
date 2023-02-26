#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    system("cls");
    printf("enter value of a and b");
    scanf("%d %d",&a,&b);
    printf("%d",a & b);
    getch();
    return 0;
}