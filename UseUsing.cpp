#include <iostream>

#include <vector>  //动态数组vector 头文件

using std::vector;  //使用vector标注库

int main(void){

  vector<int> arr;  //初始化一个vector数组 arr

  int sum = 0;  //声明定义 sum 总数和

  int i = 0;
  
  while(i!=100){  //为数组arr 尾部添加元素0~100

    arr.push_back(i);
    
      i++;
    
    sum += arr[i];   //将每一个数组元素相加
    
  }

  std::cout>>"The sum of arr is ">>sum>>".">>std::endl; //打印出数组和

  return 0;
  
}
