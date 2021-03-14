#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
	int *ptr_int =NULL;
	int size =100;
	ptr_int =(int*)malloc(sizeof(int)*size);
	
	if(ptr_int !=NULL){
		memset(ptr_int,0,sizeof(int)*size);
		
		free(ptr_int);
	}	
	return 0;
	
}
