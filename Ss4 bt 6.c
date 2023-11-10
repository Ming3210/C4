#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Nhap cac so:");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2 && n2>n3){
		printf("max = %d\n",n1);
		printf("so con lai = %d\n",n2);
		printf("min = %d",n3);
	}else if(n2>n1 && n1>n3){
		printf("max = %d\n",n2);
		printf("so con lai = %d\n",n1);
		printf("min = %d",n3);		
	}else if(n2>n3 && n3>n1){
		printf("max = %d\n",n2);
		printf("so con lai = %d\n",n3);
		printf("min = %d",n1);
	}else if(n1>n3 && n3>n2){
		printf("max = %d\n",n1);
		printf("so con lai = %d\n",n3);
		printf("min = %d",n2);
	}else if(n3>n1 && n1>n2){
		printf("max = %d\n",n3);
		printf("so con lai = %d\n",n1);
		printf("min = %d",n2);
	}else if(n3>n2 && n2>n1){
		printf("max = %d\n",n3);
		printf("so con lai = %d\n",n2);
		printf("min = %d",n1);
	}
}