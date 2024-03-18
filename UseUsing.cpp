#include <iostream>

#include <vector>  //动态数组vector 头文件

using std::vector;  //使用vector标注库

int main(void){

  vector<int> arr;  //初始化一个vector数组 arr

  int sum = 0;  //声明定义 sum 总数和

  int i = 0;
  
  while(i!=100){  //为数组arr 尾部添加元素0~100

    arr.push_back(i);
    
    /*i++;
    
    sum += arr[i];   //将每一个数组元素相加，这里顺序写错了，
    这样子的话，下一个索引是没有元素的，注意顺序*/
    
    sum += arr[i];

    i++;
    
  }

  std::cout<<"The sum of arr is "<<sum>>"."<<std::endl; //打印出数组和

  return 0;
  
}
