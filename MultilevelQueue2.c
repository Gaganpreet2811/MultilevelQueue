int avgWt(int an_q2[],int bt2[],int count,int n,int sum,int total)
{
	int rbt[n-count],i,wt2[n-count];
	int ct=sum;
	for(i=0;i<(n-count);i++)
	{
		rbt[i]=bt2[i];
	}
	
	while(1)
	{
		int flag=1,i;
		for( i=0;i<(n-count);i++)
		{
			if(rbt[i]>0)//means process is pending
			{	flag=0;
				if(rbt[i]>2)//in ques quantam is 2
				{
					rbt[i]=rbt[i]-2;
					ct=ct+2;
				}
				else
				{	ct=ct+bt2[i];
					wt2[i]=ct-bt2[i];
					rbt[i]=0;					
				}
			}
		}
		if(flag==1)
		break;
	}
	int  total2=total;
	for(i=0;i<(n-count);i++)
    {	
    	total2=total2+wt2[i];
    printf("\nP[%d] \t\t  %d  \t\t    %d\t \t   %d",i+1,bt2[i],wt2[i],2);
	}
	float f=(float)total2/(float)n;
	printf("\nthe average time of the processes:%f",f);
	
}

