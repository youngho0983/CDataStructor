#include <stdio.h>
#include <string.h>
int main(void){
	struct  student{
		char name[20+1];
		int year;
		float score;
	};
	/*
	typedef struct student_type{
	...
	...
	...
	}student;
	*/
	
	struct student student_lee={
	"lee",2008,95.4
	};
	
	struct student student_kim={0};
	
	strcpy(student_kim.name,"kim");
	student_kim.year=2008;
	student_kim.score=95.4;
	
	printf("%s , %d , %f",student_kim.name,student_kim.year,student_kim.score); 

	student hello;
	strcpy(hello.name,"hello");
	hello.year=100;
	hello.score=90;
	printf("%s\n\n",hello.name);
	student hello2=hello;
	hello2.name[3]='t';
	printf("%s %s ",hello.name,hello2.name);
	printf("%f",hello2.score);
	return 0 ;
	
	
}
