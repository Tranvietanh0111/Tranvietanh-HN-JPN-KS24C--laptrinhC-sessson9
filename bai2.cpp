#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	printf("cac phan tu trong mang la:");
    for(int i=0;i<5;i++){
    	printf("%d ",arr[i]);
    }
	int position;

	do{
		printf("\nnhap vi tri can chinh sua:");
	    scanf("%d", &position);
	    if(position<=0 || position>5){
	    	printf("khong hop le ");
		}
	}while(position<=0 || position>5);
	printf("\nnhap gia tri moi sau khi sua:");
    scanf("%d", &arr[position-1]);	
    printf("\ncac phan tu trong mang sau khi sua la:");
    for(int i=0;i<5;i++){
    	printf("%d ",arr[i]);
    }
return 0;
}
