#include<stdio.h>
#include "basic.h"
#include "count.h"
#include<math.h>
#include <stdbool.h>
int main()
{
void replaceEscapeCharacters{

short character;
while((character = getchar()) != EOF){
	if (character == '\t' )
	{
		printf("\\t");
	}
	if (character == '\b' || character == 127 || character == 8)
		printf("\\b");

	if (character == '\\')
		printf("\\");
	
	putchar(character);
}
return 0;
}
 