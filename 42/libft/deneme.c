// C program to demonstrate working of memset() 
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	char str[50] = "kirk iki istanbul"; 
	printf("\nBefore memset(): %s\n", str); 

	// Fill 8 characters starting from str[13] with '.' 
	memset(str + 13, '.', 8*sizeof(char)); 

//  str + 13 = str[13]





	printf("After memset(): %s", str); 
	return 0; 
} 
