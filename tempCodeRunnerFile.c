#include<stdio.h>
int sumof(int arr1[2][2],int arr2[2][2]){
    int i,j,r,c,sum[2][2];
    printf("enter row n col");
    scanf("%d\n %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",sum[i][j]);
        }
    }

}
int transpose(int arr1[2][2],int t[2][2]){
    int i,j,r,c;
    printf("enter row n col");
    scanf("%d\n %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            t[j][i]=arr1[i][j];
        }
    }
}
int main(void){
    int arr1[2][2],arr2[2][2],t[2][2],sum[2][2],i,j,n,ch;
    printf("enter n");
    scanf("%d",&n);
    printf("enter choice");
    scanf("%d",&ch);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    switch(ch){
        case 1:
        printf("sum of arrays is %d",sumof(arr1,arr2));
        break;
        case 2:
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d",t[i][j]);
            }
            printf("\n");
        }
        printf("transpose of the array is %d",transpose(arr1,t));
        break;
    }
    return 0;
}
