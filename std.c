#include <stdio.h>
struct student{
    char fn[20];
    char ln[20];
};
struct details{
    char dept[20];
    int year;
    struct student name;
};
int main() {
   struct student stdname ={"praveena","pradeep"};
   struct details std1 ={"ECE",2024,stdname};
    printf("My name is %s %s from the department %s, completed in the year of %d",std1.name.fn,std1.name.ln,std1.dept,std1.year);

    return 0;
}