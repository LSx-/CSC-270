#include <stdio.h>
#define BUFSIZE 200
#define FILENAME "data.txt"

int main(void)
{
	FILE *dataFile;
	char buffer[BUFSIZE];
	int lineNo=0;

	//Open the file 'data.txt' in 'read' mode
	dataFile = fopen(FILENAME, "r");
	if(dataFile == NULL)
	{
		fprintf(stderr, "Unable to open %s.\n", FILENAME);
		return 1;
	}

	//continue reading until end of file
	while(!feof(dataFile))
	{
		//read until EOF, end-of-line, of BUFSIZE.
		//EOL is included in what is read!
		fgets(buffer, BUFSIZE, dataFile);
		printf("%04d: %s\n", ++lineNo,buffer);
	}
	fclose(dataFile);
	return 0;
}
