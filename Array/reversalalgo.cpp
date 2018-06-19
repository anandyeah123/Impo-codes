void reverse(int a[], int start,int end){
	int temp=a[start];
	a[start]=a[end];
	a[end]=temp;
	start++;
	end--;
	
}
void leftrotate(int a[],int n,int d){
	reverse(a,0,d-1);
	reverse(a,d,n-1);
	reverse(a,0,n-1);
	
}
