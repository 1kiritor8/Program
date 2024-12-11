//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//输入数字1-7输出星期几
//	int num;
//	cout << "请输入数字来告知是星期几（1-7）：" << endl;
//	cin >> num;
//	switch (num)
//	{
//	case 1:
//		cout << "今天是星期一" << endl;
//		break;
//	case 2:
//		cout << "今天是星期二" << endl;
//		break;
//	case 3:
//		cout << "今天是星期三" << endl;
//		break;
//	case 4:
//		cout << "今天是星期四" << endl;
//		break;
//	case 5:
//		cout << "今天是星期五" << endl;
//		break;
//	case 6:
//		cout << "今天是星期六" << endl;
//		break;
//	case 7:
//		cout << "今天是星期日" << endl;
//		break;
//	default:
//		cout << "输入错误！！" << endl;
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
	cout << "请给电影打分10和9是优秀、8和7是一般、6和5是普通，低于5是垃圾：" << endl;
	cin >> num;
	switch(num)
	{
	case 10:
	case 9:
		cout << "优秀" << endl;
		break;
	case 8:
	case 7:
		cout << "一般" << endl;
		break;
	case 6:
	case 5:
		cout << "普通" << endl;
		break;
	case 4:
	case 3:
	case 2:
	case 1:
		cout << "垃圾电影" << endl;
		break;
	default:
		cout << "输入错误！！" << endl;
	}

	return 0;
}