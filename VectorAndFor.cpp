/*
*   学习使用数组与for语句
*  
*   
*
*/

#include <iostream>

#include <vector> //数组的头文件

using std::vector;  //使用标准库：vector

int main(void) {

    vector<int> arr0(10,0); //数组初始化 定义10个为0的元素

    for (int i = 0; i != 10; ++i) // for语句其实可以用i！= 10 的形式

        arr0[i] = i;        //数组赋值

    std::cout << "{" << std::flush; //最后是std::endl就会自动换行，std::flush就不会

    for (int i = 0; i != 10; ++i)
        if (i == 9)
            std::cout << arr0[i] << "}" << std::flush;
        else
            std::cout << arr0[i] << "," << std::flush;

    return 0;
}
