//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	int love;		//1表示喜欢		0表示不喜欢
//	int weather;	//1表示好天气	0表示坏天气
//	cout << "小美对我的态度是怎么样的？1是喜欢，0是不喜欢：" << endl;
//	cin >> love;
//
//	if (love)
//	{
//		cout << "很高兴，小美喜欢我，我也喜欢小美！" << endl;
//
//		cout << "看一下天气，今天的天气怎么样？1好天气，0坏天气" << endl;
//		cin >> weather;
//		if (weather)
//		{
//			cout << "今天是个好天气，带小美去踏青去。" << endl;
//		}
//		else
//		{
//			cout << "今天天气不好，去看电影吧！" << endl;
//		}
//	}
//	else
//	{
//		cout << "很伤心，我去追求小新了！" << endl;
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

	cout << "请输入你第一次猜测的数字：" << endl;
	int guess;
	cin >> guess;
	if (guess == num)
	{
		cout << "真棒，第一次就猜对了！" << endl;
	}
	else
	{
		cout << "不对，请再猜一次" << endl;
		cin >> guess;
		if (guess == num)
		{
			cout << "第二次猜对了，你真棒！" << endl;
		}
		else
		{
			cout << "不对，再最后猜一次：" << endl;
			cin >> guess;
			if (guess == num)
			{
				cout << "第三次猜对了，你真棒！" << endl;
			}
			else
			{
				cout << "Sorry,全都猜错啦，我想的是：" << num << endl;
			}
		}
	}
	return 0;
}