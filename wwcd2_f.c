int* f(struct node *head){
	int *a,max;
	struct node *p,*tmp;
	p=head;
	a=(int*)malloc(sizeof(int)*100);
	while(p!=NULL && p->next!=NULL){
		max=p->data;
		tmp=p->next;
		while(tmp!=NULL){
			if(max<tmp->data){
				max=tmp->data;
				break;
			}
			tmp=tmp->next;
		}
		if(p->data!=max){
			a[i++]=max;
		}
		else{
			a[i++]=0;
		}
		p=p->next;
	}
	a[i++]=0;
	return a;
}