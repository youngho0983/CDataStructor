#include <stdio.h>
#include <string.h>
int main(void){
	struct  student{
		char name[20+1];
		int year;
		float score;
	};
	
	student temp;
	strcpy(temp.name,"¼­¿µÈ£");
	temp.year=32;
	temp.score=70.5;
	printf("%s \n %d \n, %f",temp.name,temp.year,temp.score);
	

	return 0;
	
}
