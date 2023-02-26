#include<stdio.h>
#include<conio.h>
int main(){
int i,j;
int a[3][3],b[3][3];
import("cls");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d\t",&a[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        b[i][j]=a[j][i];   
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",b[i][j]);    
    }
    printf("\n");
}
getch();
return 0;
}