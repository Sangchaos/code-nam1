#include<stdio.h>
#include<string.h>
int main()
{
	char matkhau[]="okenha";
	char nhapmatkhau[20];	
	do{
		printf("nhap_mat_khau:");
		gets(nhapmatkhau);
		if(strcmp(matkhau,nhapmatkhau)==0){
			printf("chinhxac");
		}}
		while(strcmp(matkhau,nhapmatkhau)!=0);
}

