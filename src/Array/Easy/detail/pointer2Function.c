
#include <stdio.h>
#include <stdlib.h>

// 定义一个指针函数，返回整数指针
int *createArray(int size) {
  // 使用 malloc 函数动态分配内存
  int *arr = (int *)malloc(size * sizeof(int));

  // 打印分配的内存地址
  printf("Memory allocated at address: %p\n", (void *)arr);

  return arr;
}

int main() {
  // 调用指针函数，获得一个动态分配的整数数组的地址
  int *dynamicArray = createArray(5);

  // 在这里，dynamicArray 可以被用作数组

  // 打印数组中的元素
  printf("Dynamic Array Elements: ");
  // for (int i = 0; i < 5; ++i) {
  for (int i = 0; i < 5; i++) {
    printf("%d ", dynamicArray[i]);
  }
  printf("\n");

  // 记得释放动态分配的内存
  free(dynamicArray);

  // 打印释放的内存地址
  printf("Memory freed at address: %p\n", (void *)dynamicArray);

  return 0;
}
