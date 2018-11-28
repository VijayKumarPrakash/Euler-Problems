#include <stdio.h>
#include <math.h>
//600851475143
int isPrime(long long);

main()
{
	//600851475143
	long long num=98301613,temp=num,limit=num,result=-1,i=2;
	for(i=2;i<=limit;)
	{
		if(temp%i==0)			//i is a factor
		{
			limit=temp/i;					//to get the largest factor that hasn't been checked yet
			if(isPrime(limit))				//obviously, if i is a factor, then (tmep/i) is also a factor, so we check if it is a prime number
			{
				printf("\n%lld is a prime factor.\n",(limit));
				result=limit;				//if (temp/i) is prime, then it is the largest prime factor, so we break;
				break;
			}
			//if (temp/i) isn't a prime factor, then we set result as i (as i is a prime factor, but we cannot be sure it is the largest PF
			result=i;
			printf("\n%lld is a prime factor.\n",result);
			temp=temp/i;
		}
		else
			i++;
	}
	if(result==1)
		printf("\nThe largest prime factor of %lld is the number itslef (%lld).\n",num,num);
	else
		printf("\nThe largest Prime factor of %lld is %lld.\n",num,result);
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
