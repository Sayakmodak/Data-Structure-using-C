#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int age;
};
int main(){
    // // int a;
    // // int *ptr;
    // // ptr = &a;

    struct student st;
    struct student *ptr ;
    ptr = &st;

    printf("Enter age: \n");
    scanf("%d",&ptr->age);
    printf("Age is %d \n", ptr->age);

    printf("Enter name: \n");
    scanf("%s",ptr->name);
    printf("Name is %s", ptr->name);
    return 0;
}