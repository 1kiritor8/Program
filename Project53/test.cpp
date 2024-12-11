//#include "iostream"
//#include "random"
//using namespace std;
//
//
//int get_random_num(int min, int max)
//{
//    // 创建一个随机数生成器
//    random_device rd;
//    mt19937 gen(rd());
//
//
//    // 定义一个均匀分布的整数范围
//    uniform_int_distribution<> dis(min, max);
//
//    // 生成一个随机数并输出
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
//        cout << "请输入一个猜测的数字：" << endl;
//        cin >> guess_num;
//
//        if (guess_num > num)
//        {
//            cout << "你猜的大了" << endl;
//        }
//        else if (guess_num < num)
//        {
//            cout << "你猜的小了" << endl;
//        }
//        else
//        {
//            cout << "你猜对了！" << endl;
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
    bool is_continue = true;
    while(is_continue)
    {
        cout << "今天又是新的一天，开始向小美表白" << endl;
        int i = 0;
        while (i < 3)
        {
            cout << "送给小美一朵玫瑰花！！！" << endl;
            i++;
        }
        cout << "小美，我喜欢你！！" << endl;
        int num = get_random_num(1, 20);
        if (num == 1)
        {
            is_continue = false;
        }
    }
    cout << "总算表白成功了！！！" << endl;

	return 0;
}
