#include<stdio.h>
int main()
{
	int thang,nam;
	printf("Thang may:");
	scanf("%d",&thang);
	printf("Nam may:");
	scanf("%d",&nam);
	switch(thang) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang nay co 31 ngay");
			break;
		case 4: case 6: case 9: case 11:
			printf("Thang nay co 30 ngay");
			break;
		case 2:
			if(nam%4==0){
				printf("Thang nay co 29 ngay");
			}else{
				printf("Thang nay co 28 ngay");
			}
			break;
			default:
			printf("Khong hop le");
		}
}