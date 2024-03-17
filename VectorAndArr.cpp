/*

  * 两个不规则数组的合并

  *  合并后的数组有序排序

  *  排除元素0

*/

#include <iostream>

#include <vector> //容器vector 标准头文件

using std::vector;  //使用标准库vector

class Solution{ //定义 Solution 类

public:  //可被引用

    void merge(vector<int>& nums1, int m,vector<int>& nums2,int n)  //nums1 数组1，里面的元素是m个；

//nums2 数组2，里面的元素是n个；并且两数组已正序排序 

    {
        
      int i = m-1; //nums1 的最后一个索引

      int j = n-1; //nums2 的最后一个索引

      int k  = m+n-1; //合并后数组nums1的最后一个索引 ，vector的特性是动态大小，只需要将元素存到最后一位就好

      int c = 0; //用于循环判断
      
      while(i!=0&&j!=0)
      {
          if(nums1[i]>nums2[i])
          {
            if(i!=m-1&&j!=n-1)
            {
              for(c=n-1;c>0;c--)
              {
                 if(nums1[i]>nums2[c])
                 {
                    nums1[k] = nums1[j];
                    break;
                 }
              }
            }
              
          }
        
      }
      






    }


}
