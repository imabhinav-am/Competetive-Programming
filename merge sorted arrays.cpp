#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *headA=NULL;
struct Node *headB=NULL;
Node* MergeLists(Node *headA, Node* headB)
{
  	struct Node *tempA=headA;
	struct Node *tempB=headB;
	while(tempB!=NULL)
	{	tempA=headA;
		while(tempB->data>tempA->next->data)
			tempA=tempA->next;
		struct Node *t=(struct Node*)malloc(sizeof(struct Node));
		t->data=tempB->data;
		t->next=tempA->next;
		tempA->next=t;
		tempB=tempB->next;
	}
	return headA;
}
int main()
{	
	int d;
	char ch;
	printf("CREATING LIST : \n");
	do
	{
		printf("\nENTER THE VALUE TO BE INSERTED : ");
		scanf("%d",&d);
		struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=d;
		temp->next=NULL;
		if(headA==NULL)
			headA=temp;
		else
		{
			struct Node *temp1=headA;
			while(temp1->next!=NULL)
			temp1=temp1->next;
			temp1->next=temp;
		}
		printf("DO U WANT TO ENTER MORE VALUES : ");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
	printf("CREATING LIST : \n");
	do
	{
		printf("\nENTER THE VALUE TO BE INSERTED : ");
		scanf("%d",&d);
		struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=d;
		temp->next=NULL;
		if(headB==NULL)
			headB=temp;
		else
		{
			struct Node *temp1=headB;
			while(temp1->next!=NULL)
			temp1=temp1->next;
			temp1->next=temp;
		}
		printf("DO U WANT TO ENTER MORE VALUES : ");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
	printf("LIST 1 - \n");
	struct Node *temp=headA;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
	temp=headB;
	printf("LIST 2 - \n");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
	temp=MergeLists(headA,headB);
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
