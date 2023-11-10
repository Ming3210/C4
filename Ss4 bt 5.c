#include<stdio.h>
int main(){
	int t;
	int ngay,thang,nam;
	printf("Nhap ngay:");
	scanf("%d",&ngay);
	printf("Nhap thang:");
	scanf("%d",&thang);
	printf("Nhap nam:");
	scanf("%d",&nam);
	switch(thang){
		case 1:	case 3: case 5: case 7: case 8: case 10: case 12:
			t = 31;
			break;
		case 4: case 6: case 11: case 9:
			t = 30;
			break;
		case 2:
			if(nam%4==0){
				t = 29;
			}else{
				t = 28;
			}
			break;
		}
		if(ngay > t){
			printf("Khong hop le");
		}else{
			printf("Hop le");
		}
		default:
			printf("Khong hop le")
}