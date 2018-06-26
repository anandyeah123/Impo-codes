void swap(Binarytreenode<int>* &l, Binarytreenode<int>* &r){
	Binarytreenode<int>* temp=l;
	l=r;
	r=temp;
	
}
void mirrorbinarytree(Binarytreenode<int>* root){
	if(root==NULL)
	return;
	
	if(root->left&&root->right){
		swap(root->left,root->right);
		
	}
	mirrorbinarytree(root->left);
	mirrorbinarytree(root->right);
	

}
