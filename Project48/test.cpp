//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	cout << "���췢������" << endl;
//	int money;
//	cout << "������С�����Ĺ���" << endl;
//	cin >> money;
//	if (money >= 10000)
//	{
//		cout << "����µ���ȥ��������9900��" << endl;
//		money -= 9900;
//	}
//
//	cout << "���췢�Ĺ��ʻ�ʣ�£�" << money << "Ԫ��" << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	cout << "��ӭ���������ͯ���ֳ�����ͯ��ѣ������շѣ�" << endl;
//	cout << "������������䣺" << endl;
//	int age;
//	cin >> age;
//	if (age < 18)
//	{
//		cout << "��δ���꣬������棬��ӭ��С���ѣ�" << endl;
//	}
//	cout << "ף��������죡����" << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	int love;
//	cout << "С����ϲ������ϲ����1����ϲ���ۦ�"<< endl;
//	cin >> love;
//	if (love)
//	{
//		cout << "С����Ҳϲ���㣡����" << endl;
//	}
//	else
//	{
//		cout << "���ģ���ȥ׷��С��ȥ�ˣ�" << endl;
//	}
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	cout << "��ӭ����������԰��" << endl;
//	float height;
//	cout << "�����������ߣ�cm��" << endl;
//	cin >> height;
//	if (height > 120)
//	{
//		cout << "������߳���120cm��������Ҫ��Ʊ10Ԫ��" << endl;
//	}
//	else
//	{
//		cout << "�������δ����120cm������������档" << endl;
//	}
//	cout << "ף��������졣" << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	bool xiaomei = true;		//true ϲ�� false��ϲ��
//	bool xiaotian = false;
//
//	if (xiaomei)
//	{
//		cout << "С����Ҳϲ���㣡" << endl;
//	}
//	else if (xiaotian)
//	{
//		cout << "С����Ҳϲ���㣡" << endl;
//	}
//	else
//	{
//		cout << "С����ϲ���㣡" << endl;
//	}
//
//	return 0;
//}


#include "iostream"
#include <cstdlib>
#include <time.h>
using namespace std;

//#define DEBUG 1
int main()
{
	srand((unsigned int)time(0));
	const int num = rand() % 10 + 1;
#ifdef DEBUG
	cout << num << endl;
#endif // DEBUG

	int i = 0;
	cout << "������һ����������֣�" << endl;
	while(1)
	{
		cin >> i;
		if (i < num)
		{
			cout << "���С�ˣ�����" << endl;
		}
		else if (i == num)
		{
			cout << "��¶��ˣ�����" << endl;
			break;
		}
		else if (i > num)
		{
			cout << "��´��ˣ�����" << endl;
		}
		else
		{
			cout << "��Ч����!!!" << endl;
		}
	}

	return 0;
}