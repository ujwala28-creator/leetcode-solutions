#include <stdio.h>
int main(){
    int a[5];
    int b[5]; 
    int sum[5];
    printf("Enter 5 elements for the first array: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter 5 elements for the second array: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < 5; i++){
        sum[i] = a[i] + b[i];
    }   
    printf("Sum of arrays: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", sum[i]);
    }   
    printf("\n");
    return 0;
}
