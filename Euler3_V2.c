#include <stdio.h>
#include <math.h>

int isPrime(long long);

main()
{
	//600851475143
	long long num=270282161,temp=num,limit=(num/2),result,i=2;
	for(i=2;i<=limit;)
	{
		//printf("\ni=%d\n",i);
		/*if(i!=2&&i%2==0)						//other than 2, no other even number is prime
			continue;*/
		if(temp%i==0)			//i is a factor
		{
			limit=temp/i;			//to get its largest factor that hasn't been checked yet
			if(isPrime(limit))				//obviously, if i is a factor, then (tmep/i) is also a factor, so we check if it is a prime number
			{
				printf("\n%lld is a prime factor.\n",(limit));
				result=limit;				//if (temp/i) is prime, then it is the largest prime facto, so we break;
				break;
			}
			//if (temp/i) isn't a prime factor, then we check if i a prime factor
			if(isPrime(i))			//if i is prime, then it is a prime factor
			{
				result=i;
				printf("\n%lld is a prime factor.\n",result);
				temp=temp/i;
			}
			else
				printf("\n%lld is a factor.\n",i);			//factor, but not prime
		}
		else
			i++;
	}
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
