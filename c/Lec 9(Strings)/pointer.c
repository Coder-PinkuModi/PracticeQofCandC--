#include<stdio.h>
void main(){
    char str[]="Pinku Modi";
    char* ptr=str;
    char* ptr2=str;
    *ptr='N';
    ptr2=str;
    printf("%s\n",str);
    printf("%s",ptr);
}