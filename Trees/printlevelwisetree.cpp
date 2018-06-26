class Binarytreenode{
	public:
		T data;
		Binarytreenode<T>* right;
		Binarytreenode<T>* left;
		
		Binarytreenode(T data){
			this->data=data;
			left=NULL;
			right=NULL;
			
			
		}
		
};
#include<queue>
void printlevelwise(Binarytreenode<int>* root){
	if(root==NULL)
	return;
	
	queue<Binarytreenode<int>*> q;
	q.push(root);
	
	while(!q.empty()){
		Binarytreenode<int> *temp=q.front();
		q.pop();
		cout<<temp->data<<":";
		
		if(temp->left!=NULL)
		cout<<"L:"<<temp->left->data<<",";
		q.push(temp->left);
		else
		cout<<"L:"<<-1<<",";
		
		if(temp->right!=NULL)
		cout<<"R:"<<temp->right->data<<",";
		q.push(temp->right);
		else
		cout<<"R:"<<-1<<",";
		
		cout<<endl;
		
	}
	
}
