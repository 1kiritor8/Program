//#include "iostream"
//#include "random"
//using namespace std;
//
//
//int get_random_num(int min, int max)
//{
//    // ����һ�������������
//    random_device rd;
//    mt19937 gen(rd());
//
//
//    // ����һ�����ȷֲ���������Χ
//    uniform_int_distribution<> dis(min, max);
//
//    // ����һ������������
//    int random_number = dis(gen);
//    return random_number;
//}
//
//int main()
//{
//    int num = get_random_num(1, 100);
//    cout << num << endl;
//    int guess_num;
//    do
//    {
//        cout << "������һ���²�����֣�" << endl;
//        cin >> guess_num;
//
//        if (guess_num > num)
//        {
//            cout << "��µĴ���" << endl;
//        }
//        else if (guess_num < num)
//        {
//            cout << "��µ�С��" << endl;
//        }
//        else
//        {
//            cout << "��¶��ˣ�" << endl;
//        }
//    } while (guess_num != num);
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
    bool is_continue = true;
    while(is_continue)
    {
        cout << "���������µ�һ�죬��ʼ��С�����" << endl;
        int i = 0;
        while (i < 3)
        {
            cout << "�͸�С��һ��õ�廨������" << endl;
            i++;
        }
        cout << "С������ϲ���㣡��" << endl;
        int num = get_random_num(1, 20);
        if (num == 1)
        {
            is_continue = false;
        }
    }
    cout << "�����׳ɹ��ˣ�����" << endl;

	return 0;
}
