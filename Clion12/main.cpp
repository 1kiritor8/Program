#include <iostream>
#include "windows.h"

using namespace std;

//int get_max(int x,int y)
//{
//    return x>y?x:y;
//}
//
//void say_hello(string name)
//{
//    cout << name << ",你好,我是黑马！" << endl;
//}
//
//void say_love(int x)
//{
//    for(int i = 0;i < x;i++)
//    {
//        cout << "小美，我喜欢你！！！" << endl;
//    }
//}
//
//void say_love2(void)
//{
//    for(int i = 0;i < 5;i++)
//    {
//        cout << "\"say_love2\":小美，我喜欢你！！！" << endl;
//    }
//}
//
//void send_food()
//{
//    cout << "小美，我送你的早餐！！!" << endl;
//}
//
//void send_flower()
//{
//    cout << "小美，这是我送你的花！！！" << endl;
//}
//
//void send_say_love()
//{
//    cout << "小美，我喜欢你！！！" << endl;
//}
//
//void watch_movie()
//{
//    cout << "小美，我们一起看电影！！！" << endl;
//}
//
//void i_like_you(int num)
//{
//    switch(num)
//    {
//        case 1:
//            send_food();
//            send_flower();
//            send_say_love();
//            break;
//        case 2:
//            send_flower();
//            send_say_love();
//            watch_movie();
//            break;
//        case 3:
//            watch_movie();
//            send_flower();
//            send_say_love();
//            break;
//        default:
//            cout << "今天不追求小美了，打球去！" << endl;
//            break;
//    }
//}
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
////    int max = get_max(3,5);
////    cout << "函数第一次的结果是：" << max << endl;
////
////    int max2 = get_max(11,6);
////    cout << "函数第二次的结果是：" << max2 << endl;
////
////    say_hello("小明");
////
////    say_love(17);
////
////    say_love2();
//
//
//    cout << "今天天气不错，执行方案3追求小美。" << endl;
//    i_like_you(3);
//
//    return 0;
//}


struct math
{
    int is_min;
    int is_max;
};

int max(int x,int y)
{
    return x>y?x:y;
}

int min(int x,int y)
{
    return x<y?x:y;
}

math get_max_min(int x,int y)
{
    struct math m;
    m.is_max = max(x,y);
    m.is_min = min(x,y);
    return m;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    math n = get_max_min(3,5);
    cout << "最大值是：" << n.is_max << endl;
    cout << "最小值是：" << n.is_min << endl;

    return 0;
}














