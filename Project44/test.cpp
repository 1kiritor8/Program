//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//float 单精度浮点数，4字节，6~7位的有效位数
//	//有效位数：整数位 、小数点 、小数位
//	float num1 = 1234567890;		//只提供了前7位的准确输出
//	float num2 = 1.234567890;
//	cout << fixed;		//设置为小数显示
//	cout.width(20);		//设置显示的最大宽度(最大位数）
//	cout << num2 << "," << sizeof(num2) << endl;
//
//	//double 双精度浮点数，8字节，15~16位的有效位数
//	double num3 = 1234567890.1234567890;
//	cout << num3 << "," << sizeof(num3) << endl;
//
//	//long double 多精度(长精度)浮点数，(VS)8字节，(CLion)16字节，18~19位的有效位数
//	long double num4 = 1234567890.1234567890;
//	cout << num4 << "," << sizeof(num4) << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//不带有后缀的数字的类型确定，整数的最小类型是int，小数的最小类型是double
//	cout << "10的字节数是：" << sizeof(10) << endl;
//	cout << "99999999999的字节数是：" << sizeof(99999999999) << endl;
//	cout << "3.14的字节数是：" << sizeof(3.14) << endl;
//
//	//带有后缀的数字的类型确定
//	//U无符号的意思
//	10U;		//无符号整数int
//	//L是 long的意思
//	cout << "10L的字节数是：" << sizeof(10L) << endl;
//
//	//F 是float的意思
//	//D 是double的意思
//	cout << "3.14F的字节数是：" << sizeof(3.14F) << endl;
//	cout << "3.14的字节数是：" << sizeof(3.14) << endl;
//	//VS不支持3.14D的写法，CLion支持
//	//cout << "3.14D的字节数是：" << sizeof(3.14D) << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	char ch = 65;
//	cout << ch << endl;
//
//	char ch2 = 'a';
//	cout << ch2 + 1 << endl;
//
//	char ch3 = 'a' + 2;
//	cout << ch3 << endl;
//
//	return 0;
//}


#include "iostream"
using namespace std;


int main()
{
	//转义字符：将普通的字符使用\作为开头，将其含义进行转换，对照得到ASCII表的控制字符的功能
	// \n 换行	\t 制表符	\\表示一个反斜杠本身		\'表示单引号		\"表示双引号
	cout << "你好呀 \n 我喜欢你" << endl;
	cout << "---------------------" << endl;

	//\t制表符演示，效果等同于键盘的tab健，一个\t可以补充到8个字符位
	cout << "hello\titheima" << endl;
	cout << "a\titcast" << endl;
	cout << "---------------" << endl;

	//当你需要打印\本身 需要\\才可以
	cout << "\\" << endl;

	//如果要打印单引号和双引号 需要\'	\"来转义，是反向转义，是将单引号和双引号的特殊效果消除
	cout << "\"  \'" << endl;

	return 0;
}