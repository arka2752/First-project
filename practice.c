#include <stdio.h>
struct student
{
    int id;
    char name[20];
    float cgpa;
};

struct teacher
{
    char tm[20];
    int id;
    int salary;
};
int main()
{
    struct student rajesh, arka, shumo;
    printf("Enter Student1 Name = ");
    gets(rajesh.name);
    printf("Name(Student1) : %s", rajesh.name);
}
