#include <stdio.h>
#include <string.h>

int isAnagram(char *s, char *t) {
    if (strlen(s) != strlen(t)) {
        return 0;
    }

    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("Case 1: %d\n", isAnagram(s1, t1));

    char s2[] = "rat";
    char t2[] = "car";
    printf("Case 2: %d\n", isAnagram(s2, t2));

    char s3[] = "a";
    char t3[] = "b";
    printf("Case 3: %d\n", isAnagram(s3, t3));

    return 0;
}
