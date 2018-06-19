int findmin(int a[],int low, int high){
	if(low>high)
	return;
	
	if(low==high)
	return;
	
	int mid=(low+high)/2;
	
	if(mid<high&&a[mid]>a[mid+1])
	return a[mid+1];
	
	if(mid>low&&a[mid-1>a[mid]])
	return a[mid];
	
	if(a[high]>a[mid])
	return findmin(a,low,mid-1);
	
	else
	return findmin(a,mid+1,high);
	
	
}
