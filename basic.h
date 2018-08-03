int add(){
int a = 5;
int b = 20;
printf("inside add function");
 printf("%d",(a+b));
 return 0;
}

float convertToCelsius(float Farenheit){
return ( 5 * (Farenheit-32) / 9 );
}


int checkIfPerfectSquare(float square){
if(square == (int)square)
return 1;
}


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


void testingForLoop(){
	int i =0;
	int j= 0;
	for (i = 0; i < 5; ++i)
	{
		
		printf("Values of I " );
		printf("%d\n", i);
	}
	for (j = 0; j < 5; j++)
	{
		
		printf("Values of J " );
		printf("%d\n", j);
	}
}
// EOF is -1  
// Lonely ';' is a null statement useful in standalone loops 
