#include<stdio.h>
int main(){
	float luong,ngayCong,luongDcNhan;
	printf("nhap luong va ngay cong: ");
	scanf("%f %f",&luong,&ngayCong);
	if(ngayCong<=26){
		luongDcNhan = luong*(ngayCong/26);
		printf("Luong nhan duoc: %.2f",luongDcNhan);
	}else {
		luongDcNhan = luong*(ngayCong/26)+(luong*(ngayCong-26)*1,5);
		printf("luong nhan duoc:%.2f",luongDcNhan);
	}
}