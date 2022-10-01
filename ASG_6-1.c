#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct student {
    char name[20];
        int age;
        int degree;
        int section;
} record[5];

void print_student_records()
{
    for (int i=0;i<=5;i++){
        printf("%s\n", record[i].name);
        printf("%d\n", record[i].age);
        printf("%d\n", record[i].degree);
        printf("%d\n", record[i].section);
    }
}

int main()
{
        strcpy(record[0].name , "Name1");
        record[0].age=20;
        record[0].degree=85;
        record[0].section=1;
        strcpy(record[1].name , "Name2");
        record[1].age=25;
        record[1].degree=60;
        record[1].section=2;
        strcpy(record[2].name , "Name3");
        record[2].age=21;
        record[2].degree=90;
        record[2].section=3;
        strcpy(record[3].name , "Name4");
        record[3].age=23;
        record[3].degree=95;
        record[3].section=4;
        strcpy(record[4].name , "Name5");
        record[4].age=23;
        record[4].degree=70;
        record[4].section=5;
        print_student_records();
    return 0;
}
