#include <iostream>

#include <string> //这是使用string的标准文件

using namespace std; //这是让你可以使用 string

class Bookstore_Item {  //定义一个名为Bookstore_Item的类

    public: //为类设置属性

        string ISBN; 

        int Sale_Numbers;

        double Price;

        double get(void); //得到返回值函数

        void set(string isbn, int sale_numbers, double price); //为变量赋值函数

};

int main(void) { //**注意：在同一个程序下，记得要把类放在主函数main前面

    Bookstore_Item item0; //声明 Bookstore_Item 数据类型对象

    double All_Price; //书籍售卖总销售额

    item0.set("wzw-22180-210", 5, 24.99); 

    All_Price = item0.get();

    std::cout << "All price is " << All_Price << "." << std::endl; //打印出销售总额

    return 0;

}

double Bookstore_Item::get(void) { //得到返回值函数

    return Sale_Numbers * Price;

}

void Bookstore_Item::set(string isbn, int sale_numbers, double price) {//为变量赋值函数


    ISBN = isbn;

    Sale_Numbers = sale_numbers;

    Price = price;

}

