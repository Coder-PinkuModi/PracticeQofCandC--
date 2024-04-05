#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr=fopen("pinku.txt","r");
    char str[100];
    fgets(str,100,ptr);
    printf("%s",str);
    fclose(ptr);
    return 0;
}