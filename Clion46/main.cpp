#include <iostream>
#include "windows.h"

using namespace std;

//多态案例三-电脑组装
//案例描述：
//电脑主要组成部件为CPU（用于计算），显卡（用于显示），内存条（用于存储)
//将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如intel厂商和Lenovo厂商
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
//测试时组装三台不同的电脑进行工作
class Cpu
{
public:

    virtual void Calculate() = 0;
};

class VideoCard
{
public:

    virtual void display() = 0;
};

class Memory
{
public:

    virtual void storage() = 0;
};

class Computer
{
public:

    Computer(Cpu* cpu, VideoCard* videocard, Memory* memory)
    {
        this->cpu = cpu;
        this->videocard = videocard;
        this->memory = memory;
    }

    void work()
    {
        cpu->Calculate();
        videocard->display();
        memory->storage();
    }

    ~Computer()
    {
        if(cpu != NULL)
        {
            delete cpu;
            cpu = NULL;
        }

        if(videocard != NULL)
        {
            delete videocard;
            videocard = NULL;
        }

        if(memory != NULL)
        {
            delete memory;
            memory = NULL;
        }

    }

    Cpu* cpu;
    VideoCard* videocard;
    Memory* memory;

};

class IntelCpu :public Cpu,public VideoCard,public Memory
{
public:

    virtual void Calculate()
    {
        cout << "IntelCpu正在计算" << endl;
    }

    virtual void display()
    {
        cout << "IntelVideoCard正在显示" << endl;
    }

    virtual void storage()
    {
        cout << "IntelMemory的内存正在读取数据" << endl;
    }
};

class IntelVideoCard :public VideoCard
{
public:

    virtual void display()
    {
        cout << "IntelVideoCard正在显示" << endl;
    }

};

class IntelMemory :public Memory
{
public:

    virtual void storage()
    {
        cout << "IntelMemory的内存正在读取数据" << endl;
    }

};

class LenovoCpu :public Cpu
{
public:

    virtual void Calculate()
    {
        cout << "LenovoCpu正在计算" << endl;
    }

};

class LenovoVedioCard :public VideoCard
{
public:

    virtual void display()
    {
        cout << "LenovoVideoCard正在显示" << endl;
    }

};

class LenovoMemory :public Memory
{
public:

    virtual void storage()
    {
        cout << "LenovoMemory的内存正在读取数据" << endl;
    }

};

void test01()
{
    Cpu* intelcpu = new IntelCpu;
    VideoCard* intevideolcard = new IntelVideoCard;
    Memory* intelmemtory = new IntelMemory;

    Computer* computer1 = new Computer(intelcpu,intevideolcard,intelmemtory);
    computer1->work();
    delete computer1;
    cout << "-----------------------------" << endl;

    Cpu* lenovocpu = new LenovoCpu;
    VideoCard* lenovovideocard = new LenovoVedioCard;
    Memory* lenovomemory = new LenovoMemory;

    Computer* computer2 = new Computer(lenovocpu,lenovovideocard,lenovomemory);
    computer2->work();
    delete computer2;

    Computer* computer3 = new Computer(new LenovoCpu,new IntelVideoCard,new LenovoMemory);
    computer3->work();
    delete computer3;
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
