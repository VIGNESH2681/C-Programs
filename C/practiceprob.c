#include <stdio.h>
#include <string.h>

// Function to insert dashes between odd numbers and asterisks between even numbers
void insertDashesAndAsterisks(char *str) {
    int len = strlen(str);

    // Iterate through the string
    for (int i = 0; i < len - 1; i++) {
        if (str[i] != '0' && (str[i] - '0') % 2 != 0 && (str[i + 1] - '0') % 2 != 0) {
            memmove(str + i + 1, str + i, len - i);
            str[i + 1] = '-';
            len++;
            i++;
        } else if (str[i] != '0' && (str[i] - '0') % 2 == 0 && (str[i + 1] - '0') % 2 == 0) {
            memmove(str + i + 1, str + i, len - i);
            str[i + 1] = '*';
            len++;
            i++;
        }
    }
}

// Function to remove characters from ChallengeToken in the final string
void removeChallengeToken(char *str, const char *challengeToken) {
    int strLen = strlen(str);
    int tokenLen = strlen(challengeToken);

    for (int i = 0; i < tokenLen; i++) {
        char *ptr = str;
        while ((ptr = strchr(ptr, challengeToken[i])) != NULL) {
            memmove(ptr, ptr + 1, strLen - (ptr - str));
            strLen--;
        }
    }
}

int main() {
    char str[] = "56647304";
    insertDashesAndAsterisks(str);
    printf("Output: %s\n", str);

    char challengeToken[] = "Okzmov45ua6";
    removeChallengeToken(str, challengeToken);

    if (strlen(str) == 0) {
        printf("Final Output: EMPTY\n");
    } else {
        printf("Final Output: %s\n", str);
    }

    return 0;
}