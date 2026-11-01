#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[50];
    int marks;
};
void main(){
    int n,i;
    struct student students[100];
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter student roll number: ");
        scanf("%d",&students[i].rollno);
        printf("enter name: ");
        getchar();
        gets(students[i].name);
        printf("Enter Average marks:" );
        scanf("%d",&students[i].marks);
    }
    printf("Student Details:\n");
    printf("Rollno\tname\taveragemarks\n");
    for(i=0;i<n;i++){
        printf("%d\t%s\t%df\n",students[i].rollno,students[i].name,students[i].marks);
    }
}