#include<iostream>
#include<stdio.h>

using namespace std;

struct Node{
	int data;
	Node* next;
	

};
void reverseLL(Node** head_ref){
	
	Node* prev=NULL;
	Node* current=*head_ref;
	Node* next=NULL;
	
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		
	}
	*head_ref=prev;
	
}
void push(Node** head_ref, int data){
	Node* new_node=new Node();
	new_node->data=data;
	new_node->next=NULL;
	*head_ref=new_node;
	
	
}
void printlist(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
		
	}
	
	
}
int main(){
	Node* head=NULL;
	
	push(&head,10);
	push(&head,9);
	push(&head,8);
	push(&head,7);
	push(&head,6);
	push(&head,5);
	
	printlist(head);
	
	//reverseLL(&head);
	
	//printlist(head);
	
	
}
