//
// Created by 27292 on 2024/11/30.
//
#include "iostream"
#include "windows.h"
#include "random"
using namespace std;


  int get_random_number(int min, int max)
  {
      random_device rd;
      mt19937 gen(rd());
      uniform_int_distribution<> dis(min, max);
      return dis(gen);
  }

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int i = 0;
    int j = 0;
    int k = 0;
    string names[] = {"Landon", "Avery”"
                        ," Tom"," sawyer"," Zachary", " Ets", " Keegan", " Kan den"," Bentley"," Finnegan", " Nash"," Emmett"," Greyson"," Noah","3ace", " Lincoln", " Isaac"," Ashen"," Decant"," Theo", "-OLiver", " Hudson"," Lev"," Domini"," Austin", " matte", " Owen", " withing"," Carter"," Logan", " Luke", " Max", " Ethan", " Holes", "3mocha", " Benjamin", " Honey"," Lucas"," AAlexander"," Jackson", " Hasan", " Grayson"," Ry den"," ELija"," Liam", " caleb", " Thomas", " Cooper", " Hunter", "Cannon"};

    int arr[2][2][5] = {{{1,2,3,4,5},{1,2,3,4,5}},{{1,2,3,4,5},{1,2,3,4,5}}};

    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
        {
            for (k = 0; k < sizeof(arr[0][0]) / sizeof(arr[0][0][0]); k++)
            {
                int num = get_random_number(0, 50);
                if(i == 0)
                {
                    if(j == 0)
                    {
                        cout << "专业1：物理" << "  班级：1班" << "  座位号：" << arr[i][j][k] << "  姓名：" << names[num] << endl;
                    }
                    else if(j == 1)
                    {
                        cout << "专业1：物理" << "  班级：2班" << "  座位号：" << arr[i][j][k] << "  姓名：" << names[num] << endl;
                    }
                    else
                    {
                        cout  << "i = " << i << "错误！！！" << endl;
                    }
                }
                else if(i == 1)
                {
                    if(j == 0)
                    {
                        cout << "专业2：计算机" << "  班级：1班" << "  座位号：" << arr[i][j][k] << "  姓名：" << names[num] << endl;

                    }
                    else if(j == 1)
                    {
                        cout << "专业2：计算机" << "  班级：2班" << "  座位号：" << arr[i][j][k] << "  姓名：" << names[num] << endl;

                    }
                    else
                    {
                        cout << "i = " << i << "错误！！！" << endl;
                    }
                }
                else
                {
                    cout << "错误！！！" << endl;
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}















