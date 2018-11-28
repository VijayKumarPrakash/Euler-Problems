#include <stdio.h>
#include <math.h>
//600851475143

int Euler3(long long, int);

main()
{
	long long num=600851475143,result,i=2;
	result=Euler3(num,i);
	//if(>result)
	//result=temp;
	printf("\nThe largest Prime factor of %lld is %lld.\n",num,result);
}

int Euler3(long long n,int i)
{
	if(i>sqrt(n))
		return (n>i)?n:i;
	if(n%i==0)
	{
		n=n/i;
		printf("\n%lld is a prime factor.\n",i);
		return Euler3(n,i);
	}
	else
		return Euler3(n,++i);
}
