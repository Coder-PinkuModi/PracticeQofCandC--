// Q: To print the Christmas tree if rows are given... with triangles too!!

#include<stdio.h>

//lower part of the christmas tree
void christmasLowerPart(int row){
     for(int i=1;i<=row-1;i++){
        for(int j=1;j<=2;j++) printf("  "); //for spaces
        for(int k=1;k<=(row*2-1)-4;k++) printf("* "); //for stars
        printf("\n");
     }
     return;
}

// for triangles of the tree
void christmasTriangle(int row){
    // loop for number of rows
    for(int i=1;i<=row;i++){
        // loops for number of spaces
        for(int j=1;j<=row-i;j++) printf("  ");
        
        //loops for star
        for(int k=1;k<=(i*2)-1;k++) printf("* ");
     
     printf("\n");
    }
    return;
}

int main(){
    
    // getting the number of rows for each triangle
    int triangleHieght,triangleCount;
    printf("Enter the desired height for each triangle (minimum 3): ");
    scanf("%d",&triangleHieght);
    
    if(triangleHieght>=3){
    //Getting the number of tiabgles
    printf("Enter the number of triangles: ");
    scanf("%d",&triangleCount);
    
    // looping till all the triangles printed
    for(int i=1;i<=triangleCount;i++){
        christmasTriangle(triangleHieght);
    }

    // making the tree lower part
    christmasLowerPart(triangleHieght);
    }
    else {
        printf("Entered value of row is not capable of making christmas tree !!");
    }
    return 0;
}

