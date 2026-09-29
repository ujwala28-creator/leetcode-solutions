#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return result;
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int returnSize1 = 0;
    int* ans1 = twoSum(nums1, 4, target1, &returnSize1);
    printf("Case 1: [%d, %d]\n", ans1[0], ans1[1]);

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int returnSize2 = 0;
    int* ans2 = twoSum(nums2, 3, target2, &returnSize2);
    printf("Case 2: [%d, %d]\n", ans2[0], ans2[1]);

    int nums3[] = {1, 1};
    int target3 = 2;
    int returnSize3 = 0;
    int* ans3 = twoSum(nums3, 2, target3, &returnSize3);
    printf("Case 3: [%d, %d]\n", ans3[0], ans3[1]);

    free(ans1);
    free(ans2);
    free(ans3);
    return 0;
}
