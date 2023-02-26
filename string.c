#include<stdio.h>
#include<conio.h>
int main(){
    char str1[20];
    char str2[20];
    int i,j;
    printf("Enter 1st String");
    scanf("%s",str1);
    printf("Enter 2nd String");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++);
        for(j=0;str2[j]!='\0';j++){
            str1[i]=str2[j];
            i++;
        }
    
    str1[i]=='\0';
    printf("%s",str1);
    return 0;
}
