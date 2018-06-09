void datacount(Node* head, int key){
	
	Node*temp=head;
	int count=0;
	while(temp!=Null){
		if(temp->data==x)
		count++;
		
		temp=temp->next;
		
	}
	return count;
	
	
}
