//#include "iostream"
//using namespace std;


//int main()
//{
//	//�����޶�����ʶ�������֡���ĸ���»�����ɣ����ֲ����Կ�ͷ
//	//int 1num = 10;
//	//int num - 1 = 10;
//	//int num * 1 = 10;
//	
//	//��Сд����
//	//int Int = 10;
//	int num = 10;
//	int NUM = 20;
//	cout << num << "," << NUM << endl;
//
//	//�ؼ��ֲ���ռ��
//	//int int = 10;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//int main()
//{
//	//short��int��long��long long
//	short age = 21;
//	cout << age << endl;
//	int num1 = 10;
//	long num2 = 20;
//	long long num3 = 30;
//	cout << num1 << num2 << num3 << endl;
//
//	//sizeof()����,�÷���sizeof�����ݣ������֪�õ�������ռ�õ��ֽ�
//	cout << "short������ռ���ֽڣ�" << sizeof(age) << endl;
//	cout << "int������ռ���ֽڣ�" << sizeof(num1) << endl;
//	cout << "long������ռ���ֽڣ�" << sizeof(num2) << endl;
//	cout << "long long������ռ���ֽڣ�" << sizeof(num3) << endl;
//
//	return 0;
//}


#include "iostream"
using namespace std;


int main()
{
	//�з��ţ�signed����ѡ�����޷��ţ�unsigned����д��
	signed int num = 10;	//�����з���int
	int num2 = -10;			//�����з���int
	cout << num << "," << num2 << endl;

	unsigned int num3 = -30;	//�޷��ŵ�����
	cout << num3 << endl;

	//long �޷���
	unsigned long num4 = 50;
	cout << num4 << endl;

	//�޷��ŵ�int��short��long�п��д��
	//u_short num5 = 100;		//��ͬ�� unsigned short
	unsigned short num5 = 100;
	//(Clion֧�֣�VS��֧�֣�
	//u_int num6 = 200;			//��ͬ�� unsigned int
	unsigned int num6 = 200;
	//u_long num7 = 1000;		//��ͬ�� unsigned long
	unsigned long num7 = 1000;
	cout << num5 << "," << num6 << "," << num7 << endl;


	return 0;
}