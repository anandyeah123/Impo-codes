void printuniquevalues(int a[],int n){
	sort(a,a+n);
	
	for(int i=0;i<n;i++){
		
		while(i<n-1&&a[i]==a[i+1]){
		
		i++;
		}
		cout<<a[i]<<" ";
		
	}
}
