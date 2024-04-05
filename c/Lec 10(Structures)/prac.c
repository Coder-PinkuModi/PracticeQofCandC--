#include<stdio.h>
#include<string.h>
typedef struct game{
    int userid;
    char username[30];
    char gun[20];
}game;
void main(){
    game user1;
    user1.userid=162876580;
    strcpy(user1.username,"Clasher");
    strcpy(user1.gun,"AKM");
    
    printf("%p\n",user1.userid);
    printf("%p\n",user1.username);
    printf("%p\n",user1.gun);
}