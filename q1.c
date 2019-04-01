int main()
{
	int i,j;
	printf("How many Processes are entering the OS:\n");
	int n1;
	scanf("%d",&n1);
	int p[n1];
	int p2[n1];
	int bt1[n1];
	for(i=0;i<n1;i++)
	{
		p[i]=(i+1);
		p2[i]=(i+1);
	}
	for(i=0;i<n1;i++)
	{
		printf("Enter The Burst Time for P%d :",i+1);
		scanf("%d",&bt1[i]);
		
	}
	
	for(i=0;i<n1;i++)
	{
		int ps=i;
		for(j=i+1;j<n1;j++)
		{
			if(bt1[j]<bt1[ps])
			{
				ps=j;
			}
		}
		
		
		int temp;
		temp=bt1[i];
		bt1[i]=bt1[ps];
		bt1[ps]=temp;
		temp=p[i];
		p[i]=p[ps];
		p[ps]=temp;
	}
	
	printf("\nENTER THE VALUE OF THE TIME QUANTUM:\n");
	int q;
	scanf("%d",&q);
	fflush(stdout);
	sleep(3);
	avgtime(p,n1,bt1,q,p2);
	return 0;
}
