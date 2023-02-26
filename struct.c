#include<stdio.h>
#include<conio.h>
struct marks{
    int sub1;
    int sub2;
    int sub3;
    int total;
};
main(){
    int i;
    struct marks student[3]={{10,20,30,0},{40,50,60,0},{70,80,90,0}};
    struct marks total;
    for(i=0;i<=2;i++){
        student[i].total=student[i].sub1+student[i].sub2+student[i].sub3;
        total.sub1+=student[i].sub1;
        total.sub2+=student[i].sub2;
        total.sub3+=student[i].sub3;
        total.total+=student[i].total;
    }
    printf("STUDENT            TOTAL\n\n");
    for(i=0;i<=2;i++)
       printf("Student[%d]  %d\n",i+1,student[i].total);
    printf("\nSUBJECT           TOTAL\n\n");
    printf("%s        %d\n%s        %d\n%s        %d\n",
        "SUBJECT 1",total.sub1,
        "SUBJECT 2",total.sub2,
        "SUBJECT 3",total.sub3);
    printf("\nGrand Total = %d\n",total.total);

}