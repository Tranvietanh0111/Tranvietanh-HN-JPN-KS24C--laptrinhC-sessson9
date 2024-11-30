#include<stdio.h>
int main(){
	int arr[100];
	int n, position, ans;
	do{
		printf("\n    THUC DON \n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &ans);
        switch (ans) {
            case 1:
            	printf("nhap so phan tu muon nhap:");
	            scanf("%d",&n);
                for(int i=0;i<n;i++){
		        printf("nhap phan tu thu %d=",i+1);
		        scanf("%d", &arr[i]);
		        }
                break;
            case 2:
            	if (n == 0) {
                    printf("Mang hien dang trong.\n");
                    break;
                }
            	printf("\ncac phan tu trong mang la:");
                for(int i=0;i<n;i++){
    	        printf("%d ",arr[i]);
	            }
                break;
            case 3:
            	if (n == 0) {
                    printf("Mang hien dang trong.\n");
                    break;
                }
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
                break;
            case 4:
            	if (n == 0) {
                    printf("Mang hien dang trong.\n");
                    break;
                }
            	do{
		            printf("\nnhap vi tri can chinh sua:");
	                scanf("%d", &position);
	                if(position<=0 || position>n){
	    	        printf("khong hop le ");
		            }
	            }while(position<=0 || position>n);
	            printf("\nnhap gia tri moi sau khi sua:");
                scanf("%d", &arr[position-1]);
                break;
            case 5:
            	if (n == 0) {
                    printf("Mang hien dang trong.\n");
                    break;
                }
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
                break;
            case 6:
                printf("Thoat chuong trinh");
                break;
            default:
                printf("khong hop le,chon lai di");
        }
		
	}while (ans != 6);
return 0;	
}
