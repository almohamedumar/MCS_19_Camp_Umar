#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void push(struct node** head,int data)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=(*head);
	(*head)=newnode;	
}
void append(struct node** head,int data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	struct node *last=*head;
	newnode->data=data;
	newnode->next=NULL;
	if(*head==NULL)
	{
		*head=newnode;return;
	}
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=newnode;return;
}
void insafter(struct node* prenode,int data)
{
	struct  node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=prenode->next;
	prenode->next=newnode;
}
void print(struct node *rint)
{
	while(rint!=NULL)
	{
		printf("%d",rint->data);
		rint=rint->next;
	}
}
void delete_node(struct node **head,int key)
{
	struct node* temp=*head,*prev;
	if(temp!=NULL&&temp->data==key)
	{
		*head=temp->next;
		free(temp);return;
	}
	while(temp!=NULL&&temp->data!=key)
	{
		prev=temp;
		temp=temp->next;
	}	
	if(temp==NULL)
	{
		return;
	}
	prev->next=temp->next;
	free(temp);
}
void delete_position(struct node **head,int pos)
{
	if(*head==NULL)
	{
		return;
	}
	struct node* temp=*head;
	if(pos==0)
	{
		*head=temp->next;
		free(temp);return;
	}
	for(int i=0;temp!=NULL&&i<position-1;i++)
	{
		temp=temp->next;
	}
	if(temp==NULL||temp->next==NULL)
	{
		return;
	}
	struct node *next=temp->next->next;
	free(temp->next);
	temp->next=next;
}
void delete(struct node** head)
{
	struct node* current = *head;
	struct node* next;
	while(current!=NULL)
	{
		next=current->next;
		free(current);
		current=next;
	}
	*head=NULL;
}
void length(struct node* head)
{
	int i=0;
	struct node* current=head;
	while(current!=NULL)
	{
		i++;
		current=current->next;
	}
	printf("length of linked list : %d",i);
}
void search(struct node* head,int key)
{
	struct node* current = head;
	while(current!=NULL)
	{
		if(current->data==key)
		{
			printf("yes");
		}
		current=current->next;
	}
}
void loop(struct  node* head)
{
	struct node *slow=head,*fast=head;
	while(slow&&fast&&fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			printf("Loop found");
			return;
		}
	}
	printf("loop not found");
}
int main()
{
	struct node* head = NULL;
	struct node* second = NULL;
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->next=second;
	second->data=20;
	second->next=NULL;
	//now we insert the node at front
	push(&head,7);
	push(&head,5);
	//now we insert the node at middle/after some node
	insert_after(head->next,15);
	//now we insert at the end
	append(&head,30); 
	print(head);
	//delete a node of the given key
	delete_node(&head,15);
	print(head);
	//delete a node of the given position
	delete_position(&head,1);
	print(head);
	//to delete a entire list
	//delete(&head);
	//to find the length of the list
	length(head);
	//to search an element in a list
	search(head,30);
	//to find a loop in the list
	loop(head);
}





