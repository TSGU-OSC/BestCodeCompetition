#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void searchAndPrint(const char *search_term, FILE *file) {
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    while ((read = getline(&line, &len, file)) != -1) {
        if (strstr(line, search_term) != NULL) {
            printf("%s", line);
        }
    }

    free(line);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stdout, "wgrep: searchterm [file ...]\n");
        return 1;
    }

    const char *search_term = argv[1];

    if (argc == 2) {
        // Read from standard input
        searchAndPrint(search_term, stdin);
    } else {
        // Search in specified files
        for (int i = 2; i < argc; i++) {
            FILE *file = fopen(argv[i], "r");

			if(file == NULL){
				fprintf(stdout, "wgrep: cannot open file\n");
				exit(1);
			}

            searchAndPrint(search_term, file);
            fclose(file);
        }
    }

    return 0;
}

