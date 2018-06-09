void deletepos(Node** head_ref,int position){
	
	Node* temp=*head_ref;
	
	if(position==0){
		*head_ref=temp->next;
		free(temp);
		return;
		
	}
	for(int i=0;temp!=Null&&i<position-1;i++){
		temp=temp->next;
		
	}
	if(temp==Null){
		return;
		
	}
	Node*next=temp->next->next;
	free(temp->next);
	temp->next=next;
	
	
}
