#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  for (int i = 0; i < numsSize - 1; i++) {
    for (int j = i + 1; j < numsSize; j++) {
      if (nums[i] + nums[j] == target) {
        *returnSize = 2;
        int *RES = (int *)malloc(2 * (sizeof(int)));
        RES[0] = i;
        RES[1] = j;
        return RES;
      }
    }
  }
  *returnSize = 0;
  return NULL;
}

// TESTING
int main() {
  int num[] = {2, 7, 11, 15};
  int target = 9;
  int returnSize;

  // 调用 twoSum 函数
  int *result = twoSum(num, sizeof(num) / sizeof(num[0]), target, &returnSize);

  if (returnSize == 2) {
    printf("Indices: %d, %d\n", result[0], result[1]);
    free(result); // 释放动态分配的内存
  } else {
    printf("No solution found.\n");
  }

  return 0;
}
