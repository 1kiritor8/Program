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
//	cout << "小朋友们你们喜欢什么颜色？1表示红色，2表示黄色，3表示蓝色" << endl;
//	cin >> num;
//
//	switch (num)
//	{
//	case Red:
//		cout << "小朋友喜欢红色！" << endl;
//		break;
//	case Yellow:
//		cout << "小朋友喜欢黄色！" << endl;
//		break;
//	case Blue:
//		cout << "小朋友喜欢蓝色！" << endl;
//		break;
//	default:
//		cout << "输入错误！！！" << endl;
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
//	//循环的控制因子
//	bool is_run = true;
//	int num = 0;//控制变量
//	while (is_run)
//	{
//		//false就结束whiLe循环了，true就继续执行循环体
//		cout << "hello" << endl;
//		num++;
//		if (num > 5)
//		{
//			is_run = false;// 控制因子的更新
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
//		cout << "今天是第" << day << "天，小美我喜欢你！！" << endl;
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
    // 创建一个随机数生成器
    random_device rd;
    mt19937 gen(rd());


    // 定义一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);

    // 生成一个随机数并输出
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
        cout << "第" << i << "次猜测数字" << endl;
        cin >> guess_num;
        if (guess_num > num)
        {
            cout << "你猜的有点【大】，请重新猜测" << endl;
        }
        else if (guess_num < num)
        {
            cout << "你猜的有点【小】，请重新猜测" << endl;
        }
        else
        {
            cout << "恭喜你，你猜对了！！！" << endl;
        }
        i++;
    }

    return 0;
}