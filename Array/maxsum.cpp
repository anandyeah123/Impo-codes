int maxsum(int a[],int n){
	int arrsum=0;
	int currvalue=0;
	
	for(int i=0;i<n;i++){
		arrsum=arrsum+a[i];
		currvalue=currvalue+(i*a[i]);
	}
	int maxval=currvalue;
	
	for(j=1;j<n;j++){
		currvalue=currvalue+ arrsum-(n*a[n-j]);
		if(currvaluem>maxvalue)
		maxval=currvalue;
		
		}
		return maxval;
		
}
