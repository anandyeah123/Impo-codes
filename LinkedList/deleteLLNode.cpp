void delete(Node** head_ref,int key){
	Node* temp=*head_ref,*prev;
	
	if(temp!=Null&&temp->data==key){
		*head_ref=temp->next;
		free(temp);
		return;
		
	}
	while(temp!=Null&&temp->data!=key){
		prev=temp;
		temp=temp->next;
		
	}
	if(temp==Null){
		return;
		
	}
	prev->next=temp->next;
	free(temp);
	
}
