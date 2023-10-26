#include<stdio.h>
#include<stdlib.h>

struct node
	{
		int data;
		struct node *next;
	} *head,*new1;
	

void insert(){
	int newdata;
	new1 = (struct node *)malloc(sizeof(struct node*));
	
	if (new1 == NULL)
		{
			printf("overflow");
		}
	else
		{
			printf("enter a value for data:");
			scanf("%d",&newdata);
			
			new1 -> data = newdata;
			new1 -> next = head;
			head = new1;
			printf("mission acompilsed");
		}
}


int main()
	{
		insert();
	}
