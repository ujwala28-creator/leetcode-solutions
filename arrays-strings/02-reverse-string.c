#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char s1[] = "hello";
    reverseString(s1, 5);
    printf("Case 1: %s\n", s1);

    char s2[] = "A man a plan a canal Panama";
    reverseString(s2, strlen(s2));
    printf("Case 2: %s\n", s2);

    char s3[] = "a";
    reverseString(s3, 1);
    printf("Case 3: %s\n", s3);

    return 0;
}
