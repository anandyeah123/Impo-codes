void deleteLL(Node** head_ref){
	Node* current=*head_ref;
	Node* next;
	
	while(current!=Null){
		next=current->next;
		free(current);
		current=next;
			
	}
	*head_ref=Null;
	
	
}
