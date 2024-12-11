//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//单目操作符：+、-
//	int num1 = +10;		//+表示正数
//	int num2 = -10;		//-表示负数
//	cout << num1 << "," << num2 << endl;
//
//	//双目操作符： +、-、*、/、%
//	int num3 = 5 + 5;		//+相加
//	int num4 = 5 - 3;		//-相减
//	int num5 = 5 * 5;		//*相乘
//	int num6 = 10 / 3;		//	/相除
//	int num7 = 10 % 3;		//%取模
//	cout << "5+5= " << num3 << endl;
//	cout << "5-3= " << num4 << endl;
//	cout << "5*5= " << num5 << endl;
//	cout << "10/3= " << num6 << endl;
//	cout << "10%3= " << num7 << endl;
//	
//	//单目操作符：++、--
//	int a = 2;
//	int b = ++a;
//	cout << "a= " << a << "," << "b = " << b << endl;
//
//	int c = 2;
//	int d = c++;
//	cout << "c= " << c << ",d= " << d << endl;
//
//	int e = 2;
//	int f = --e;
//	cout << "e= " << e << ",f= " << f << endl;
//
//	int g = 2;
//	int h = g--;
//	cout << "g= " << g << ",h= " << h << endl;
//
//	return 0;
//}


#include "iostream"
using namespace std;


int main()
{
	//+=、-=、*=、/=、%=
	int num = 2;
	num = num + 3;
	cout << num << endl;
	num += 3;
	cout << "num += 3的结果是：" << num << endl;

	num -= 3;
	cout << "num -= 3的结果是：" << num << endl;

	num *= 5;
	cout << "num *= 5的结果是：" << num << endl;

	num /= 5;
	cout << "num /= 5的结果是：" << num << endl;

	num %= 3;
	cout << "num %= 3的结果是：" << num << endl;

	return 0;
}