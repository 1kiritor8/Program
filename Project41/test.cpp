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
//	int bmi;		//����������
//	bmi = 30;
//	cout << "С��֮ǰ��BMI�ǣ�" << bmi << endl;
//
//	//��һ��ʹ�ø�ֵ��䣬�Ϳ����޸ı����ڼ�¼��ֵ
//	bmi = 26;
//	cout << "С�����ڵ�BMI�ǣ�" << bmi << endl;
//
//	//������ѧ���㣺+ ��- ��* ��/
//	bmi -= 2;
//	cout << "����һ���µļ��ʣ�С�����ڵ�BIM�ǣ�" << bmi << endl;
//
//	return 0;
//}


#include "iostream"
using namespace std;


int main()
{
	int money = 50;
	cout << "С����" << money << endl;
	money -= 5;
	cout << "�������軨��5Ԫ�����ʣ�ࣺ" << money << "Ԫ��" << endl;
	money += 10;
	cout << "ת�������õ�10Ԫ�����ʣ�ࣺ" << money << "Ԫ��" << endl;
	money -= 2;
	cout << "�����Ʊ����2Ԫ�����ʣ�ࣺ" << money << "Ԫ��" << endl;
	money *= 2;
	cout << "��Ʊ�н����������ʣ�ࣺ" << money << "Ԫ��" << endl;

	return 0;
}