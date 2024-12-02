//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//c语言风格的字符串
//	char s1[] = "itheima";		//字符数组的形式
//	//char* s2 = "itcast";		//指针形式的字符串
//
//	//c++语言风格的字符串
//	string s3 = "c++ string";	//c++string类型的字符串
//
//	//s1 = "666";
//	//s2 = "777";
//	s3 = "888";
//
//	cout << s1 << endl;
//	//cout << s2 << endl;
//	cout << s3 << endl;
//
//	return 0;
//}


//#include "iostream"
//#include <string>
//using namespace std;
//
//
//int main()
//{
//	string name = "小黑";
//	string majar = "物理";
//	int age = 21;
//	double height = 172.50;
//
//	//to_string()函数，可以将内容转换为字符串类型，用法	to_string(内容)	在CLion中可以使用
//	string msg = "我叫做：" + name + ",我的专业是：" + majar + ",年龄是：" + to_string(age) + "，身高是：" + to_string(height);
//
//	cout << msg << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//布尔：bool 字面量仅仅有两个 true或false
//	bool flag1 = true;		//true表示是真，本质上是数字1
//	bool flag2 = false;		//false表示假，本质上是数字0
//
//	cout << flag1 << endl;
//	cout << flag2 << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//cin >> 变量;
//	int num;
//	cout << "请输入一个整数：" << endl;
//	cin >> num;
//
//	double num2;
//	cout << "请输入一个浮点数：" << endl;
//	cin >> num2;
//
//	char c;
//	cout << "请输入一个字符：" << endl;
//	cin >> c;
//
//	string s;
//	cout << "请输入一个字符串：" << endl;
//	cin >> s;
//
//	cout << "输入的整数值：" << num << endl;
//	cout << "输入的浮点数：：" << num2 << endl;
//	cout << "输入的字符：" << c << endl;
//	cout << "输入的字符串：" << s << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	cout << "黑马程序员" << endl;
//	string str;
//	cin >> str;
//	cout << str << endl;
//
//	return 0;
//}


#include "iostream"
using namespace std;


int main()
{
	string name;
	float height;
	int age;
	cout << "请输入您的姓名" << endl;
	cin >> name;
	cout << "请输入您的身高（CM）" << endl;
	cin >> height;
	cout << "请输入您的年龄" << endl;
	cin >> age;
	cout << "--------------------" << endl;
	cout << "信息输入完成，您的信息如下：" << endl;
	cout << "姓名：" << name << endl;
	cout << "身高：" << height << endl;
	cout << "年龄：" << age << endl;

	return 0;
}