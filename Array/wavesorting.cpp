void wavesorting(int a[],int n){
	sort(a,a+n);
	
	for(int i=0;i<n-1;){
		swap(&a[i],&a[i+1])
		i=i+2;
		
	}
	
}
//Alternate way is to check all even psoitions are greater than neighbours;

void wavesorting(int a[], int n){
	for(int i=0;i<n;i+=2){
		if(i>0&&a[i]<a[i-1])
		swap(&a[i],&a[i-1]);
		
		if(i<n-1&&a[i]<a[i+1])
		swap(&a[i],&a[i+1]);
		
		
	}
}
void swap(int *a, int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
	
}
