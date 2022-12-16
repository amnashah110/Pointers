#include<stdio.h>
int main(){
	int *ptr1, a=5;
	char *ptr2, b=97;
	float *ptr3, c=24.5;
	ptr1=&a;
	ptr2=&b;
	ptr3=&c;
	printf("Integer: \nAddress 1: %d\nValue: %d\n", ptr1, *ptr1);
	printf("Address after Increment: %d\n\n", ++ptr1);
	printf("Char: \nAddress 1: %d\nValue: %c\n", ptr2, *ptr2);
	printf("Address after Increment: %d\n\n", ++ptr2);
	printf("Float: \nAddress 1: %d\nValue: %.2f\n", ptr3, *ptr3);
	printf("Address after Increment: %d", ++ptr3);
	
}