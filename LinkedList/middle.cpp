void middle(Node** head_ref){
	Node* slow_ptr=*head_ref;
	Node* fast_ptr=*head_ref;
	
	if(head!=Null){
		while(fast_ptr!=Null||fast_ptr->next!=Null){
			fast_ptr=fast_ptr->next->next;
			slow_ptr=slow_ptr->next;
			
		}
		cout<<slow_ptr->data;
		
	}
}
