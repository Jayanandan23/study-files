#include <stdio.h>
#define srow 50
#define mrow 20
#define mcolumn 20

int main()
{
    int mat[mrow][mcolumn], sparse[srow][3];
    int i, j, nzero = 0, mr, mc, sr, s;

    printf("Enter the number of rows: ");
    scanf("%d", &mr);
    printf("Enter the number of columns: ");
    scanf("%d", &mc);

    // Reading matrix elements
    for (i = 0; i < mr; i++)
    {
        for (j = 0; j < mc; j++)
        {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Entered matrix:\n");
    for (i = 0; i < mr; i++)
    {
        for (j = 0; j < mc; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    // Converting to sparse matrix
    s = 1; // Start filling from second row (first row is for meta info)
    for (i = 0; i < mr; i++)
    {
        for (j = 0; j < mc; j++)
        {
            if (mat[i][j] != 0)
            {
                sparse[s][0] = i;
                sparse[s][1] = j;
                sparse[s][2] = mat[i][j];
                s++;
                nzero++;
            }
        }
    }

    // Fill metadata in first row
    sparse[0][0] = mr;
    sparse[0][1] = mc;
    sparse[0][2] = nzero;

    // Print sparse matrix
    sr = nzero + 1;
    printf("\nSparse Matrix (row, column, value):\n");
    for (i = 0; i < sr; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", sparse[i][j]);
        }
        printf("\n");
    }

    return 0;
}
