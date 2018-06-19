#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	
};

void push(Node** head_ref,int new_data){
	Node* new_node= new Node();
	new_node->data=new_data;
	new_node->next= *head_ref;
	*head_ref=new_node;
	
}
void insertAfter(Node* prev_node,int new_data){
	Node* new_node=new Node();
	
	new_node->data=new_data;
	
	new_node->next=prev_node->next;
	prev_noce->next=new_node;
	
}
void append(node** head_Ref,int new_data){
	
	Node* temp=*head_ref;
	Node* new_node=new Node();
	new_node->data=new_data;
	new_node->next=Null;
	
	if(*head_ref==Null){
		*head_ref=new_node;
		return;
		
	}
	while(temp->next!=Null){
		temp=temp->next;
	}
	temp->next=new_node;
	return;
	

	 
}
