#include <iostream>
using namespace std;

int isPalindrome(long);

int main()
{
	int i,j;
	long prod;
	for(i=999; i>100; i--)
	{
		for(j=999;j>100;j--)
		{
			prod=i*j;
			if(isPalindrome(prod))
				break;					//breaks from the j loop
		}
		//if(j>100)						//breaks from the i loop
			//break;
	}
	cout<<i<<" and "<<j<<" are the largest 3 digit numbers whose product "<<prod<<" is a palindrome.";
}

int isPalindrome(long num)
{
	long temp=num, rev=0, digit;
	while(temp>0)
	{
		digit=temp%10;
		rev=(rev*10)+digit;
		temp/=10;
	}
	if(rev==num)
	{
		cout<<num<<endl;
		return 1;
	}
	else
		return 0;
}
