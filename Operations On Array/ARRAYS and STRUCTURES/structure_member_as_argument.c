// Call by value
// #include<stdio.h>
// struct student
// {
//     char name[20];
//     int age;
// };
// void print(char name[],int age){
//     printf("%s,%d", name,age);
// }
// int main(){
//     struct student st ={"jack",15};
//     print(st.name,st.age);
//     return 0 ;
// }


// Call by reference

 #include<stdio.h>
struct charset
{
    char i;
    char j;
    
};
void keyvalue(char* i, char *j){
    scanf("%c,%c", i,j);
 }
 int main(){
    struct charset ch ;
     keyvalue(&ch.i,&ch.j);
     printf("%c %c",ch.i,ch.j);
     return 0 ;
}