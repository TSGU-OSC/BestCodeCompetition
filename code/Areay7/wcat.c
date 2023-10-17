#include <stdio.h>
#include <stdlib.h>

char buffer[1000];

int
main(int argc, char *argv[])
{
	if(argc == 1){
		return 0;
	}
	if(argc < 2){
		fprintf(stderr, "Usage: %s <file1> <file2> ... <fileN>", argv[0]);
		exit(1);
	}

	for(int i = 1; i < argc; i++){
	char *str = argv[i];
	FILE *fp = fopen(str,"r");
	

	if(fp == NULL){
		printf("wcat: cannot open file\n");
		exit(1);	
	}
	
	while(fgets(buffer, sizeof(buffer), fp)){
		printf("%s", buffer);		
	}

	fclose(fp);
	}

	return 0;
}
