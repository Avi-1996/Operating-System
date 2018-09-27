#include<stdio.h>
void main()
{
    int bt[100],pr[100],n,i,tat[100],temp,j,p[100];
    printf("Enter the no of process");
    scanf("%d",&n);
    printf("\nenter the \n")
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    printf("Enter the priorty of each process greater no will have greater priorty");

    for(i=0;i<n;i++)
    {
        scanf("%d",&pr[i]);
        p[i] = i;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(pr[i] <= pr[j])
            {
                temp = pr[i];
                pr[i] = pr[j];
                pr[j] = temp;
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    temp=0;
    for(i=0;i<n;i++)
    {
       temp=temp+bt[i];
        tat[i] = temp;
    }
    printf("\nturn around time\n");
    printf("\nProcess\tTAT\tWaiting Time\n");
    for(i=0;i<n;i++)
    {
        printf("p%d\t%d:-\t%d\n",i,tat[p[i]],(tat[p[i]]-bt[p[i]]));
    }
}
