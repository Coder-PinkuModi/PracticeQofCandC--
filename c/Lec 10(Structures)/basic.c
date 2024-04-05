#include<stdio.h>
#include<string.h>
void main(){ // let's store students name,roll number and sex(M or F)
    typedef struct student
    {
        char str[20];
        int roll;
        char sex[1];
    }student;

    student std1;
    strcpy(std1.str,"Pinku");
    std1.roll=158;
    strcpy(std1.sex,"M");
    printf("%s\n",std1.str);
    printf("%d\n",std1.roll);
    printf("%s\n\n",std1.sex);
   
    student std2;
    strcpy(std2.str,"Aditya");
    std2.roll=70;
    strcpy(std2.sex,"M");
    printf("%s\n",std2.str);
    printf("%d\n",std2.roll);
    printf("%s\n\n",std2.sex);
   
    student std3;
    strcpy(std3.str,"Arohi");
    std3.roll=80;
    strcpy(std3.sex,"F");
    printf("%s\n",std3.str);
    printf("%d\n",std3.roll);
    printf("%s\n\n",std3.sex);
}