#include<stdio.h>
#include<conio.h>
extern int a;
int main(){
    int b=5;
    int a=6;
    system("cls");
    printf("%d %d",a,b);
    {
        int c=10;
        printf("%d %d %d",a,b,c);
    
    }
  getch();
  return 0;

}