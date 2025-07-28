#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100], str4[100] = "HELLO";
    char ch = 'l';

    // 1. strlen() – length of string
    printf("1. Length of str1: %lu\n", strlen(str1)); // 5

    // 2. strcpy() – copy string
    strcpy(str3, str1);
    printf("2. After strcpy, str3: %s\n", str3); // Hello

    // 3. strncpy() – copy n characters
    strncpy(str3, str2, 3);
    str3[3] = '\0';
    printf("3. After strncpy, str3: %s\n", str3); // Wor

    // 4. strcat() – concatenate strings
    strcat(str1, str2);
    printf("4. After strcat, str1: %s\n", str1); // HelloWorld

    // 5. strncat() – concatenate n characters
    strncat(str1, "!!", 1);
    printf("5. After strncat, str1: %s\n", str1); // HelloWorld!

    // 6. strcmp() – compare two strings
    printf("6. strcmp(str1, str2): %d\n", strcmp(str1, str2)); // >0 or <0 or 0

    // 7. strncmp() – compare n characters
    printf("7. strncmp(str1, str2, 5): %d\n", strncmp(str1, str2, 5)); // depends

    // 8. strcasecmp() – case-insensitive compare (may not work on all compilers)
    // printf("8. strcasecmp(str1, str4): %d\n", strcasecmp(str1, str4)); // Uncomment if supported

    // 9. strchr() – find first occurrence of char
    char *ptr = strchr(str1, 'o');
    printf("9. strchr(str1, 'o'): %s\n", ptr); // oWorld!

    // 10. strrchr() – find last occurrence of char
    ptr = strrchr(str1, 'l');
    printf("10. strrchr(str1, 'l'): %s\n", ptr); // ld!

    // 11. strstr() – find substring
    ptr = strstr(str1, "World");
    printf("11. strstr(str1, \"World\"): %s\n", ptr); // World!

    // 12. strdup() – duplicate string (not in all compilers)
    char *dup = strdup(str2);
    printf("12. strdup(str2): %s\n", dup); // World

    // 13. memset() – fill memory with constant byte
    memset(str3, '-', 5);
    str3[5] = '\0';
    printf("13. memset str3: %s\n", str3); // -----

    // 14. memcpy() – copy memory area
    memcpy(str3, str2, strlen(str2)+1);
    printf("14. memcpy str3: %s\n", str3); // World

    // 15. memmove() – safer memory copy
    memmove(str3 + 2, str3, strlen(str3)+1);
    printf("15. memmove str3: %s\n", str3); // WoWorld

    // 16. memcmp() – compare memory areas
    printf("16. memcmp(str2, str4, 5): %d\n", memcmp(str2, str4, 5)); // non-zero

    // 17. strtok() – split string
    char temp[] = "one,two,three";
    char *token = strtok(temp, ",");
    printf("17. strtok tokens:\n");
    while (token != NULL) {
        printf("%s\n", token); // one, then two, then three
        token = strtok(NULL, ",");
    }

    // 18. strspn() – get length of matching initial segment
    printf("18. strspn(\"abcde\", \"abcd\"): %lu\n", strspn("abcde", "abcd")); // 4

    // 19. strcspn() – get length of non-matching initial segment
    printf("19. strcspn(\"abcde\", \"xyd\"): %lu\n", strcspn("abcde", "xyd")); // 3

    // 20. strpbrk() – find first matching char
    char *match = strpbrk("hello", "xyzle");
    printf("20. strpbrk(\"hello\", \"xyzle\"): %c\n", *match); // l

    // 21. strcmpi/stricmp() – case-insensitive strcmp (non-standard)
    // printf("21. strcmpi(\"Hello\", \"HELLO\"): %d\n", strcmpi("Hello", "HELLO")); // Uncomment if supported

    return 0;
}
