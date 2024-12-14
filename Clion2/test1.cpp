////
//// Created by 27292 on 2024/11/24.
////
//#include "iostream"
//#include "windows.h"
//using namespace std;
//
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//   cout << "有点胖需要减掉10斤体重，计划5天，每天目标2斤体重，加油！" << endl;
//
//   int day = 1;
//   int sum = 0;
//   while(day < 6)
//   {
//       cout << "今天是减肥的第" << day << "天。" << endl;
//
//       int sport1 =1;
//       while(sport1 < 4)
//       {
//           cout << "开始做减肥第" << day << "天的第" << sport1 << "个俯卧撑！  ";
//           sport1++;
//       }
//       sum += 1;
//       cout << endl;
//       cout << "减肥的第" << day << "天的三个俯卧撑做完，体重减少1斤，累计减少" << sum << "斤" << endl;
//
//       int sport2 = 1;
//       while(sport2 < 4)
//       {
//           cout << "减肥的第" << day << "天的第" << sport2 << "批次的400冲刺！  ";
//           sport2++;
//       }
//       sum += 1;
//       cout << endl;
//       cout << "减肥的第" << day << "天的三个400米冲刺做完，体重减少1斤，累计减少" << sum << "斤" << endl;
//       day++;
//       cout << endl;
//   }
//
//   cout << "5天减肥完成，累计减少" << sum << "斤体重！" << endl;
//
//    return 0;
//}


//#include "iostream"
//using namespace std;
//
//int main()
//{
//    int row = 0;
//    int col =0;
//    for(row = 1;row < 10;row++)
//    {
//        for(col = 1;col < 10;col++)
//        {
//            if(row == 1 && col == 1)
//            {
//                cout << col << " * " << row << " = " << row * col << "   ";
//            }
//            if(row != 1 && col <= row)
//            {
//                cout << col << " * " << row << " = " << row * col << "  ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}


#include "iostream"
using namespace std;


//int main()
//{
//    int num = 0;
//    int sum =0;
//    for(num = 1;num<101; num++)
//    {
//        //cout << num << endl;
//        if(num % 2 == 0)
//        {
//            sum += num;
//        }
//    }
//    cout << sum << endl;
//    return 0;;
//}


int main()
{
    int row = 0;
    int col = 0;
    for(row=1;row<=9;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout << col << "*" << row << "=" << row * col << "\t";
        }
        cout << endl;
    }
    return 0;
}






