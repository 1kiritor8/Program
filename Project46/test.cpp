//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//��Ŀ��������+��-
//	int num1 = +10;		//+��ʾ����
//	int num2 = -10;		//-��ʾ����
//	cout << num1 << "," << num2 << endl;
//
//	//˫Ŀ�������� +��-��*��/��%
//	int num3 = 5 + 5;		//+���
//	int num4 = 5 - 3;		//-���
//	int num5 = 5 * 5;		//*���
//	int num6 = 10 / 3;		//	/���
//	int num7 = 10 % 3;		//%ȡģ
//	cout << "5+5= " << num3 << endl;
//	cout << "5-3= " << num4 << endl;
//	cout << "5*5= " << num5 << endl;
//	cout << "10/3= " << num6 << endl;
//	cout << "10%3= " << num7 << endl;
//	
//	//��Ŀ��������++��--
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
	//+=��-=��*=��/=��%=
	int num = 2;
	num = num + 3;
	cout << num << endl;
	num += 3;
	cout << "num += 3�Ľ���ǣ�" << num << endl;

	num -= 3;
	cout << "num -= 3�Ľ���ǣ�" << num << endl;

	num *= 5;
	cout << "num *= 5�Ľ���ǣ�" << num << endl;

	num /= 5;
	cout << "num /= 5�Ľ���ǣ�" << num << endl;

	num %= 3;
	cout << "num %= 3�Ľ���ǣ�" << num << endl;

	return 0;
}