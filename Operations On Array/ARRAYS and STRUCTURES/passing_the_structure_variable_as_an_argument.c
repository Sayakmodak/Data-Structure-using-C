#include<stdio.h>
struct student{
    char name[20];
    int age;
};
void print(struct student st){
    printf("%s %d",st.name,st.age);
}
int main(){
    struct student s1 = {"Jack",45};
    struct student s2 = {"Mack",46};
    print(s1);
    printf("\n");
    print(s2);
    return 0;
}

