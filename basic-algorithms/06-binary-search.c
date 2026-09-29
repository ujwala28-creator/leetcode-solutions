#include <stdio.h>

int binarySearch(int *nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    printf("Case 1: %d\n", binarySearch(nums1, 6, 9));

    int nums2[] = {-1, 0, 3, 5, 9, 12};
    printf("Case 2: %d\n", binarySearch(nums2, 6, 2));

    int nums3[] = {2, 2, 2, 2};
    printf("Case 3: %d\n", binarySearch(nums3, 4, 2));

    return 0;
}
