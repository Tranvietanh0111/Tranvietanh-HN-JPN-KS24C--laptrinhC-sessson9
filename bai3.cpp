#include<stdio.h>

int main(){
	int arr[100];
	int n;
	printf("nhap so phan tu muon nhap:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("phan tu thu %d=",i+1);
		scanf("%d", &arr[i]);
	}
	int position;
	
	do{
		printf("\nnhap vi tri phan tu muon xoa:");
	    scanf("%d", &position);
	    if(position<=0 || position>n){
	    	printf("khong hop le ");
		}
	}while(position<=0 || position>n);
		for(int i=position-1;i<n-1;i++){
	    arr[i]=arr[i+1];    
        }
	n--;
	printf("\ncac phan tu trong mang sau khi xoa la:");
    for(int i=0;i<n;i++){
    	printf("%d ",arr[i]);
	}	
return 0;	
}
