
//f has 3 parameters
//first is array
//second size of an array
//third is X

int f(int *a,int n,int x){
	int i,j,k,m[100],l=0,tmp,index=0,min=100;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<n;k++){
				m[l++]=a[i]+a[j]+a[k];
			}
		}
	}
	for(i=0;i<l;i++){
		tmp=m[i]-x;
		if(tmp<0)tmp=tmp*(-1);
		if(min>tmp){
			min=tmp;
			index=i;
		}
	}
	return m[index];
}