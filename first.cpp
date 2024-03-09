#include <stdio.h> //头文件

#include <iostream> // 输入输出标准库


int main(void) { // 主函数

	std::cout << "Please input two numbers:" << std::endl; //输出函数

	int n1 = 0, n2 = 0; //定义变量

	std::cin >> n1 >> n2; // 输入函数

	std::cout << "The sum of " << n1 << " and " << n2  //输出函数
				<< " is " << n1 + n2 <<"."<< std::endl;

	return 0; //结束语句

}
