bool isnodepresent(Binarytreenode<int>* root, int x){
	if(root==NULL)
	return false;
	
	if(root->data==x)
	return true;
	
	return isnodepresent(root->left,x)||iisnodepresent(root->right,x);
	 
}
