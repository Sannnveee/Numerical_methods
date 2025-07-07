#include<stdio.h>
#include<math.h>
float f(float x){
return (pow(x,4)-25);
}
float df(float x){
return 4*pow(x,3);
}
int main(){
int n;
float x[100];
printf("Enter the initial guess:\n");
scanf("%f",&x[0]);
x[1]=x[0]-f(x[0])/df(x[0]);
n=0;
while(fabs(x[n+1]-x[n])>0.00001){
n++;
x[n+1]=x[n]-f(x[n])/df(x[n]);
}
printf("\nThe 4th root of 25 is approx (Newton-Raphson method):\n%.5f",x[n+1]);
return 0;
}
