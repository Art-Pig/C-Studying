#include<iostream>

/*

  *不确定值的输入和

*/

int main(void) {

    int sum = 0;

    int value = 0;

    while (std::cin >> value) {  //输入非整数，循环结束 ，判断条件为'std::cin >> value',
      是否输入有效，value为int整数类型，输入非整数则条件为假

        sum += value;

        
    }

    std::cout << "The sum is " << sum << "." << std::endl;


    return 0;

}
