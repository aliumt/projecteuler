#include<stdio.h>

int main() {

int k3=0,k5=0,i=0;

for(i=0;i<1000;i++)
{
	if (i%3==0)
	   k3+=i;
	else if (i%5==0)
	   k5+=i;
	   
}

int sum=k5+k3;
 printf("%d",sum);




return 0;}
