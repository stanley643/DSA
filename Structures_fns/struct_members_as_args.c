/**
 * just like variables, we can pass structure members as arguments to a function
 *
 */
#include "main.h"

struct student
{
	char name[50];
	int age;
	int roll_no;
	float marks;
};

void print(char name[], int age, int roll, float marks)
{
	printf("%s %d %d %.2f\n", name, age, roll, marks);
}

int main()
{
	struct student s1 = {"Stano", 20, 50, 86.5};
	print(s1.name, s1.age, s1.roll_no, s1.marks);
}
