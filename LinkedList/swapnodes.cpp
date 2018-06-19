void swapnodes(Node** head_ref,int x,int y){
	
	if(x==y)
	return;
	
	Node* prevx=NULL,*currx=*head_ref;
	Node* prevy=NULL,*curry=*head_ref;
	
	while(currx&&currx->data!=x){
		prevx=currx;
		currx=currx->next;
		
	}
		while(curry&&curry->data!=y){
		prevy=curry;
		curry=curry->next;
		
	}
	if(currx==NULL||curry==NULL)
	return;
	
	if(prevx!=NULL)
	prevx->next=curry;
	else
	*head_ref=curry;
	
	if(prevy!=NULL)
	prevy->next=currx;
	else
	*head_ref=currx;
	
	Node* temp=curry->next;
	curry->next=currx->next;
	currx->next=temp;
	
}
