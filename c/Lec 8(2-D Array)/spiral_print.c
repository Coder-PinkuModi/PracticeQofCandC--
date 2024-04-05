// in this question we are going to print 2-D matrix in spiral form
// like matrix
// 1 2 3
// 4 5 6
// 7 8 9 Then the output will print as- 1 2 3 6 9 8 7 4 5
#include <stdio.h>
void main()
{
    int r, c, rcount = 1;
    printf("Enter the row of the matrix :");
    scanf("%d", &r);
    printf("Enter the column of the matrix :");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter the data of the matrix b\n");
    for (int i = 0; i < r; i++)
    {
        printf("Enter the data of Row- %d: ", rcount);
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        rcount++;
    }
    printf("Matrix given is :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int minc = 0, maxc = c - 1, minr = 0, maxr = r - 1, count = 0;

    while (count < (c * r))
    {
            for (int j = minc; j <= maxc && count < (c * r); j++)
            {
                printf("%d ", arr[minr][j]);
                count++;
            }
        
        minr++;
        for (int i = minr; i <= maxr && count < (c * r); i++)
        {
                printf("%d ", arr[i][maxc]);
                count++;
            
        }
        maxc--;

            for (int j = maxc; j >= minc && count < (c * r); j--)
            {
                printf("%d ", arr[maxr][j]);
                count++;
            }

        maxr--;
        for (int i = maxr; i >= minr && count < (c * r); i--)
        {
             printf("%d ", arr[i][minc]);
                count++;
            }
        minc++;
    }
}
