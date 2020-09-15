#include<stdio.h>
#include<stdlib.h>

void main(){
	int i,j,key, n, *arr;
	printf("Enter the length of array-");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter the %d th element",i);
		scanf("%d",&arr[i]);
	}
	for(j=1;j<n;j++){
		key = arr[j];
		i=j-1;
		while((i>-1)&&(key<arr[i])){
			arr[i+1]=arr[i];
			i=i-1;
		}
		arr[i+1]=key;
	}
	printf("The sorted elements are-\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);}
		free(arr);
}

