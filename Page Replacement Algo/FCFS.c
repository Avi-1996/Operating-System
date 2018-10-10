#include<stdio.h>
int search(int sq[],int item,int length);
void main()
{
  int frame[100],max_frame,i,j,n1,n,seq[100],top=0,pf=0,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&seq[i]);
  printf("\nEnter the number of frame\n");
  scanf("%d",&max_frame);
  for(j=0;j<max_frame;j++)
    {
      frame[j] = seq[j];
      pf++;
    }
  for(i=pf;i<n;i++)
  {
      if(!search(frame,seq[i],max_frame))
      {
        frame[top] = seq[i];
        top+=1;
        pf++;
      }
       if(top==max_frame)
        top=0;
      for(j=0;j<3;j++)
      printf("%d  ",frame[j]);

  }
  printf("\n%d is the totak page fault\n",pf);
}

int search(int sq[],int item,int length)
{
  int i;
  for(i=0;i<length;i++)
  {
    if(sq[i] == item)
    return 1;
  }
  return 0;
}
