#include <stdio.h>
#include <stdlib.h>

long long int fib(long long int n);


void main()
{
printf("enter the max num..\n");
long long int max;
scanf("%lld",&max);

long long int F,F1,F2;
F1 = 0;
F2=1;
printf("fib(0) = 0\nfib(1) = 1\n");


long long int i;
for(i=2;i<=max;i++)
{

 F = F1+F2;
 F1=F2;
 F2=F;  
 printf("fib(%lld) = %lld\n",i,F);
     
}
getchar();


}


