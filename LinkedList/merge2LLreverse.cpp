#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	
};

Node* newnode(int data){
	Node* temp=new Node();
	temp->data=data;
	temp->next=NULL;
	return temp;
}

void printlist(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
}
Node* mergeLLreverse(Node*a, Node* b){
	
	Node* res=NULL;
	
	if(a==NULL&&b==NULL)
	return NULL;
	
	while(a!=NULL&&b!=NULL){
		if(a->data<=b->data){
		
		Node* temp=a->next;
		a->next=res;
		res=a;
		a=temp;
		
		}
		else
		{
		Node* temp=b->next;
		b->next=res;
		res=b;
		b=temp;
		}
	}
	while(a!=NULL){
		Node* temp=a->next;
		a->next=res;
		res=a;
		a=temp;
		
	}
	while(b!=NULL){
		Node* temp=b->next;
		b->next=res;
		res=b;
		b=temp;
		
	}
	return res;
	
}
int main(){
	
	Node* res=NULL;
	Node* a=newnode(5);
	a->next=newnode(10);
	a->next->next=newnode(15);
	
	Node* b=newnode(7);
	b->next=newnode(14);
	b->next->next=newnode(19);
	
	printlist(a);
	
	cout<<endl;
	printlist(b);
	cout<<endl;
	res= mergeLLreverse(a,b);
	printlist(res);
	
	return 0;
	
}
