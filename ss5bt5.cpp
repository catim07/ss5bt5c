#include<stdio.h>
int main(){
	int a,i;
	for(i=1;i<=9;i++){
		printf("bang cuu chuong %d la: \n",i);
		for(a=1;a<=10;a++){
			printf("%d * %d = %d\n",i,a,i*a);
		}	
	}
	return 0;
}
