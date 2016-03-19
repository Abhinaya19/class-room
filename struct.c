#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int val;
	struct stack *next;
}*top;
void push(int num)
{
	if(top==NULL)
	{
		top=(struct stack *)malloc(sizeof(struct stack));
		top->next=NULL;
		top->val=num;
	}
	else
	{
		struct stack *ptr=(struct stack *)malloc(sizeof(struct stack));
		ptr->next=top;
		ptr->val=num;
		top=ptr;
	}
}
void display()
{
	struct stack *var=top;
	struct stack *tmp;
	while(var!=NULL)
	{
		printf("\t%d",var->val);
		var=var->next;
	}
}
void pop()
{
	int e;
	struct stack *ptr=top;
	e=ptr->val;
	printf("%d is popped out",e);
	ptr=ptr->next;
	top=ptr;
}
	
int  main()
{
	int size=5,ch,num,count=0;
	top=NULL;
	do
	{
		printf("\nenter your choice\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					if(count==size)
					{
						printf("\nSTACK FULL");
					}
					else
					{
						printf("\nenter the number");
						scanf("%d",&num);
						push(num);
						count++;
					}
					break;
			case 2:
					if(count==0)
					{
						printf("\nSTACK EMPTY");
					}
					else
					{
						pop();
					}
					count--;
					break;
			case 3:
					if(count==0)
					{
						printf("\nstack empty");
					}
					else
					{
					display();
					}
					break;
		}
	}while(ch!=4);
}
	
