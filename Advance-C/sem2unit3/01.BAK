#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct SLL
{
	int info;
	struct SLL *link;
	}*first=NULL;
	typedef struct SLL node;
	void create_list(int);
	void display();
	void insert_first(int);
	void deletef();
	void deletel();
	void insertbfk(int);
	void insertafk(int);
void main()
{
	int ch,n,m,i,key;
	clrscr();
	do
	{
		printf("1.create list\n");
		printf("2.insert at first\n");
		printf("3.delete first\n");
		printf("4.delete last\n");
		printf("5.insert before key value\n");
		printf("6.insert after key value\n");
		printf("7.display\n");
		printf("8.quit\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("how many nodes you want:");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					printf("enter the element:");
					scanf("%d",&m);
					create_list(m);
				}
				break;
			case 2:
				printf("\n enteer the element:");
				scanf("%d",&m);
				insert_first(m);
				break;
			case 3:
				deletef();
				break;
			case 4:
				deletel();
				break;
			case 5:
				display();
				printf("\n enter value of key");
				scanf("%d",&key);
				insertbfk(key);
				break;
			case 6:
				display();
				printf("\n enter value of key");
				scanf("%d",&key);
				insertafk(key);
				break;
			case 7:
				display();
				break;
			case 8:
				exit(0);
			default:
				printf("wrong choice\n");
		}
	}while(ch<=8);
	getch();
}
void create_list(int data)
{
	node *t,*p;
	t=(node *)malloc(sizeof(node));
	t->info=data;
	t->link=NULL;
	if(first==NULL)
	{
		first=t;
	}
	else
	{
		p=first;
		while(p->link!=NULL)
		p=p->link;
		p->link=t;
	}
}
void insert_first(int data)
{
	node *t;
	t=(node *)malloc(sizeof(node));
	t->info=data;
	t->link=NULL;
	if(first==NULL)
	{
	first=t;
	}
	else
	{
			t->link=first;
			first=t;
	}
}
void display()
{
	node *q;
	if(first==NULL)
	{
		printf("list is empty\n");
		return;
	}
	q=first;
	printf("list is:\n");
	while(q!=NULL)
	{
		printf("%d->",q->info);
		q=q->link;
	}
	printf("\n");
}
void deletef()
{
	node *t;
	if(first==NULL)
	{
		printf("list is empty\n");
	}
	t=first;
	first=first->link;
	free(t);
	display();
}
void deletel()
{
	node *q;
	if(first==NULL)
	{
	printf("List is empty \n");
	}
	q=first;
	while(q->link->link!=NULL)
	{
		q=q->link;
	}
	free(q->link);
	q->link=NULL;
	display();
}
void insertbfk(int key)
{
	node *t,*p;
	int data1;
	printf("\n entervalue of element");
	scanf("%d",&data1);
	t=(node*)malloc(sizeof(node));
	t->info=data1;
	t->link=NULL;
	p=first;
	if(p->info==key)
	{
		t->link=p;
		first=t;
	}
	else
	{
		while(p->link !=NULL)
		{
			if(p->link->info==key)
			{
				t->link=p->link;
				p->link=t;
				p=p->link;
			}
			p=p->link;
		}
	}
}
void insertafk(int key)
{
	node *t,*p;
	int data1;
	printf("\n enter value of element");
	scanf("%d",&data1);
	t=(node *)malloc(sizeof(node));
	t->info=data1;
	t->link=NULL;
	p=first;
	while(p->link != NULL)
	{
		if(p->info==key)
		{
			t->link=p->link;
			p->link=t;
			p=p->link;
		}
		p=p->link;
	}
	if(p->info==key)
	{
		p->link=t;
	}
}