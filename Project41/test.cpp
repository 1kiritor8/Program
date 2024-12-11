//#include "iostream"
////#include "Windows.h"
//using namespace std;
//
//
//int main()
//{
//	//SetConsoleOutputCP(CP_UTF8);
//	//system("chcp 65001");
//
//	int bmi;		//变量的声明
//	bmi = 30;
//	cout << "小明之前的BMI是：" << bmi << endl;
//
//	//再一次使用赋值语句，就可以修改变量内记录的值
//	bmi = 26;
//	cout << "小明现在的BMI是：" << bmi << endl;
//
//	//进行数学计算：+ 、- 、* 、/
//	bmi -= 2;
//	cout << "经过一个月的减肥，小明现在的BIM是：" << bmi << endl;
//
//	return 0;
//}


#include "iostream"
using namespace std;


int main()
{
	int money = 50;
	cout << "小明余额：" << money << endl;
	money -= 5;
	cout << "购买冰淇凌花费5元，余额剩余：" << money << "元。" << endl;
	money += 10;
	cout << "转卖冰淇凌得到10元，余额剩余：" << money << "元。" << endl;
	money -= 2;
	cout << "购买彩票花费2元，余额剩余：" << money << "元。" << endl;
	money *= 2;
	cout << "彩票中奖余额翻倍，余额剩余：" << money << "元。" << endl;

	return 0;
}