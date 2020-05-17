#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};

node *start=NULL;

node *createnode()
{
	node *temp;
	temp = new node;
	return temp;
}

void insertnode()
{
	int n;
	node *temp,*traverse;
	cout<<"enter element to be inserted and -1 to exit"<<endl;
	cin>>n;
	
	while(n!=-1)
	{
		temp = createnode();
		temp->data=n;
		temp->next=NULL;
		
		if(start==NULL)
		{
			start = temp;
		}
		else
		{
			traverse = start;
			while(traverse->next!=NULL)
			{
				traverse= traverse->next;
			}
			traverse->next =temp;
		}
		cout<<"Enter element to be added"<<endl;
		cin>>n;
	}
}

void printlist()
{
	
	node *temp;
	temp=start;
  while(temp->next!=NULL)
  {
	  cout<<temp->data<<" ";
	  temp=temp->next;
  }	
	
}

int main()
{
	int option;
	do
	{
		cout<<"----------------Main Menu-----------"<<endl;
	    cout<<"1. Insert Node"<<endl;
	    cout<<"2. Print List"<<endl;
	    cout<<"3. Exit"<<endl;
	    cin>>option;
	    
	    switch(option){
		case 1: insertnode();
		        break;
		case 2: printlist();
		        break;
	}
	}while(option!=3);

}
		
	
