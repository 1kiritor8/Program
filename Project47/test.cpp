//#include "iostream"
//#include <cstring>
//using namespace std;
//
//
//int main()
//{
//	int num1 = 3;
//	int num2 = 5;
//	bool r1 = num1 == num2;
//	bool r2 = num1 != num2;
//	cout << "num1 == num2 ：" << r1 << endl;
//	cout << "num1 != num2 ：" << r2 << endl;
//
//	cout << "3 < 5：" << (3 < 5) << endl;
//	cout << "3 > 5：" << (3 > 5) << endl;
//	cout << "3 <= 5：" << (3 <= 5) << endl;
//	cout << "3 >= 5：" << (3 >= 5) << endl;
//
//	char s1[] = "hello";
//	const char* s2 = "hello";
//	cout << "s1 == s2：" << (s1 == s2) << endl;
//
//	//用strcmp进行比较
//	cout << "s1 == s2?" << strcmp(s1,s2) << endl;
//	char s3[] = "a";
//	const char* s4 = "b";
//	cout << "s3和s4的比较结果：" << strcmp(s3, s4) << endl;
//
//	cout << "字符串字面量c是否大于a：" << strcmp("c", "a") << endl;
//
//	//C++风格字符串，string类型的都是C++风格字符串
//	//在比较中只要有1个C++风格字符串就可以用比较运算符了
//	string s5 = "a";
//	char s6[] = "a";
//	cout << "s5是否等于s6：" << (s5 == s6) << endl;		//结果为true：1或flase：0
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//!		非
//	bool b1 = !(1 == 1);
//	bool b2 = !(1 == 2);
//	cout << b1 << endl;
//	cout << b2 << endl;
//	//&&	与
//	bool b3 = 1 == 1 && 2 == 2;
//	bool b4 = 1 == 2 && 2 == 2;
//	cout << b3 << endl;
//	cout << b4 << endl;
//	//||	或
//	bool b5 = 1 == 1 || 1 == 2;
//	bool b6 = 1 == 2 || 1 == 2;
//	cout << b5 << endl;
//	cout << b6 << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//表达式？v1：v2
//	int num1, num2;
//	cout << "请输入num1的值：" << endl;
//	cin >> num1;
//	cout << "请输入num2的值：" << endl;
//	cin >> num2;
//
//	string value = num1 > num2 ? "num1是大于num2的" : "num1是小于num2的";
//	cout << value << endl;
//
//	return 0;
//}


#include "iostream"
using namespace std;


int main()
{
	int num1,num2;
	cout << "请输入小明第一次考试的成绩（0 - 100）" << endl;
	cin >> num1;
	cout << "请输入小明第二次考试的成绩（0 - 100）" << endl;
	cin >> num2;
	string value = num1 < num2 ? "对小明的考试成绩进行判断，结果是：买糖" : "对小明的考试成绩进行判断，结果是：不买糖";
	cout << value << endl;

	return 0;
}