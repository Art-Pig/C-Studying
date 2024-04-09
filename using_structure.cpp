/*
1.两个构造，学生和老师

2.学生元素是姓名和分数，老师元素是姓名和五个学生

3.主要学习内容是构造和指针的使用

*/

#include <iostream>

#include <string> 

using namespace std;	//12行与14行满足string的使用

void print_information(struct teacher te[3]);	//如果函数放在main主函数前一定要记得函数声明先

struct students {

	string name;

	float score;

};


struct teacher {

	string name;

	struct students st[5];	//构造嵌套

};


void print_information(struct teacher te[3]) {

	for (int i = 0; i < 3; i++) {

		teacher* p_te = &te[i];	//指针的使用
		
		for (int j = 0; j < 5; j++) {

			std::cout << "teacher name : " << p_te->name << " students name : " << p_te->st[j].name << " students score ： " << p_te->st[j].score << std::endl; //指针还可以这样使用->,"."代表当前位置，有点像Linux

		}
	
	}

}


int main(void) {

	teacher te[3] = { {"wan",{ {"Wang",9.9},{"Ze",2.6},{"Wan",3.1},{"wang",3.4},{"ejfj",3.4}}},{"lao",{ {"Wan",9.9},{"Ze",2.6},{"Wn",3.43},{"wng",3.4},{"ejj",3.6} }},{"shi",{ {"Wan",9.6},{"Z",2.6},{"Wa",3.8},{"wan",3.4},{"ejf",3.4} }} };

	
	print_information(te);

	return 0;

}
