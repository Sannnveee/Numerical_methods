#include <stdio.h>

int main() 
{
    int a[100][100];
    int transpose[100][100], i, j,r,c;
    printf("Enter no. of rows: ");
    scanf("%d", &r);
    printf("Enter no. of cols: ");
    scanf("%d",&c);

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	    
		printf("Enter matrix element : \n", i+1,j+1);
		scanf("%d", &a[i][j]);
	}
}

printf("\nEntered matrix: \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}