void leftrotatebyone(int a[],int n){
	int temp=-a[0],i;
	for(i=0;i<n-1;i++){
		a[i]=a[i+1];
		
	}
	a[i]=temp;
	
}
void leftrotatebyd(int a[],int d,int n){
	
	for(int i=0;i<d;i++){
		leftrotatebyone(a,n);
		
	}
	
}
