#include <stdio.h>

void moveZeroes(int *nums, int numsSize) {
    int writeIndex = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[writeIndex] = nums[i];
            writeIndex++;
        }
    }

    while (writeIndex < numsSize) {
        nums[writeIndex] = 0;
        writeIndex++;
    }
}

int main() {
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);
    printf("Case 1: [%d, %d, %d, %d, %d]\n", nums1[0], nums1[1], nums1[2], nums1[3], nums1[4]);

    int nums2[] = {0, 0, 1};
    moveZeroes(nums2, 3);
    printf("Case 2: [%d, %d, %d]\n", nums2[0], nums2[1], nums2[2]);

    int nums3[] = {1, 2, 3};
    moveZeroes(nums3, 3);
    printf("Case 3: [%d, %d, %d]\n", nums3[0], nums3[1], nums3[2]);

    return 0;
}
