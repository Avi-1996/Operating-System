#include<stdio.h>
int main()
{
    int p[100],tq,bt[100],i,flag,k=0,gt[1000],n;
    printf("\nEnter the number of process\n");
    scanf("%d",&n);
    printf("Enter the %d burst time seperated by space\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&bt[i]);
    printf("Enter the time Quantem");
    scanf("%d",&tq);
    while(1)
    {
        flag=0;
        for(i=0;i<n;i++)
        {
            if(bt[i] != 0)
                flag=1;
        }
        if(flag == 1)
        {
            for(i=0;i<n;i++)
            {
                if(bt[i]>0)
                {
                    if(bt[i]>=tq)
                    {
                        gt[k++]=tq;
                        bt[i]-=tq;
                    }
                    else
                    {
                        gt[k++] = bt[i];
                        bt[i] = 0;
                    }
                    printf("p%d -->",i);
                }
            }     
        }
        else
            break;
    }
    printf("\n");
}
