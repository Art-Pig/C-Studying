C++ Studying

I was introduce my condition that I used to study C.So, I will writting some difference of C and C++.

If you will read my note and will so honor.

 对于C++ 而言，变量的声明与赋值有着很大的不同

 如果想声明一个变量而非定义它，就在变量名前添加关键字extern，

 extern int i; //声明i 而非定义i

 int j; //声明并定义i

 变量名小写字母，类（class）用大写字母开头

 ::result ，调用全局变量

 **指针 

 int *ptr = nullptr //得到空指针最直接的办法就是用nullptr来初始化指针

 
当我们需要在 C++ 中动态地管理一组数据时，`std::vector` 是一个非常有用的容器。它是 C++ 标准模板库（STL）中的一个类模板，提供了一种动态数组的实现。以下是关于 `std::vector` 的一些重要概念和特性：

1. **动态大小：**`std::vector` 可以动态地调整大小，根据需要增加或减少元素数量。这意味着你可以向 `std::vector` 中添加或删除元素而无需手动管理内存。

2. **连续存储：**`std::vector` 的元素在内存中是连续存储的，这意味着通过索引访问元素的效率很高，因为它们的地址是连续的。

3. **动态分配内存：**`std::vector` 在需要时动态地分配内存，以适应所需的元素数量。当添加新元素时，如果内部数组已满，`std::vector` 会自动分配更多的内存，通常是当前容量的两倍，然后将元素复制到新的内存位置。

4. **随机访问：**由于元素是连续存储的，因此可以通过索引以 O(1) 的时间复杂度进行随机访问。

5. **尾部操作：**`std::vector` 支持在末尾添加或删除元素的高效操作。插入和删除操作的平均时间复杂度为 O(1)，但在末尾进行这些操作时，复杂度可以降低到接近 O(1)。

6. **容量管理：**`std::vector` 提供了一些方法来管理容量，例如 `reserve()` 可以预留一定数量的元素空间，`resize()` 可以改变 `std::vector` 的大小并初始化新元素，`capacity()` 可以返回当前容量。

7. **算法支持：**`std::vector` 提供了许多算法和成员函数来方便地操作其元素，例如排序、查找、插入、删除等。

下面是一个使用 `std::vector` 的简单示例：

```cpp
#include <iostream>
#include <vector>

int main() {
    // 创建一个空的 std::vector
    std::vector<int> vec;

    // 向 std::vector 中添加元素
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // 使用迭代器遍历 std::vector
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 使用范围循环遍历 std::vector（C++11 及以后版本）
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

输出结果为：

```
10 20 30 
10 20 30 
```

总之，`std::vector` 是 C++ 中一个非常有用的容器，能够动态地管理一组数据，并提供了许多方便的操作函数。
 

 在C++中，`decltype` 是一种用来获取表达式的类型的关键字。它允许您在编译时检索表达式的类型，而无需实际执行该表达式。`decltype` 在模板编程、泛型编程和元编程等场景中非常有用，因为它可以使代码更加灵活和通用。

下面是 `decltype` 的基本用法：

```cpp
decltype(expression)
```

其中 `expression` 是要获取类型的表达式。例如：

```cpp
int x = 5;
decltype(x) y; // y的类型为int，因为x是int类型的变量
```

`decltype` 也可以用于函数返回类型推断：

```cpp
int foo();
float bar();

decltype(foo()) result; // result的类型将是foo函数返回值的类型，即int
decltype(bar()) result2; // result2的类型将是bar函数返回值的类型，即float
```

`decltype` 还可以与其他表达式一起使用，例如函数调用、运算符表达式等：

```cpp
int a = 5;
decltype(a + 3) b; // b的类型为int，因为a + 3的结果是int类型
```

需要注意的是，`decltype` 不会执行表达式，它只会根据表达式的类型进行推导。因此，它特别适用于泛型编程和模板元编程，因为这些场景中的类型通常是在编译时确定的。

另外，`decltype` 还可以与 `auto` 关键字结合使用，用于推断变量的类型：

```cpp
int a = 5;
auto b = a; // b的类型为int，auto会根据表达式推断出变量的类型
decltype(a) c = a; // c的类型为int，decltype会直接获取a的类型
```

总的来说，`decltype` 提供了一种强大的方法来检索表达式的类型，使得代码更具灵活性和通用性。

数组是相同类型元素的集合，相反，struct是任意类型元素的集合，

struct mess{

 int flowers;

 const float price;

 int *ptr;
 
};





 
