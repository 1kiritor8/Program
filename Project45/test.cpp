//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//c���Է����ַ���
//	char s1[] = "itheima";		//�ַ��������ʽ
//	//char* s2 = "itcast";		//ָ����ʽ���ַ���
//
//	//c++���Է����ַ���
//	string s3 = "c++ string";	//c++string���͵��ַ���
//
//	//s1 = "666";
//	//s2 = "777";
//	s3 = "888";
//
//	cout << s1 << endl;
//	//cout << s2 << endl;
//	cout << s3 << endl;
//
//	return 0;
//}


//#include "iostream"
//#include <string>
//using namespace std;
//
//
//int main()
//{
//	string name = "С��";
//	string majar = "����";
//	int age = 21;
//	double height = 172.50;
//
//	//to_string()���������Խ�����ת��Ϊ�ַ������ͣ��÷�	to_string(����)	��CLion�п���ʹ��
//	string msg = "�ҽ�����" + name + ",�ҵ�רҵ�ǣ�" + majar + ",�����ǣ�" + to_string(age) + "������ǣ�" + to_string(height);
//
//	cout << msg << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//������bool ���������������� true��false
//	bool flag1 = true;		//true��ʾ���棬������������1
//	bool flag2 = false;		//false��ʾ�٣�������������0
//
//	cout << flag1 << endl;
//	cout << flag2 << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//cin >> ����;
//	int num;
//	cout << "������һ��������" << endl;
//	cin >> num;
//
//	double num2;
//	cout << "������һ����������" << endl;
//	cin >> num2;
//
//	char c;
//	cout << "������һ���ַ���" << endl;
//	cin >> c;
//
//	string s;
//	cout << "������һ���ַ�����" << endl;
//	cin >> s;
//
//	cout << "���������ֵ��" << num << endl;
//	cout << "����ĸ���������" << num2 << endl;
//	cout << "������ַ���" << c << endl;
//	cout << "������ַ�����" << s << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	cout << "�������Ա" << endl;
//	string str;
//	cin >> str;
//	cout << str << endl;
//
//	return 0;
//}


#include "iostream"
using namespace std;


int main()
{
	string name;
	float height;
	int age;
	cout << "��������������" << endl;
	cin >> name;
	cout << "������������ߣ�CM��" << endl;
	cin >> height;
	cout << "��������������" << endl;
	cin >> age;
	cout << "--------------------" << endl;
	cout << "��Ϣ������ɣ�������Ϣ���£�" << endl;
	cout << "������" << name << endl;
	cout << "��ߣ�" << height << endl;
	cout << "���䣺" << age << endl;

	return 0;
}