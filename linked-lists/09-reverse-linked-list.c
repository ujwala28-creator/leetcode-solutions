#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *reverseList(struct ListNode *head) {
    struct ListNode *prev = NULL;
    struct ListNode *current = head;

    while (current != NULL) {
        struct ListNode *nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
}

void printList(struct ListNode *head) {
    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct ListNode *n1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *n2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *n3 = (struct ListNode *)malloc(sizeof(struct ListNode));

    n1->val = 1;
    n2->val = 2;
    n3->val = 3;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    printf("Original: ");
    printList(n1);

    n1 = reverseList(n1);

    printf("Reversed: ");
    printList(n1);

    free(n1);
    free(n2);
    free(n3);
    return 0;
}
