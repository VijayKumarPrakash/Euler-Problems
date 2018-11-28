#include <stdio.h>
#include <math.h>

long long findTheLargestPrimeFactor(long long,long long,long long,long long,long long);
int isPrime(long long,long long);

main()
{
	long long num=50607080,temp=num,result,i=2;
	result=findTheLargestPrimeFactor(num,temp,2,temp,-1);
	if(result==-1)
		printf("\nThe largest prime factor of %lld is the number itslef (%lld).\n",num,num);
	else
	{
		printf("\n%lld is a prime factor.\n",result);
		printf("\nThe largest Prime factor of %lld is %lld.\n",num,result);	
	}
}

long long findTheLargestPrimeFactor(long long num, long long temp, long long i, long long limit, long long result)
{
	if(i<=limit)
	{
		if(temp%i==0)
		{
			limit=temp/i;
			if(isPrime(limit,2))
			{
				i=limit+1;
				result=limit;
			}
			else
			{
				result=i;
				printf("\n%lld is a prime factor.\n",result);
				temp=temp/i;
			}
		}
		else
			i++;
		findTheLargestPrimeFactor(num,temp,i,limit,result);
	}
	else
		return result;
}

int isPrime(long long x, long long j)
{
	if(j==x)
		return 1;
	else if(x%j==0)
		return 0;
	else
		return isPrime(x,j+1);
}
