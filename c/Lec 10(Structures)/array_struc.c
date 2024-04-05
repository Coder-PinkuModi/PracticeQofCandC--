// here we are going to make array with user-defined datatype
#include <stdio.h>
#include<string.h>
void main()
{
    typedef struct pokemon
    {
        char name[20];
        int hp;
        int speed;
        int attack;
        char tier;
    } pokemon; 

    pokemon arr[3]; // declaring array of datatype pokemon with size 10 
    char *ptr;
    strcpy(arr[0].name,"Pikachu");
    arr[0].attack=50;
    arr[0].hp=100;
    arr[0].speed=120;
    arr[0].tier='A';


    strcpy(arr[1].name,"Charizard");
    arr[1].attack=80;
    arr[1].hp=100;
    arr[1].speed=100;
    arr[1].tier='B';


    strcpy(arr[2].name,"Mewtu");
    arr[2].attack=120;
    arr[2].hp=100;
    arr[2].speed=130;
    arr[2].tier='O';

    //printing the array
    for(int i=0;i<3;i++){
        printf("Name :%s ",arr[i].name);
        printf("Attack :%d ",arr[i].attack);
        printf("HP :%d ",arr[i].hp);
        printf("Spped :%d ",arr[i].speed);
        printf("Tier :%c\n\n",arr[i].tier);
    }
}