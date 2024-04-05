#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Hi pinku";
    char str2[30];
    gets(str);
    FILE *ptr=fopen("pinku.txt","a");
    ptr=fopen("pinku.txt","w");
    fprintf(ptr,"%s",str);
    fprintf(ptr,"%s",str2);

    fclose(ptr);
return 0;
}