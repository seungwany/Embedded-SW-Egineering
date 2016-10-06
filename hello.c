#include <stdio.h>

void foo1()
{
	printf("hi\n");

}

void main()
{
#ifdef DEBUG
	printf("[DEBUG] foo1 has some serious bugs...\n");
	printf("HelloWorld\n");
}
