#include<stdio.h>
#include<conio.h>
int main(){
    static int a;
    system("cls");
    printf("%d",a);
    {
        a+=1;
        printf("%d",a);
    }
    {
        a+=1;
        printf("%d",a);
        getch();
        return 0;
    }

}
