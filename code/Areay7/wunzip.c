#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stdout, "wunzip: file1 [file2 ...]\n");
        exit(1);
    }

    for (int i = 1; i < argc; i++) {
        FILE *fp = fopen(argv[i], "r");
        if (fp == NULL) {
            fprintf(stderr, "wunzip: cannot open file '%s'\n", argv[i]);
            exit(1);
        }

        int count;
        char character;

        while (fread(&count, sizeof(int), 1, fp) == 1) {
            fread(&character, sizeof(char), 1, fp);
            for (int j = 0; j < count; j++) {
                printf("%c", character);
            }
        }

        fclose(fp);
    }

    return 0;
}
