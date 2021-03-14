#include <stdio.h>
int main(void){
	int value=100;
	int* pt=&value;
	int** ppt=&pt;
	printf("value :%d \n",value);
	printf("pt of value :%x \n",pt);
	printf("ppt of value:%x \n",ppt);
	printf("*pt =%d \n",*pt);
	printf("**ppt=%d \n",**ppt);
	return 0;
}
