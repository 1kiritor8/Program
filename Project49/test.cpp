//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	int love;		//1��ʾϲ��		0��ʾ��ϲ��
//	int weather;	//1��ʾ������	0��ʾ������
//	cout << "С�����ҵ�̬������ô���ģ�1��ϲ����0�ǲ�ϲ����" << endl;
//	cin >> love;
//
//	if (love)
//	{
//		cout << "�ܸ��ˣ�С��ϲ���ң���Ҳϲ��С����" << endl;
//
//		cout << "��һ�������������������ô����1��������0������" << endl;
//		cin >> weather;
//		if (weather)
//		{
//			cout << "�����Ǹ�����������С��ȥ̤��ȥ��" << endl;
//		}
//		else
//		{
//			cout << "�����������ã�ȥ����Ӱ�ɣ�" << endl;
//		}
//	}
//	else
//	{
//		cout << "�����ģ���ȥ׷��С���ˣ�" << endl;
//	}
//	return 0;
//}


#include "iostream"
#include <cstdlib>
#include <time.h>
using namespace std;

//#define DEBUG 1

int main()
{
	srand((unsigned int)time(NULL));
	const int num = rand() % 10 + 1;
#ifdef DEBUG
	cout << num << endl;
#endif // DEBUG

	cout << "���������һ�β²�����֣�" << endl;
	int guess;
	cin >> guess;
	if (guess == num)
	{
		cout << "�������һ�ξͲ¶��ˣ�" << endl;
	}
	else
	{
		cout << "���ԣ����ٲ�һ��" << endl;
		cin >> guess;
		if (guess == num)
		{
			cout << "�ڶ��β¶��ˣ��������" << endl;
		}
		else
		{
			cout << "���ԣ�������һ�Σ�" << endl;
			cin >> guess;
			if (guess == num)
			{
				cout << "�����β¶��ˣ��������" << endl;
			}
			else
			{
				cout << "Sorry,ȫ���´�����������ǣ�" << num << endl;
			}
		}
	}
	return 0;
}