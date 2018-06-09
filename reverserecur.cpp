void reverserecursive(Node** head_ref){
	
	Node* first;
	Node* rest;
	
	first=*head_ref;
	rest=first->next;
	
	reverserecursive(&rest);
	first->next->next=first;
	first->next=NULL;
	
	*head_ref=rest;
	
	
}
