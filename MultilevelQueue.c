#include<stdio.h>
void  waittime(int an_q1[],int pr1[],int an_q2[],int n,int count,int bt1[],int bt2[],int sum)
{
	int i,p[count],wt[count],j,temp,pos;
	for(i=0;i<count;i++)
	{
		p[i]=i+1;//stores process no.
	}
	 for(i=0;i<count;i++)
    {
        pos=i;
        for(j=i+1;j<count;j++)
        {
            if(pr1[j]<pr1[pos])
                pos=j;
        }
 
        temp=pr1[i];
        pr1[i]=pr1[pos];
        pr1[pos]=temp;
 
        temp=bt1[i];
        bt1[i]=bt1[pos];
        bt1[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
 
    wt[0]=0;	//waiting time for first process is zero
 	int total;
    //calculate waiting time
    for(i=1;i<count;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
           {
			 wt[i]+=bt1[j];
 			
 		}
 	
        total+=wt[i];
    }
    printf("\nProcess\t    Burst Time    \tWaiting Time\t Queue");
    for(i=0;i<count;i++)
    {
    	printf("\nP[%d]\t\t  %d\t\t    %d\t\t   %d",p[i],bt1[i],wt[i],1);
    }
 
    
    avgWt( an_q2,bt2, count, n,sum,total);
    
}

