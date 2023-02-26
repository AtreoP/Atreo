#include<stdio.h>
int total(int [],int);
void main(){
    int a[10],n,sum,i;
    printf("enter n");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sum=total(a,n);
    printf("sum = %d",sum);
}
int total(int a[],int n){
    int sum=0,i;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}