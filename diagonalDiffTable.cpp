#include<stdio.h>
int main()
{
	int x[5],y[5],d[4][4];
	printf("Enter the values of X:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	
	printf("Enter the value for Y:");
	for(int i=0;i<5;i++)
	{
	scanf("%d",&y[i]);
     }
     
     for (int i=0;i<4;i++)
     {
     	d[0][i]=y[i+1]-y[i];
	}
	
	for(int i=0;i<3;i++)
	{
		d[1][i]=d[0][i+1]-d[0][i];
	}
	
	for(int i=0;i<2;i++)
	{
		d[2][i]=d[1][i+1]-d[1][i];
	}
	
	d[3][0]=d[2][1]-d[2][0];
	
	//printing the difference table in the required format
	printf("\n");
	printf("%d      %d\n", x[0], y[0]);
	printf("               %d\n", d[0][0]);
	printf("%d      %d             %d\n", x[1], y[1], d[1][0]);
	printf("               %d             %d\n", d[0][1], d[2][0]);
	printf("%d      %d             %d              %d\n", x[2], y[2], d[1][1], d[3][0]);
	printf("               %d             %d\n", d[0][2], d[2][1]);
	printf("%d      %d             %d\n",   x[3], y[3], d[1][2]);
	printf("               %d\n", d[0][3]);
	printf("%d      %d\n", x[4], y[4]);
	
	return 0;
}
