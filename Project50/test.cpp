#include "iostream"
#include "random"
using namespace std;

#define DEBUG 1

//�������󣨲��˿��ƣ���
//�������3����Ϣ��
//��һ����Ϣ��1~10�����֣������˿���1~10
//�ڶ�����Ϣ���ַ�������ɫ���ɫ�������˿��ƵĻ�ɫ
//��������Ϣ���ַ���������Ǻ�ɫ�������һ򷽿飬����Ǻ�ɫ�������һ�÷��
//����Ҫ��
//ͨ��Ƕ���жϣ�������ж����²�������Ϣ����
//�Ȳ����֣��ɹ������ɫ���ٳɹ��²����Ļ���


int get_random_num(int min, int max)
{
	//����һ�������������
	random_device rd;
	mt19937 gen(rd());
	//����һ�����ȷֲ���������Χ
	uniform_int_distribution<> dis(min, max);
	//����һ������������
	int random_number = dis(gen);
	return random_number;
}


int main()
{
	//int num = get_random_num(1, 10);
	//cout << num << endl;

	//��һ����Ϣ��1~10�����֣������˿���1~10
	int num = get_random_num(1, 10);
	//�ڶ�����Ϣ���ַ�������ɫ���ɫ�������˿��ƵĻ�ɫ
	string color = get_random_num(0, 1) ? "��ɫ" : "��ɫ";
	//��������Ϣ���ַ���������Ǻ�ɫ�������һ򷽿飬����Ǻ�ɫ�������һ�÷��
	string suit;
	if (color == "��ɫ")
	{
		suit = get_random_num(0, 1) ? "����" : "����";

	}
	else
	{
		suit = get_random_num(0, 1) ? "����" : "÷��";

	}


#ifdef DEBUG
	cout << num << ":" << color << ":" << suit << endl;
#endif // DEBUG


	//�Ȳ����֣��ɹ������ɫ���ٳɹ��²����Ļ���
	int guess_num;
	cout << "������²���˿������֣�" << endl;
	cin >> guess_num;
	if (guess_num == num)
	{
		cout << "��²���ɫ����ɫ����1����ɫ����0��" << endl;
		int color_num;
		cin >> color_num;
		if ((color_num ? "��ɫ" : "��ɫ") == color)
		{
			int suit_num;
			if (color == "��ɫ")
			{
				cout << "��²⻨�ͣ���������1����������ȣ�" << endl;
				cin >> suit_num;
				if ((suit_num ? "����" : "����") == suit)
				{
					cout << "��ϲ����Ϸ�ɹ������Ͳ²���ȷ����Ϸ�Ļ����ǣ�" << suit << endl;
				}
				else
				{
					cout << "��Ϸʧ�ܣ����Ͳ²������Ϸ����ȷ�����ǣ�" << suit << endl;
				}
			}
			else
			{
				cout << "��²⻨�ͣ���������1��÷������ȣ�" << endl;
				cin >> suit_num;
				if ((suit_num ? "����" : "÷��") == suit)
				{
					cout << "��ϲ����Ϸ�ɹ������Ͳ²���ȷ����Ϸ�Ļ����ǣ�" << suit << endl;
				}
				else
				{
					cout << "��Ϸʧ�ܣ����Ͳ²������Ϸ����ȷ�����ǣ�" << suit << endl;
				}
			}
		}
		else
		{
			cout << "��ɫ�´��ˣ���Ϸ������" << endl;
		}
	}
	else
	{
		cout << "���ִ�����Ϸ������" << endl;
	}
	return 0;
}