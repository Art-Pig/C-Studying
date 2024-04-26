/*


英雄结构体与冒泡排序


*/

#include <iostream>	//标准库

#include <string>	//字符串用库

using namespace std;	//使用字符串标准库

struct hero { //英雄的构造体，包含姓名、年龄和性别

	string name;

	int age;

	string grade;

};

int main(void) {

	hero he[5] = {
	
		{"刘备",23,"男"},

		{"关羽",22,"男"},

		{"张飞",20,"男"},

		{"赵云",21,"男"},

		{"貂蝉",19,"女"}
	
	};

	hero min;

	hero temp;

	for (int i = 0; i < (sizeof(he) / sizeof(he[0])); i++) {		//使用冒泡排序
	
		min = he[i];

		for (int j = i+1; j < (sizeof(he) / sizeof(he[0])); j++) {	//比较它们的年龄进行升序排序

			if (he[j].age < min.age) {
			
				min = he[j];

				he[j] = he[i];

				he[i] = min;

			}
		
		}
	
	}

	for (int i = 0; i < (sizeof(he) / sizeof(he[0])); i++) {	//打印排序好的年龄
	
		cout << he[i].age << endl;

	}

	return 0;

}
