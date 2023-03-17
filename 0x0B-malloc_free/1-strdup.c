#include <stdlib.h>
#include <string.h>

char *_strdup(char *str) {
    if (str == NULL) {
        return NULL;
    }

    char *new_str = (char *)malloc(strlen(str) + 1); // +1 for the null terminator
    if (new_str == NULL) {
        return NULL;
    }

    strcpy(new_str, str);
    return new_str;
}
