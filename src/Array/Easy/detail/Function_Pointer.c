
#include <stdio.h>

// 定义一个函数
void myFunction(int x) { printf("Value: %d\n", x); }

int main() {
  // 声明一个函数指针并将其指向 myFunction 函数
  void (*funcPtr)(int) = myFunction;

  // 通过函数指针调用函数
  funcPtr(42);

  return 0;
}
