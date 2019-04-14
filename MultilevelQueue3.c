int main()
{
	int n,i,count=0;
	printf("Enter the no of process");
	scanf("%d",&n);
	int process[n],bursttime[n],q[n],pr[n];
	for(i=0;i<n;i++)
	{
		process[i]=0;
	}
	printf("Enter  Burst Time:");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&bursttime[i]);
	}
	printf("Enter priority:");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&pr[i]);
	}
	for(i=0;i<n;i++)
	{
		q[i]=1;
		if(q[i]==1)
		count++;
	}
	int an_q1[count],bt1[count],pr1[count];
	int an_q2[n-count],bt2[n-count];
	count=0;
	int count1=0,sum=0;
	for(i=0;i<n;i++)
	{
		if(q[i]==1)
		{
		an_q1[count]=process[i];
		bt1[count]=bursttime[i];
		pr1[count]=pr[i];
		sum=sum+bursttime[i];
		count++;
		printf("\n The process %d will act as %d in queue 1",i+1,count);
		}
		else
		{
		
		an_q2[count1]=process[i];
		bt2[count1]=bursttime[i];
		count1++;
		printf("\n The process %d will act as %d in queue 2",i+1,count1);
		}
	}
	 waittime( an_q1, pr1, an_q2, n,count, bt1, bt2,sum);
     return 0;
 }
