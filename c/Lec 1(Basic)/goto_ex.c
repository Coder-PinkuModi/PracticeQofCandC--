#include <stdio.h>  
int main()   
{  // example to use goto statement
   //it's a type of control statement like if-else as well as works as loops
 
 /* First label:
  then certain piece of code
  and then a terminating statement
  after that goto label */

  int num,i=1;   
  printf("Enter the number whose table you want to print?");   
  scanf("%d",&num);  
  table:   
  printf("%d x %d = %d\n",num,i,num*i);  
  i++;  
  if(i<=10)
  goto table;
}