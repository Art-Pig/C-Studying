#include<iostream>

/*
  * while 循环将50到100的整数相加
*/

int main(void){

  int sum = 0;

  int numbers = 50;

  while(numbers<=100){

    sum+=numbers;

    ++numbers;
  
  }

  std::cout<<"The sum is " << sum << "."<<std::endl;

  return 0;

}
