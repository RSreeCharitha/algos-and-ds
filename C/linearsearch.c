#include<stdio.h>
int main(){
	int n, flag = 0;
	scanf("%d", &n);
	int a[n];
	int i;
	for ( i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int key;
	scanf("%d", &key);
	for ( i=0;i<n;i++){
		if(key==a[i]){
			flag = 1;
			scanf("Found at position %d.",i);
			break;
		}
	}
	if(flag==0){
		printf("Key not found");
	}
}
