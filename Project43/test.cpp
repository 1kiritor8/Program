//#include "iostream"
//using namespace std;


//int main()
//{
//	//内容限定，标识符由数字、字母、下划线组成，数字不可以开头
//	//int 1num = 10;
//	//int num - 1 = 10;
//	//int num * 1 = 10;
//	
//	//大小写敏感
//	//int Int = 10;
//	int num = 10;
//	int NUM = 20;
//	cout << num << "," << NUM << endl;
//
//	//关键字不可占用
//	//int int = 10;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//int main()
//{
//	//short、int、long、long long
//	short age = 21;
//	cout << age << endl;
//	int num1 = 10;
//	long num2 = 20;
//	long long num3 = 30;
//	cout << num1 << num2 << num3 << endl;
//
//	//sizeof()函数,用法：sizeof（数据），会告知得到数据所占用的字节
//	cout << "short变量，占用字节：" << sizeof(age) << endl;
//	cout << "int变量，占用字节：" << sizeof(num1) << endl;
//	cout << "long变量，占用字节：" << sizeof(num2) << endl;
//	cout << "long long变量，占用字节：" << sizeof(num3) << endl;
//
//	return 0;
//}


#include "iostream"
using namespace std;


int main()
{
	//有符号：signed（可选），无符号：unsigned（必写）
	signed int num = 10;	//都是有符号int
	int num2 = -10;			//都是有符号int
	cout << num << "," << num2 << endl;

	unsigned int num3 = -30;	//无符号的数字
	cout << num3 << endl;

	//long 无符号
	unsigned long num4 = 50;
	cout << num4 << endl;

	//无符号的int、short、long有快捷写法
	//u_short num5 = 100;		//等同于 unsigned short
	unsigned short num5 = 100;
	//(Clion支持，VS不支持）
	//u_int num6 = 200;			//等同于 unsigned int
	unsigned int num6 = 200;
	//u_long num7 = 1000;		//等同于 unsigned long
	unsigned long num7 = 1000;
	cout << num5 << "," << num6 << "," << num7 << endl;


	return 0;
}