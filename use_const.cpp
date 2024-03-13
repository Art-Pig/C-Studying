#include <iostream>

int main(void) {

	const int worth = 100; //const 关键字定义常量；

	int sunflowers = 500;

	double rose = 4.99;

	double jasmine = 2.99;

	std::cout << "The worth is " << worth << "." << std::endl; //worth是50

	int *const ptr1 = &sunflowers; //指针的本质原本就是常量，无论sunflowers的值怎么变，它的地址都不会变，const* 是顶层const

	std::cout << "The ptr1 is " << ptr1 << "." << std::endl;

	int &r = sunflowers; //引用r绑定sunflowers，这样的话r不仅值和sunflowers 一样，地址也一样

	const int *ptr2 = &r;  //底层const

	std::cout << "The address of &r is " << ptr2 << "." << std::endl;

	double *const ptr3 = &rose; //顶层指针是个已经定义的常量，我不能再取其他的地址

	const double* ptr4 = &rose; //底层指针可以改变其他的地址

	ptr4 = &jasmine; 

	std::cout << "The prices of rose and jasmine is " << *ptr3<<" and " << *ptr4 <<"."<< std::endl;

	return 0;

}
