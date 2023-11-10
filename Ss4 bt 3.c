#include <stdio.h>
int main()
{
	int soDien;
	printf("So dien thang nay la:");
	scanf("%d",&soDien);
	if(soDien < 50){
		printf("Gia dien can phai tra: 10.000");
	}else if(soDien < 100){
		printf("Gia dien can phai tra: 15.000");
	}else if(soDien < 150){
		printf("Gia dien can phai tra: 20.000");
	}else if(soDien <200){
	    printf("Gia dien can phai tra: 25.000");
	}else {
		printf("Gia dien can phai tra: 30.000");
	}
}