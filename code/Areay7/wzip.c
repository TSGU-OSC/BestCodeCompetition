#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stdout, "wzip: file1 [file2 ...]\n");
        exit(1);
    }

    FILE *out = stdout; // 默认将输出写入标准输出
    char current;
    char last = '\0';
    int count = 0;

    for (int i = 1; i < argc; i++) {
        FILE *fp = fopen(argv[i], "r");
        if (fp == NULL) {
            fprintf(stderr, "wzip: cannot open file\n");
            exit(1);
        }

        while (fread(&current, sizeof(char), 1, fp) == 1) {
            if (current == last) {
                count++;
            } else {
                if (count > 0) {
                    fwrite(&count, sizeof(int), 1, out);
                    fwrite(&last, sizeof(char), 1, out);
                }
                count = 1;
                last = current;
            }
        }

        fclose(fp);
    }

    // 处理最后一组连续字符
    if (count > 0) {
        fwrite(&count, sizeof(int), 1, out);
        fwrite(&last, sizeof(char), 1, out);
    }

    return 0;
}
