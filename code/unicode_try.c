#include <fcntl.h>
#include <io.h>
#include <stdio.h>
#include <wchar.h>

int main(void) {

    FILE* fp;

    /* Wide-character string */
    wchar_t str[100];

    /* Set standard output to UTF-8 encoded text */
    _setmode(_fileno(stdout), _O_U8TEXT);

    /* Open file for writing UTF-8 encoded text */
    if (fopen_s(&fp, "test.txt", "w,ccs=UTF-8")) {
        wprintf(L"Cannot open file for writing\n");
        return 0;
    }

    /* Write UTF-8 encoded text */
    fwprintf(fp, L"%s\n", L"ο Δικαιοπολις εν αγρω εστιν");

    /* Close file */
    fclose(fp);

    /* Open file for reading UTF-8 encoded text */
    if (fopen_s(&fp, "test.txt", "r,ccs=UTF-8")) {
        wprintf(L"Cannot open file for reading\n");
    }

    /* Read in full string of UTF-8 encoded text */
    fwscanf_s(fp, L"%[^\n]", str, 100);

    /* Write UTF-8 encoded text to standard output */
    wprintf(L"%s", str);

    /* Close file */
    fclose(fp);

    return 0;
}