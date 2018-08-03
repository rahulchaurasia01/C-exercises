


	void counting(){
	long characterCount=0;
	long numberOfTabs=0;
	long numberOfBlanks=0;
	long numberOfLines=0;
	long currentCharacter;
	long numberOfWords=0;

		while((currentCharacter=getchar())!=EOF){
			
			if (currentCharacter=='\t')
		{
			numberOfTabs++;
		}

	if (currentCharacter==' ')
		{
			numberOfBlanks++;
		}

	if (currentCharacter=='\n')
		{
			numberOfLines++;
		}
		characterCount++;
		}

	printf("%ld\n%ld\n%ld\n%ld\n", numberOfTabs, numberOfLines, numberOfBlanks, characterCount);
	}

	void replaceBlanks(){
			short currentCharacter=0;
			short previousCharacter=0;

			while((currentCharacter=getchar()) != EOF){

				if(currentCharacter == ' ' &&  previousCharacter == ' '){
					previousCharacter='\0';	
				}
				putchar(previousCharacter);
				previousCharacter = currentCharacter;
			}
			 putchar(previousCharacter);
	}