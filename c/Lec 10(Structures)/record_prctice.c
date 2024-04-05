#include<stdio.h>
#include<string.h>

void main(){
int count=1;
    typedef struct cricketer{
        char firstname[20];
        char lastname[20];
        int age;
        int nOfMatches;
        float avg_runs;
    }cricketer;

    cricketer arr[5];
    //now taking input of the cricketers
   printf("Enter data in the order first name,last name,age,no. of matches,average runs \n");
    for(int i=0;i<5;i++){
         printf("Enter the data of cricketer %d :",count);
            scanf("%s",arr[i].firstname);
            scanf("%s",arr[i].lastname);
            scanf("%d",&arr[i].age);
            scanf("%d",&arr[i].nOfMatches);
            scanf("%f",&arr[i].avg_runs);
        count++;
    }
     printf("Data is \n\n");
     for(int i=0;i<5;i++){
        
            printf("Name :%s %s",arr[i].firstname,arr[i].lastname);
            printf("Age :%d",arr[i].age); 
            printf("No. of Matches :%d",arr[i].nOfMatches);
            printf("Average Runs :%f",arr[i].avg_runs);
    }
    
}