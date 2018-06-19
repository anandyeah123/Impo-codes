void rotateLL(Node** head_ref, int k){
	
	Node* current=*head_ref;
	
	int count=1;
	
	while(current!=NULL&&count<k){
		current=current->next;
		count++;
		
	}
	if(current==NULL)
	return;
	
	Node* kthnode=current;
	while(current->next!=NULL){
		current=current->next;
		
	}
	current->next=*head_ref;
	
	*head_ref=kthnode->next;
	
	kthnode->next=NULL;
	
}
