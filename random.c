#include<stdio.h>
#include<conio.h>
int main(){
    int n,j,m;
    system("cls");
    printf("enter numbers");
    scanf("%d %d",&n,&j);
    m=++n-j+10;
    printf("%d",m);
return 0;
}