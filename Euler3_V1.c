#include <stdio.h>
#include <math.h>

int isPrime(long long);

main()
{
	long long num=600851475143,temp=num,result,i;
	for(i=3;i<num;i+=2)
	{
		if(num%i==0)
		{
			if(isPrime(i))
			{
				result=i;
				printf("%d is a prime factor.\n",result);
			}
			else
				printf("%lld is a factor.\n",i);
		}
	}
	printf("The largest Prime factor of %lld is %lld.\n",num,result);
}

int isPrime(long long x)
{
	long long i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}
