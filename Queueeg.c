/*-------------------------------------------------------------------------------------------------------------------------------
Queueeg.c
Program to create a queue using linked list
DIVYA RAJ K5
11-11-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
typedef struct QueType{
	int Num;
	struct QueType *Next;
}QUENODE;
//-------------------------prototype--------------------------------------------
QUENODE *fnCreateQueueNode(int Num);
void fnInsertQueNode(QUENODE **Head,int Num);
void displayQueue(QUENODE *Head);
main()
{
	QUENODE *p,*Head;
	int Num,N,i;

	system("clear");
	Head=NULL;
	printf("Program to create a queue using the concept of linked list\n\n");
	printf("\nEnter the number of nodes you have to insert: ");
	scanf("%d",&N);
	printf("\nEnter the elements: \n");
	for(i=1;i<=N;i++){
		scanf("%d",&Num);
		fnInsertQueNode(&Head,Num);
	}
	printf("\nThe elements in the queue are:\n");
	displayQueue(Head);
}
//----------------------fnCreateQueueNode()---------------------------------------
QUENODE *fnCreateQueueNode(int Num)
{
	QUENODE *Node;
	Node=(QUENODE *)malloc(sizeof(QUENODE));
	Node->Num=Num;
	Node->Next=NULL;
	return Node;
}
//----------------------fnInsertQueNode------------------------------------------
void fnInsertQueNode(QUENODE **Head,int Num)
{
	QUENODE *p,*Curr;
	p=fnCreateQueueNode(Num);
	Curr=*Head;
	if(Curr==NULL){
		*Head=p;
		return;
	}
	while((Curr!=NULL) && (Curr->Next)!=NULL){
		Curr=Curr->Next;
	}
	Curr->Next=p;
}
void displayQueue(QUENODE *Head)
{
	QUENODE *Curr;
	Curr=Head;
	while(Curr!=NULL){
		printf("%d\t",Curr->Num);
		Curr=Curr->Next;
	}
}