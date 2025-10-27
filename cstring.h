/*
 * cstring.h -- strncpy is broken, made a better version
 *
 * danke_json - Another tool for working with JSON in C
 * https://github.com/moretiles/danke_json
 * Project licensed under Apache-2.0 license
 */

#include <stdlib.h>

char *cstrndup(const char *src, size_t m);
char *cstrncpy(char *dest, const char *src, size_t m);
void *cmemcpy(void *dest, const void *src, size_t count);
