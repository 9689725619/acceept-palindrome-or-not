#include<stdio.h>
int main()
{
	int sum=0,num,rem,nsave;
	printf("enter number :");
	scanf("%d",&num);
	nsave=num;
	do
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	while(num>0);
	if(nsave==sum)
	printf("%d is palindrome",nsave);
	else
	printf("%d not ",nsave);
	return 0;
}
