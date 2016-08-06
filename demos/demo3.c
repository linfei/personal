#include<stdio.h>
#include<stdlib.h>

int main()

{

char student_name[5][25];

    int i;

    for(i=0;i<5;i++)
    {
       printf("\nEnter a string %d: ",i+1);
       scanf(" %[^\n]",student_name[i]);
    }
	
	

	for(i=0;i<5;i++)
    {
       printf("Result %d: %s \n",i+1, student_name[i]);
    }
	
	system("pause");
	return 1;
}
