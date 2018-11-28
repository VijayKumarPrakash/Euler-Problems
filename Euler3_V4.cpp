#include <stdio.h>
#include <math.h>
//600851475143

main()
{
	long long num=600851475143,temp=num,result,i=2;
	while(i<=sqrt(temp))
	{
		if(temp%i==0)			//i is a factor
		{
			temp=temp/i;
			//printf("\n%lld is a prime factor.\n",result);
		}
		else
			i++;
	}
	result=temp>i?temp:result;
	printf("\nThe largest Prime factor of %lld is %lld.\n",num,result);
}
