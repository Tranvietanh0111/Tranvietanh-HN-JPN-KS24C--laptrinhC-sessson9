#include<stdio.h>
int main() {
    int arr[100], n = 0, choice;

    do {
        printf("\nTHUC DON\n");
        printf("1. Nhap so phan tu can nhap va gia tri cua cac phan tu\n");
        printf("2. In quan ly cac phan tu gia tri\n");
        printf("3. In ra gia tri chan va tong cua cac phan tu\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In out cac phan tu la so nguyen to trong mang va tinh toan\n");
        printf("6. Nhap mot so va thong ke trong mang co bao nhieu phan tu\n");
        printf("7. Them mot phan tu duoc dinh vi tri cu the\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap gia tri phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                    }
                break;
            case 2:
            	printf("Cac phan tu trong mang: ");
                for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
                }
                break;
            case 3:{
                int tong = 0;
                for (int i = 0; i < n; i++) {
                tong += arr[i];
                }
                printf("Tong cac phan tu: %d\n", tong);
                }
                break;
            case 4:{
                int max = arr[0], min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max){
					    max = arr[i];
					    }
                    if (arr[i] < min){
					    min = arr[i];
					    }
                    }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
                }
                break;
                
            case 5:{
                int soDuong = 0, soAm = 0, so0 = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] > 0){
					    soDuong++;
					    }
                    else if (arr[i] < 0){
					 soAm++;
					 }
                    else{
					 so0++;
					 }
                }
                printf("So duong: %d, so am: %d, so 0: %d\n", soDuong, soAm, so0);
                }
                break;
            case 6:{
                int x, count = 0;
                printf("Nhap gia tri can thong ke: ");
                scanf("%d", &x);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == x){
					 count++;
					 }
                }
                printf("So lan xuat hien cua %d: %d\n", x, count);
                }
                break;
            case 7:
                int viTri, giaTri;
                printf("Nhap vi tri can them ");
                scanf("%d", &viTri);
                if (viTri < 0 || viTri > n) {
                printf("Vi tri khong hop le!\n");
                }
                printf("Nhap gia tri can them: ");
                scanf("%d", &giaTri);
                for (int i = n; i > viTri; i--) {
                arr[i] = arr[i - 1];
                }
                arr[viTri] = giaTri;
                n++;
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}

