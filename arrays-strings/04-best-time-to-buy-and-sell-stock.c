#include <stdio.h>

int maxProfit(int *prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main() {
    int prices1[] = {7, 1, 5, 3, 6, 4};
    printf("Case 1: %d\n", maxProfit(prices1, 6));

    int prices2[] = {7, 6, 4, 3, 1};
    printf("Case 2: %d\n", maxProfit(prices2, 5));

    int prices3[] = {1, 2, 3, 4, 5};
    printf("Case 3: %d\n", maxProfit(prices3, 5));

    return 0;
}
