//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//1.变量的声明（定义）,变量类型 变量名;
//	int age;		//整型的变量
//	float height;	//实型的变量
//	char gender;	//字符型变量
//	string name;	//字符串型变量
//	//2.变量的赋值，变量名 = 变量值;
//	age = 21;
//	height = 180.5;
//	gender = 'm';
//	name = "小明";
//	//3.变量的使用（取值）,直接使用变量名称即可
//	//cout << "age = " << age << endl;
//	cout << name << "的年龄：" << age << endl;
//	cout << name << "的性别：" << gender << endl;
//	cout << name << "的身高：" << height << endl;
//
//	return 0;
//}


#include "iostream"
//#include "Windows.h"
using namespace std;


int main()
{
	//system("chcp 65001");
	//SetConsoleOutputCP(CP_UTF8);
	string name;
	int age;
	float height;
	int weight;

	name = "周杰轮";
	age = 21;
	height = 180.5;
	weight = 56;

	cout << "我是" << name << ", 今年" << age << "岁。" << endl;
	cout << "身高" << height << "cm, 体重" << weight << "KG。" << endl;

	return 0;
}