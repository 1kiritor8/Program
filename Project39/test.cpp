//#include "iostream"
//#include "Windows.h"
//using namespace std;
//
//
//#define FAT_BIM 28
//#define J2C_RATE 4.19  //����ת��·��ı���
//
////���ų�����#define ���ƣ���ʶ���� ����ֵ�����ų����Ƕ����ڴ����ͷ��
////���ų����Ķ��� ����Ҫ�ֺŽ�β
////��������������⣨Clion����
////��ʽ1������Windows.h��
////��ʽ2��system����chcp 65001������
//
//int main()
//{
//	//system("chcp 65001");
//	SetConsoleOutputCP(CP_UTF8);
//	//ʹ�÷��ų�������䣬�������������ˣ�Ҫд��main������
//	//���ʹ�ã�ʹ�÷��ų��� ��ֱ�����������ּ���
//
//	cout << FAT_BIM << endl;
//	cout << "����ת��·����Ҫ���ԣ�" << J2C_RATE << endl;
//
//	return 0;
//}


#include "iostream"
//#include "Windows.h"
using namespace std;


#define NAME "�ܽ���"
#define AGE 21
#define HIGHT 180.5
#define WEIGTH 56

int main()
{
	//system("chcp 65001");
	//SetConsoleOutputCP(CP_UTF8);
	cout << "����" << NAME << ", ����" << AGE << "�ꡣ" << endl;
	cout<< "���" << HIGHT << "cm, ����" << WEIGTH << "KG��" << endl;

	return 0;
}