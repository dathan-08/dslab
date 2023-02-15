#include<stdio.h>

int main()
{
    
    int n, m, i, j, first[10][10], second[10][10], sum[10][10], diff[10][10];
    printf("\nEnter the number of rows and columns of the first matrix \n\n");
    scanf("%d%d", &m, &n);

    printf("\nEnter the %d elements of the first matrix \n\n", m*n);
    for(i= 0; i< m; i++)   
        for(j = 0; j < n; j++)  
            scanf("%d", &first[i][j]);

    printf("\nEnter the %d elements of the second matrix \n\n", m*n);
    for(i = 0; i < m; i++)   
        for(j = 0; j < n; j++)   
            scanf("%d", &second[i][j]);

    /*
        printing the first matrix
    */
    printf("\n\nThe first matrix is: \n\n");
    for(i = 0; i < m; i++)   
    {
        for(j = 0; j < n; j++)   
        {
            printf("%d\t", first[i][j]);
        }
    printf("\n");
    }

    /* 
        printing the second matrix
    */
    printf("\n\nThe second matrix is: \n\n");
    for(i = 0; i < m; i++)   
    {
        for(j =0; j < n; j++)  
        {
            printf("%d\t", second[i][j]);
        }
    printf("\n");
    }

    /* 
         SUM of the two matrices 
        
    */
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            sum[i][j] = first[i][j] + second[i][j];

    // printing the elements of the sum matrix
    printf("\n\nThe sum of the two entered matrices is: \n\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    /*
         DIFFERENCE of the two matrices 
        
    */
    for(i= 0; i < m; i++)
        for(j = 0; j < n; j++)
            diff[i][j] = first[i][j] - second[i][j];

    // printing the elements of the diff matrix
    printf("\n\nThe difference(subtraction) of the two entered matrices is: \n\n");
    for(i = 0; i < m; i++)
    {
        for(j= 0; j < n; j++)
        {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }


    return 0;
}
