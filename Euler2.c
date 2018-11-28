#include <stdio.h>

int fib(int n);

int main()
{
	int value,x=1,sum=0;
	value=fib(x);
	while(value<=4000000)
	{
		if(value%2==0)
			sum+=value;
		value=fib(++x);
	}
	printf("\nThe sum of even Fibonacci numbers less than 4 million is: %d.\n",sum);
}

int fib(int n)							//function to obtain the ith Fibonacci Number
{
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else
		return fib(n-1)+fib(n-2);			//recursive call
}
