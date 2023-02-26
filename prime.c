#include<stdio.h>
#include<conio.h>
int main(){
    int num,c=0,i;
    system("cls");
    printf("Enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
       if(num%i==0){
           c+=1;
       }
       }
       if(c==2){
           printf("Prime");
       }
       
       else{
           printf("Composite");
       }
       
           
      
    
return 0;
}