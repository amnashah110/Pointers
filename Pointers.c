// CODE BLOCKS

// 1) Pointer Addresses and Dereferencing with Different Types

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

// 2) Pointer to an Array of Type Char
 
// Case 1: Assignment with Declaration
#include<stdio.h>
int main(){
	char *ptr ="Hello World";
	for (int i=0; i<11; i++){
		printf("Address: %d Letter: %c\n", ptr, *ptr);
		ptr++;
	}
}

// Case 2: Defining Array Size
#include<stdio.h>
#include<string.h>
int main(){
	char arr[15];
	char *ptr=arr;
	printf("Enter Word: ");
	gets(arr);
	int len = strlen(arr);
	for (int i=0; i<len; i++){
		printf("Address: %d Letter: %c\n", ptr, *ptr);
		ptr++;
	}
}

// Case 3: Malloc
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *ptr;
	ptr=malloc(sizeof(char));
	char word[15];
	printf("Enter String: ");
	gets(word);
	strcpy(ptr, word);
	int len=strlen(word);
	for (int i=0; i<len; i++){
		printf("Address: %d Letter: %c\n", ptr, *ptr);
		ptr++;
	}
	free(ptr);
}

// OR

int main(){
	char *ptr;
	ptr=malloc(sizeof(char));
	printf("Enter String: ");
	gets(ptr);
	int len=strlen(ptr);
	for (int i=0; i<len; i++){
		printf("Address: %d Letter: %c\n", ptr, *ptr);
		ptr++;
	}
	free(ptr);
}

// 3) Pointer to an Array of Type Integer

// Case 1: Assignment with Declaration (Array Size Defined)
#include<stdio.h>
int main(){
	int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *ptr=arr;
	for (int i=0; i<10; i++){
		printf("Address: %d Number: %d\n", ptr, *ptr);
		ptr++;
	}
}

// 4) Extracting Words using Pointers

#include<stdio.h>
int main(){
    char *ptr="Computer Science";
	while(1){
		if(*ptr==' '){
			ptr++;
			break;
		}
		ptr++;
	}
	for (int i=0; *ptr!='\0'; i++){
		printf("%c", *ptr);
		ptr++;
	}
}

// 5) Alphabetically Sorting Words Using Pointers
// 1D Array Used

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int i;
	char *s[4];
	for(i=0; i<4; i++){
		s[i]=(char*)malloc(10*sizeof(char));
	}
	// CAN TAKE INPUT TOO
	strcpy(s[0],"Marnus");
	strcpy(s[1],"Root");
	strcpy(s[2],"Babar");
	strcpy(s[3],"Smith");
	char temp[10];
	for(i=0; i<4; i++){
		for (int j=i+1; j<4; j++){
			if(strcmp(s[i],s[j])>0){
				strcpy(temp, s[j]);
				strcpy(s[j],s[i]);
				strcpy(s[i],temp);
			}
		}
	}
	for (i=0; i<4; i++){
		puts(s[i]);
	}
	free(ptr);
}

// 6) Converting String to Uppercase Using Pointers

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char *ptr;
	ptr=malloc(sizeof(char));
	printf("Enter String: ");
	gets(ptr);
	while(*ptr!='\0'){
		*ptr=toupper(*ptr);
		printf("%c", *ptr);
		ptr++;
	}
	free(ptr);
}

// 7) Different Ways to Increment Pointers

i)    p++;        // use it then move to next int position
ii)   ++p;        // move to next int and then use it
iii)  ++*p;       // increments the value by 1 then use it 
iv)   ++(*p);     // increments the value by 1 then use it
v)    ++*(p);     // increments the value by 1 then use it
vi)   *p++;       // use the value of p then moves to next position
vii)  (*p)++;     // use the value of p then increment the value
viii) *(p)++;     // use the value of p then moves to next position
ix)   *++p;       // moves to the next int location then use that value
x)    *(++p);     // moves to next location then use that value

// 8) Printing 2D Array of Integer Using Pointers

#include<stdio.h>
int main(){
    int arr[3][4] = {{00, 01, 02, 03}, {10, 11, 12, 13}, {20, 21, 22, 23}};
    int i, j, x=0;
    for(i=0; i<3; i++){
    	printf("Address of Array %d: %d\n", i, *(arr+i));
        for(j=0; j<4; j++){
            printf("arr[%d][%d] = %d\n", i, j, *(*(arr+i)+j));
        }
        printf("\n");
    }
}

// 9) Printing 2D Array of Char Using Pointers in Uppercase

#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	int i;
	char s[4][10]={{"Marnus"}, {"Root"}, {"Babar"}, {"Smith"}};
	for(i=0; i<4; i++){
		for (int j=0; *(*(s+i)+j)!='\0'; j++){
			printf("%c", toupper(*(*(s+i)+j)));
		}
		printf("\n");
	}
}

// Dynamic Memory Allocation

i) Malloc: 
- Syntax: (cast-type*)malloc((num of elements)*sizeof(data-type));
- Example: ptr = (int*)malloc(10*sizeof(int)); // 40 Bytes Allotted (1 block of 40 bytes)
- Characteristics: 
1) Not Continguous 
2) Intialises with Garbage Values

ii) Calloc: 
- Syntax: (cast-type*)calloc(num of elements, sizeof(data-type));
- Example: ptr = (int*)calloc(10, sizeof(int)); // 40 Bytes Allotted (10 blocks of 4 bytes each)
- Characteristics: 
1) Continguous 
2) Intialises with Default Value 0

ii) Realloc: 
- Syntax: realloc(pointer-name, (num of elements)*sizeof(data-type));
- Example: ptr = realloc(ptr, 10*sizeof(int)); // 40 Bytes Allotted (1 block of 40 bytes)
- Characteristics: 
1) Not Continguous 
2) Intialises with Garbage Values
3) Retains the Previous Values