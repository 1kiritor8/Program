//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//��������1-7������ڼ�
//	int num;
//	cout << "��������������֪�����ڼ���1-7����" << endl;
//	cin >> num;
//	switch (num)
//	{
//	case 1:
//		cout << "����������һ" << endl;
//		break;
//	case 2:
//		cout << "���������ڶ�" << endl;
//		break;
//	case 3:
//		cout << "������������" << endl;
//		break;
//	case 4:
//		cout << "������������" << endl;
//		break;
//	case 5:
//		cout << "������������" << endl;
//		break;
//	case 6:
//		cout << "������������" << endl;
//		break;
//	case 7:
//		cout << "������������" << endl;
//		break;
//	default:
//		cout << "������󣡣�" << endl;
//		break;
//	}
//
//	return 0;
//}


#include "iostream"
using namespace std;


int main()
{
	int num;
	cout << "�����Ӱ���10��9�����㡢8��7��һ�㡢6��5����ͨ������5��������" << endl;
	cin >> num;
	switch(num)
	{
	case 10:
	case 9:
		cout << "����" << endl;
		break;
	case 8:
	case 7:
		cout << "һ��" << endl;
		break;
	case 6:
	case 5:
		cout << "��ͨ" << endl;
		break;
	case 4:
	case 3:
	case 2:
	case 1:
		cout << "������Ӱ" << endl;
		break;
	default:
		cout << "������󣡣�" << endl;
	}

	return 0;
}