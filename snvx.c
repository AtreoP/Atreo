#include<stdio.h>
#include<conio.h>
void fun(){
    static int b;
    printf("%d",b);
    b+=1;
}
int main(){
    system("cls");
    fun();
    fun();
    getch();
    return 0;
}