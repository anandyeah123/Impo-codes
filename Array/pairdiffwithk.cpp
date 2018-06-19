int pairdifferenceisk(int a[],int n, int k){
	sort(a,a+n);
	
	int count=0;
	
	for(int i=0;i<n;i++){
		if(binarysearch(a,i+1,n-1,a[i]+k)!=-1)
		count++;
		
		
	}
	return count;
	
}
int binarysearch(int a[],int low, int high, int x){
	if(high>=low){
		int mid=(low+high)/2;
		if(x==a[mid])
		return mid;
		
		if(x>a[mid])
		return binarysearch(a,mid+1,high,x);
		
		else
		return binarysearch(a,low,mid-1,x);
			
		}
		return -1;
		
}
