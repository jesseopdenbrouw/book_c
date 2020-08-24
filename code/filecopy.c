#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable : 4996)

int main(int argc, char* argv[]) {

    /* The input and output file handles */
    FILE *infile, *outfile;

    /* Character to read and character count */
    int ch, count = 0;

    /* We need exactly 3 arguments */
    if (argc != 3) {
        printf("Usage: %s infile outfile\n", argv[0]);
        return -1;
    }

    /* Test if input file and output file have the same name */
    if (strcmp(argv[1], argv[2]) == 0) {
        printf("Filenames cannot be the same\n");
        return -2;
    }

    /* Open the input file, exit if error */
    infile = fopen(argv[1], "rb");
    if (infile == NULL) {
        printf("Cannot open input file %s\n", argv[1]);
        return -3;
    }

    /* Open the output file, exit if error */
    outfile = fopen(argv[2], "wb");
    if (outfile == NULL) {
        printf("Cannot open output file %s\n", argv[2]);
        fclose(infile);
        return -4;
    }

    /* Copy characters from input file to output file */
    while ((ch = fgetc(infile)) != EOF) {
        count++;
        fprintf(outfile, "%c", ch);
    }

    printf("Copied %d characters\n", count);

    fclose(infile);
    fclose(outfile);

    return 0;
}