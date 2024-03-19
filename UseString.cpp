#include <iostream>

#include <string>

using std::string;

std::string compose(const string& firstname, const string& lastname); //注意函数要写在main前面

int main(void) {

    const string name = compose("ZeWan ", "Wang");  //常量储存返回值名字

    std::cout << name << " " << std::endl;  //打印出返回值

    return 0;
}

std::string compose(const string& firstname, const string& lastname)    //定义string类型函数
{
    return firstname + lastname;    //string类型函数则string类型返回值

}
