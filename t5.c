#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *f1(char *s, char ch1, char ch2);

int main() {
    char inputString[100];
    printf("input string:\n");
    scanf("%s", inputString);

    char startChar, endChar;
    printf("input two char:\n");
    scanf(" %c %c", &startChar, &endChar);  
    char *result = f1(inputString, startChar, endChar);
    printf("%s%c\n", result, endChar);

    free(result);
    system("pause");
    return 0;
}

char *f1(char *s, char ch1, char ch2) {
    int length = strlen(s);
    char *result = (char *)malloc((length + 1) * sizeof(char));
    int index = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch1) {
            while (s[i] != ch2 && s[i] != '\0') {
                result[index++] = s[i++];
            }
            break;
        }
    }

    result[index] = '\0';
    return result;
}

