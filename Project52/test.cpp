//#include "iostream"
//using namespace std;
//
//
//enum Color
//{
//	Red = 1,
//	Yellow,
//	Blue
//};
//
//int main()
//{
//	int num = 0;
//	cout << "С����������ϲ��ʲô��ɫ��1��ʾ��ɫ��2��ʾ��ɫ��3��ʾ��ɫ" << endl;
//	cin >> num;
//
//	switch (num)
//	{
//	case Red:
//		cout << "С����ϲ����ɫ��" << endl;
//		break;
//	case Yellow:
//		cout << "С����ϲ����ɫ��" << endl;
//		break;
//	case Blue:
//		cout << "С����ϲ����ɫ��" << endl;
//		break;
//	default:
//		cout << "������󣡣���" << endl;
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
//	//ѭ���Ŀ�������
//	bool is_run = true;
//	int num = 0;//���Ʊ���
//	while (is_run)
//	{
//		//false�ͽ���whiLeѭ���ˣ�true�ͼ���ִ��ѭ����
//		cout << "hello" << endl;
//		num++;
//		if (num > 5)
//		{
//			is_run = false;// �������ӵĸ���
//		}
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
//	int day = 1;
//	while (day <= 10)
//	{
//		cout << "�����ǵ�" << day << "�죬С����ϲ���㣡��" << endl;
//		day++;
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
//	int a = 0;
//	int b = 0;
//	while (a < 101)
//	{
//		b += a;
//		a++;
//	}
//	cout << b << endl;
//
//	return 0;
//}


#include "iostream"
#include "random"
using namespace std;

int get_random_num(int min, int max)
{
    // ����һ�������������
    random_device rd;
    mt19937 gen(rd());


    // ����һ�����ȷֲ���������Χ
    uniform_int_distribution<> dis(min, max);

    // ����һ������������
    int random_number = dis(gen);
    return random_number;
}


int main()
{
    int i = 1;
    int num = get_random_num(1, 100);
    cout << num << endl;

    int guess_num = 0;

    while (guess_num != num)
    {
        cout << "��" << i << "�β²�����" << endl;
        cin >> guess_num;
        if (guess_num > num)
        {
            cout << "��µ��е㡾�󡿣������²²�" << endl;
        }
        else if (guess_num < num)
        {
            cout << "��µ��е㡾С���������²²�" << endl;
        }
        else
        {
            cout << "��ϲ�㣬��¶��ˣ�����" << endl;
        }
        i++;
    }

    return 0;
}