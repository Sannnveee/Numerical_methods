#include<stdio.h>
#include<math.h>
int main()
{
	int a[10];
	float arrSum=0.0;
	float sumSqrt=0.0;
	float mean=0.0;
	float SD=0.0;
	
	printf("Enter numbers or array : ");
	for(int i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n you have entered : ");
	for(int i=0;i<10;i++)
	{
		printf("%d", a[i]);
		arrSum=arrSum+a[i];
		sumSqrt+=a[i]*a[i];
	}
	
	printf("\n total is : %f \n", arrSum);
	mean=arrSum/10;
	SD=sqrt(sumSqrt/10-mean*mean);
	printf("Mean and SD value is : %f,%f",mean,SD);
	return 0;
}