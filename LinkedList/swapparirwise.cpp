void swappairwise(Node* head){
	Node* temp=head;
	
	while(temp!=NULL&& temp->next!=NULL){
		swap(&temp->data,&temp->next->data);
		temp=temp->next->next;
		
	}
	
}
swap(int* a, int* b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
