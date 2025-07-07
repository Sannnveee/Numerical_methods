#include<stdio.h>
int main()
{
   int a[10]={56,67,88,90,32,69,95,100,86,97};
   int i;
   int stID=1;
   for(i=0;i<10;i++)
   {
   	printf("Student %d has got %d in this Subject\n",stID,a[i]);
   	stID++;
   }
   return 0;
}