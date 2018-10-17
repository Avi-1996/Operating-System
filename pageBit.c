#include<stdio.h>
#include<math.h>
#include<conio.h>
int f(int n);
void main()
{
	int pageSize,frameNo,pageBit,frameBit,pageNo;
	printf("\nenter the page size ");
	scanf("%d",&pageSize);
	printf("enter the no of frames");
	scanf("%d",&frameNo);
	printf("enter the no of Page ");
	scanf("%d",&pageNo);

	if(!f(pageSize))
	{
	       pageSize = makePowerOfTwo(pageSize);

	}
	if(!f(pageNo))
	{
		pageNo = makePowerOfTwo(pageNo);

	}
	if(!f(frameNo))
	{
		frameNo = makePowerOfTwo(frameNo);

	}

	pageBit = powerOfTwo(pageNo);
	pageBit += powerOfTwo(pageSize);
	frameBit = powerOfTwo(frameNo);
	frameBit += powerOfTwo(pageSize);


	printf("no of bit for page\tno of bit to represent frame\t");
	printf("%d\t%d",pageBit,frameBit);
	getch();
}
int powerOfTwo(int n)
{
	int count=-1;
	while(n)
	{
		count++;
		n/=2;
	}
	return count;
}
int makePowerOfTwo(int n)
{
	n+=1;
	while(f(n) != 1)
	{
		n+=1;
	}

	return n;
}

int f(int n)
{
	if(n==0)
	return 0;

	while(n!=1)
	{
		if(n%2 > 0)
		return 0;
		n=n/2;
	}
	return 1;
}
