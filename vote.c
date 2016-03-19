#include<stdio.h>
#include<stdlib.h>
int find_winner(int count[],int n)
{
	int max=0,i,r;
	for(i=0;i<n;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
			r=i;
		}
	}
	return r;
}
			
int main()
{
	int *count,n,ch,i,choice,invalid=0,w;
	char **parties;
	printf("\nenter the number of parties:");
	scanf("%d",&n);
	count=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		count[i]=0;
	}
	parties=malloc(n*sizeof(char *));
	for(i=0;i<n;i++)
	{
		parties[i]=malloc(50*sizeof(char));
	}
	printf("\nenter the party name:");
	for(i=0;i<n;i++)
	{
		scanf("%s",parties[i]);
	}
	do
	{
		printf("\n DO U WANT TO VOTE \n1.YES\n2.NO");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nenter your choice:");
					for(i=0;i<=n;i++)
					{
						printf("\n%d.%s",i+1,parties[i]);
					}
					scanf("%d",&choice);
					if(choice<n)
					{
						count[choice-1]++;
					}
					else
					{
						invalid++;
					}
					break;
			case 2:printf("\nthe individual votes are");
					for(i=0;i<n;i++)
					{
						printf("\n%s\t%d",parties[i],count[i]);
					}
					w=find_winner(count,n);
					printf("\nthe winner is %s",parties[w]);
					printf("\nthe no of invalid votes are %d",invalid);
					
					break;
		}
	}while(ch!=2);
	
	return 0;
}
