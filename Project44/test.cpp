//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//float �����ȸ�������4�ֽڣ�6~7λ����Чλ��
//	//��Чλ��������λ ��С���� ��С��λ
//	float num1 = 1234567890;		//ֻ�ṩ��ǰ7λ��׼ȷ���
//	float num2 = 1.234567890;
//	cout << fixed;		//����ΪС����ʾ
//	cout.width(20);		//������ʾ�������(���λ����
//	cout << num2 << "," << sizeof(num2) << endl;
//
//	//double ˫���ȸ�������8�ֽڣ�15~16λ����Чλ��
//	double num3 = 1234567890.1234567890;
//	cout << num3 << "," << sizeof(num3) << endl;
//
//	//long double �ྫ��(������)��������(VS)8�ֽڣ�(CLion)16�ֽڣ�18~19λ����Чλ��
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
//	//�����к�׺�����ֵ�����ȷ������������С������int��С������С������double
//	cout << "10���ֽ����ǣ�" << sizeof(10) << endl;
//	cout << "99999999999���ֽ����ǣ�" << sizeof(99999999999) << endl;
//	cout << "3.14���ֽ����ǣ�" << sizeof(3.14) << endl;
//
//	//���к�׺�����ֵ�����ȷ��
//	//U�޷��ŵ���˼
//	10U;		//�޷�������int
//	//L�� long����˼
//	cout << "10L���ֽ����ǣ�" << sizeof(10L) << endl;
//
//	//F ��float����˼
//	//D ��double����˼
//	cout << "3.14F���ֽ����ǣ�" << sizeof(3.14F) << endl;
//	cout << "3.14���ֽ����ǣ�" << sizeof(3.14) << endl;
//	//VS��֧��3.14D��д����CLion֧��
//	//cout << "3.14D���ֽ����ǣ�" << sizeof(3.14D) << endl;
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
	//ת���ַ�������ͨ���ַ�ʹ��\��Ϊ��ͷ�����京�����ת�������յõ�ASCII��Ŀ����ַ��Ĺ���
	// \n ����	\t �Ʊ��	\\��ʾһ����б�ܱ���		\'��ʾ������		\"��ʾ˫����
	cout << "���ѽ \n ��ϲ����" << endl;
	cout << "---------------------" << endl;

	//\t�Ʊ����ʾ��Ч����ͬ�ڼ��̵�tab����һ��\t���Բ��䵽8���ַ�λ
	cout << "hello\titheima" << endl;
	cout << "a\titcast" << endl;
	cout << "---------------" << endl;

	//������Ҫ��ӡ\���� ��Ҫ\\�ſ���
	cout << "\\" << endl;

	//���Ҫ��ӡ�����ź�˫���� ��Ҫ\'	\"��ת�壬�Ƿ���ת�壬�ǽ������ź�˫���ŵ�����Ч������
	cout << "\"  \'" << endl;

	return 0;
}