#include <stdio.h>

int main() 
{
    int a[100][100];
    int transpose[100][100], i, j, r, c, count=0;
    printf("Enter no. of rows: ");
    scanf("%d", &r);
    printf("Enter no. of cols: ");
    scanf("%d",&c);

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	    
		printf("\nEnter matrix element : \n", i+1,j+1);
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

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		if(a[i][j]!=transpose[i][j])
		{
			count++;
			break;
		}
	}
}
if(count==0)
{
	printf("\nGiven matrix is symmetric\n");
}
else
{
	printf("\nGiven matrix is not symmetric");
}
    return 0;
}