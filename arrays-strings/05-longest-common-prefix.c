#include <stdio.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize) {
    static char result[256];

    if (strsSize == 0) {
        result[0] = '\0';
        return result;
    }

    int prefixLen = strlen(strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (j < prefixLen && j < (int)strlen(strs[i]) && strs[0][j] == strs[i][j]) {
            j++;
        }
        prefixLen = j;
        if (prefixLen == 0) {
            break;
        }
    }

    for (int i = 0; i < prefixLen; i++) {
        result[i] = strs[0][i];
    }
    result[prefixLen] = '\0';

    return result;
}

int main() {
    char *arr1[] = {"flower", "flow", "flight"};
    printf("Case 1: %s\n", longestCommonPrefix(arr1, 3));

    char *arr2[] = {"dog", "racecar", "car"};
    printf("Case 2: %s\n", longestCommonPrefix(arr2, 3));

    char *arr3[] = {"apple", "app", "apricot"};
    printf("Case 3: %s\n", longestCommonPrefix(arr3, 3));

    return 0;
}
