//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	cout << "Hello World!!!" << endl;
//
//	cout << "I Love C++!!!" << endl;
//
//	return 0;
//}


#include "iostream"
using namespace std;

/*
我是多行注释
当前代码演示了
cout语句的各种使用形式
*/

int main()
{
	cout << "I Love C++!" << endl;			//这行代码向屏幕中显示信息
	cout << 10 << endl;

	//下面的代码，完成了将多份内容合并输出的功能
	cout << "I am 10 " << "years old" << endl;
	cout << "C++ is " << "the best " << "programming language" << endl;

	return 0;
}