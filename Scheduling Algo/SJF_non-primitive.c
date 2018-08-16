#include<stdio.h>
int main()
{
	int p[100],bt[100],at[100],i,n,ans[100]={0},temp,j;
	printf("Enter the No of process\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i]=i;
		printf("Enter the bus time of the process %d\n",i+1);
		scanf("%d",&bt[i]);
		printf("Enter the bus time of the process %d\n",i+1);
		scanf("%d",&at[i]);
		
	}
	for(i=1;i<n;i++)
	{
		for(j=i-1;j<n;j++)
		{
			if(bt[i]<bt[j])
			{
				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
			}
		}	
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
		printf("Turn Around time of the process %d is %d\n",p[i]+1,temp);
		printf("Waitinf time  of the process %d is %d\n",i+1,temp-bt[i]);
		
	}
}
