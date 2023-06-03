#include <stdio.h>

int my_strlen(const char* str)
{
	/*
	const char* p = str;
	while (*p++ != '\0');
	return p - str - 1;
	*/

	int len = 0;
	while (*str++)
		len++;
	return len;
}

char* my_strcpy(char* dest, const char* src)
{
	char* s = dest;
	while ((*dest++ = *src++) != '\0');

	return dest;
}

int main()
{
		
	const char* str1 = "Hello";
	char str2[20];
	char str3[6];
	printf("%d\n", my_strlen(str1));
	
	strcpy(str2, str1);
	puts(str1);
	puts(str2);
	strncpy(str3, str1, sizeof(str3));
	puts(str3);
	return 0;
}