#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number of arguments: ");
	scanf("%d", &n);
	
	int x[n],y[n],X,Y=0,num,den;
	printf("X\tY\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d%d", &x[i],&y[i]);
	}
	
	printf("Enter the value of X for which f(X) is to be found: ");
	scanf("%d",&X);
	
	for(i=0;i<n;i++)
	{
		num=1,den=1;
		for(j=0;j<n;j++)
		{
			if(j!=i)
			{
				num*=X-x[j], den*=x[i]-x[j];
			}
		}
		
		Y+=(num/den)*y[i];
	}
	
	printf("\nf(%d)=%d",X,Y);
	
	return 0;
}
 