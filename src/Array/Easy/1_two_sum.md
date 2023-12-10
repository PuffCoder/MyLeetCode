# 1. Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

### Example 1:

#### Input: 
```
nums = [2,7,11,15], target = 9
```

#### Output:
```[0,1]```

#### Explanation:
Because `nums[0] + nums[1] == 9`, we return `[0, 1]`.
*** 
### Example 2:

#### Input: 

``` nums = [3,2,4], target = 6``` 

#### Output:

``` [1,2]``` 

*** 

### Example 3:

#### Input: ```nums = [3,3], target = 6```
#### Output: ```[0,1]```
 
--- 
### Constraints:

* ` 2 <= nums.length <= 104`
* `-109 <= nums[i] <= 109`
* `-109 <= target <= 109`
* Only one valid answer exists.
 

*** 
### Follow-up:
#### Can you come up with an algorithm that is less than O(n2) time complexity?



--- 

# KEY Point:

## 函数指针 & 指针函数
### *函数指针* 
* definition:
  *函数指针* 是指向函数的指针变量。 函数在C语言中可以向其他的数据类型一样拥有地址。
  函数指针可以指向这些函数的地址，从而允许通过指针调用函数。

### Example：
  ```c
# include <stdio.h>

// define a function
void myFunction(int x) {
  printf("Value" %d\n, x);
}

int main() {
  void(*funcPtr)(int) = myFunction;
  
  funcPtr(43);
  return 0;
}
```

### 公式:
```c 
void(*funcPtr)(int) = myFunction; 
```

*`void`* ---> 数据类型要与所指向的函数的数据类型一致。

`(*funcPtr)`  ---> **(\*函数指针的名称)**

`(int)` ---> (参数的数据类型)

`myFunction` ---> *所指向的函数名称*


---

### 指针函数
* definition:
 数据类型为指针的函数，返回值是地址。
 指针函数可以用于动态分配内存或返回函数内部创建的静态变量的地址等情况。

### Example：
  ```c
#include <stdio.h>

// 定义一个指针函数，返回整数指针
int* createArray(int size) {
    int* arr = (int*)malloc(size * sizeof(int));
    return arr;
}

int main() {

    // 调用指针函数，获得动态分配的整数数组的地址
    int* dynamicArray = createArray(5);

    // 记得释放动态分配的内存
    free(dynamicArray);
    return 0;
}
  ```











































