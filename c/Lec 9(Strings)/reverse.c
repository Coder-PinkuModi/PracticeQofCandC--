#include<stdio.h>
void rev(char str[],int len)
{
    for(int i=0,j=len-1;i<j;i++,j--){
      char  temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
}
void main(){
    printf("Enter the string to be revrsed :");
    char str[100];
  gets(str);
  int len=0;
  while(str[len]!='\0'){
    len++;
  }
  rev(str,len);
}