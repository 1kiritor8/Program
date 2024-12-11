//#include "iostream"
//#include "Windows.h"
//using namespace std;
//
//
//#define FAT_BIM 28
//#define J2C_RATE 4.19  //焦耳转卡路里的比率
//
////符号常量：#define 名称（标识符） 常量值，符号常量是定义在代码的头部
////符号常量的定义 不需要分号结尾
////解决中文乱码问题（Clion）：
////方式1：引入Windows.h库
////方式2：system（“chcp 65001”）；
//
//int main()
//{
//	//system("chcp 65001");
//	SetConsoleOutputCP(CP_UTF8);
//	//使用符号常量的语句，就是正常代码了，要写在main函数中
//	//如何使用：使用符号常量 就直接用它的名字即可
//
//	cout << FAT_BIM << endl;
//	cout << "焦耳转卡路里需要除以：" << J2C_RATE << endl;
//
//	return 0;
//}


#include "iostream"
//#include "Windows.h"
using namespace std;


#define NAME "周杰轮"
#define AGE 21
#define HIGHT 180.5
#define WEIGTH 56

int main()
{
	//system("chcp 65001");
	//SetConsoleOutputCP(CP_UTF8);
	cout << "我是" << NAME << ", 今年" << AGE << "岁。" << endl;
	cout<< "身高" << HIGHT << "cm, 体重" << WEIGTH << "KG。" << endl;

	return 0;
}