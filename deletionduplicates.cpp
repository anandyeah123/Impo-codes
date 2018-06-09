void removeduplicates(Node* head){
	Node* current=head;
	
	Node* next_next;
	
	if(current==Null){
		return;
		
	}
	while(current->next!=Null){
		if(current->data==current->next->data)
		next_next=current->next;
		free(current->next);
		current->next=next_next;
		else
		current=current->next;
		
	}
}
