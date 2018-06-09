void movelasttofirst(Node** head_ref){
	Node* temp=*head_ref;
	Node* sec_last;
	while(temp->next!=NULL){
		sec_last=temp;
		temp=temp->next;
		
	}
	sec_last->next=NULL;
	temp->next=*head_ref;
	
	*head_ref=temp;
	
	
}
