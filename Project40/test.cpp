//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//1.���������������壩,�������� ������;
//	int age;		//���͵ı���
//	float height;	//ʵ�͵ı���
//	char gender;	//�ַ��ͱ���
//	string name;	//�ַ����ͱ���
//	//2.�����ĸ�ֵ�������� = ����ֵ;
//	age = 21;
//	height = 180.5;
//	gender = 'm';
//	name = "С��";
//	//3.������ʹ�ã�ȡֵ��,ֱ��ʹ�ñ������Ƽ���
//	//cout << "age = " << age << endl;
//	cout << name << "�����䣺" << age << endl;
//	cout << name << "���Ա�" << gender << endl;
//	cout << name << "����ߣ�" << height << endl;
//
//	return 0;
//}


#include "iostream"
//#include "Windows.h"
using namespace std;


int main()
{
	//system("chcp 65001");
	//SetConsoleOutputCP(CP_UTF8);
	string name;
	int age;
	float height;
	int weight;

	name = "�ܽ���";
	age = 21;
	height = 180.5;
	weight = 56;

	cout << "����" << name << ", ����" << age << "�ꡣ" << endl;
	cout << "���" << height << "cm, ����" << weight << "KG��" << endl;

	return 0;
}