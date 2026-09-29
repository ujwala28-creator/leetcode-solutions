#include <stdio.h>
#include <string.h>

int isValid(char *s) {
    char stack[1000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                return 0;
            }

            char open = stack[top--];
            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '[')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {
    char s1[] = "()";
    printf("Case 1: %d\n", isValid(s1));

    char s2[] = "([)]";
    printf("Case 2: %d\n", isValid(s2));

    char s3[] = "{[]}";
    printf("Case 3: %d\n", isValid(s3));

    char s4[] = "";
    printf("Case 4: %d\n", isValid(s4));

    return 0;
}
