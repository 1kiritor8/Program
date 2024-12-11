//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	cout << "今天发工资了" << endl;
//	int money;
//	cout << "请输入小明发的工资" << endl;
//	cin >> money;
//	if (money >= 10000)
//	{
//		cout << "买个新电脑去，花费了9900！" << endl;
//		money -= 9900;
//	}
//
//	cout << "今天发的工资还剩下：" << money << "元！" << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	cout << "欢迎来到黑马儿童游乐场，儿童免费，成人收费！" << endl;
//	cout << "请输入你的年龄：" << endl;
//	int age;
//	cin >> age;
//	if (age < 18)
//	{
//		cout << "您未成年，免费游玩，欢迎你小朋友！" << endl;
//	}
//	cout << "祝您游玩愉快！！！" << endl;
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
//	cout << "小美你喜欢我吗？喜欢扣1，不喜欢扣θ"<< endl;
//	cin >> love;
//	if (love)
//	{
//		cout << "小美我也喜欢你！！！" << endl;
//	}
//	else
//	{
//		cout << "伤心，我去追求小新去了！" << endl;
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
//	cout << "欢迎来到黑马动物园。" << endl;
//	float height;
//	cout << "请输入你的身高（cm）" << endl;
//	cin >> height;
//	if (height > 120)
//	{
//		cout << "您的身高超出120cm，游玩需要够票10元。" << endl;
//	}
//	else
//	{
//		cout << "您的身高未超出120cm，可以免费游玩。" << endl;
//	}
//	cout << "祝您游玩愉快。" << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	bool xiaomei = true;		//true 喜欢 false不喜欢
//	bool xiaotian = false;
//
//	if (xiaomei)
//	{
//		cout << "小美我也喜欢你！" << endl;
//	}
//	else if (xiaotian)
//	{
//		cout << "小天我也喜欢你！" << endl;
//	}
//	else
//	{
//		cout << "小新我喜欢你！" << endl;
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
	cout << "请输入一个猜想的数字：" << endl;
	while(1)
	{
		cin >> i;
		if (i < num)
		{
			cout << "你猜小了！！！" << endl;
		}
		else if (i == num)
		{
			cout << "你猜对了！！！" << endl;
			break;
		}
		else if (i > num)
		{
			cout << "你猜大了！！！" << endl;
		}
		else
		{
			cout << "无效输入!!!" << endl;
		}
	}

	return 0;
}