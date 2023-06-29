#include <stdlib.h>

char *leet(char *str) {
    char *ptr = str;
    char *leetStr = str;
    char leetMap[10] = {'o', 'l', 'e', 'a', 't', 'O', 'L', 'E', 'A', 'T'};
    char leetDigits[10] = {'0', '1', '3', '4', '7', '0', '1', '3', '4', '7'};
    int i, j;

    for (i = 0; *ptr != '\0'; i++) {
        for (j = 0; j < 10; j++) {
            if (*ptr == leetMap[j]) {
                *leetStr = leetDigits[j];
                break;
            }
        }
        if (j == 10) {
            *leetStr = *ptr;
        }
        ptr++;
        leetStr++;
    }

    *leetStr = '\0';
    return str;
}
