#include<stdio.h>

int main(){
	int arr[100];
	int n;
	printf("nhap so phan tu muon nhap:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d=",i+1);
		scanf("%d", &arr[i]);
	}
	int position;
	
	do{
		printf("\nnhap vi tri phan tu muon them:");
	    scanf("%d", &position);
	    if(position<=0 || position>n+1){
	    	printf("khong hop le ");
		}
	}while(position<=0 || position>n+1);
		for(int i=n;i>=position;i--){
	    arr[i]=arr[i-1];    
        }
    printf("\nnhap phan tu muon them:");
    scanf("%d", &arr[position-1]);
	n++;
	printf("\ncac phan tu trong mang la:");
    for(int i=0;i<n;i++){
    	printf("%d ",arr[i]);
	}	
return 0;	
}
