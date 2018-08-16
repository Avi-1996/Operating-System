#include<stdio.h>
int main()
{
	int bt[100],at[100],i,n,ans[100]={0},temp;
	printf("Enter the No of process\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the bus time of the process %d\n",i+1);
		scanf("%d",&bt[i]);
		printf("Enter the bus time of the process %d\n",i+1);
		scanf("%d",&at[i]);
		
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
			ans[i]=bt[i];
		else
			ans[i]=ans[i-1]+bt[i];	
	}
	for(i=0;i<=n;i++)
	{
		printf("%d ",ans[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=(ans[i]-at[i]);
		printf("Turn Around time of the process %d is %d\n",i+1,temp);
		printf("Waitinf time  of the process %d is %d\n",i+1,temp-bt[i]);
		
	}
}
