// this code is only valid for square matrix
#include <stdio.h>
void main()
{
    int r, c, rcount = 1, temp = 0;
    printf("Enter the Rows of the array :");
    scanf("%d", &r);
    printf("Enter the Columns of the array :");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    { // to take the input of the array by user
        printf("Enter the data of Row- %d: ", rcount);
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        rcount++;
    }
    printf("Array is :\n");
    for (int i = 0; i < r; i++)
    { // printing of array before transpose
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    { // loop for transpose
        for (int j = i; j < c; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("Array after transpose :\n");
    for (int i = 0; i < r; i++)
    { // printing of array after transpose
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}