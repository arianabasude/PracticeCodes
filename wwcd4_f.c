

void f(int *a,int n){
	int i,j;
	for(i=0;i<n;i++){
		int c=1;
		for(j=i-1;j>=0;j--){
			if(a[i]>a[j]){
				c++;
			}
		}
		printf("%d ",c);
	}

}