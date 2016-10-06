#include <stdio.h>

void foo16()
{
	printf("hi\n");

}

void foo100()
{
	printf("foo100 \n");
}

void foo1000()
{
	printf("I want to go home \n");
}

void foo200()
{
	printf("hahaha\n");
}

void foo400()
{
	printf("woooo\n");
}

void main()
{
#ifdef DEBUG
	printf("[DEBUG] foo1 has some serious bugs...\n");
	printf("HelloWorld\n");
}
