//#include "iostream"
//#include <cstring>
//using namespace std;
//
//
//int main()
//{
//	int num1 = 3;
//	int num2 = 5;
//	bool r1 = num1 == num2;
//	bool r2 = num1 != num2;
//	cout << "num1 == num2 ��" << r1 << endl;
//	cout << "num1 != num2 ��" << r2 << endl;
//
//	cout << "3 < 5��" << (3 < 5) << endl;
//	cout << "3 > 5��" << (3 > 5) << endl;
//	cout << "3 <= 5��" << (3 <= 5) << endl;
//	cout << "3 >= 5��" << (3 >= 5) << endl;
//
//	char s1[] = "hello";
//	const char* s2 = "hello";
//	cout << "s1 == s2��" << (s1 == s2) << endl;
//
//	//��strcmp���бȽ�
//	cout << "s1 == s2?" << strcmp(s1,s2) << endl;
//	char s3[] = "a";
//	const char* s4 = "b";
//	cout << "s3��s4�ıȽϽ����" << strcmp(s3, s4) << endl;
//
//	cout << "�ַ���������c�Ƿ����a��" << strcmp("c", "a") << endl;
//
//	//C++����ַ�����string���͵Ķ���C++����ַ���
//	//�ڱȽ���ֻҪ��1��C++����ַ����Ϳ����ñȽ��������
//	string s5 = "a";
//	char s6[] = "a";
//	cout << "s5�Ƿ����s6��" << (s5 == s6) << endl;		//���Ϊtrue��1��flase��0
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//!		��
//	bool b1 = !(1 == 1);
//	bool b2 = !(1 == 2);
//	cout << b1 << endl;
//	cout << b2 << endl;
//	//&&	��
//	bool b3 = 1 == 1 && 2 == 2;
//	bool b4 = 1 == 2 && 2 == 2;
//	cout << b3 << endl;
//	cout << b4 << endl;
//	//||	��
//	bool b5 = 1 == 1 || 1 == 2;
//	bool b6 = 1 == 2 || 1 == 2;
//	cout << b5 << endl;
//	cout << b6 << endl;
//
//	return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
//	//���ʽ��v1��v2
//	int num1, num2;
//	cout << "������num1��ֵ��" << endl;
//	cin >> num1;
//	cout << "������num2��ֵ��" << endl;
//	cin >> num2;
//
//	string value = num1 > num2 ? "num1�Ǵ���num2��" : "num1��С��num2��";
//	cout << value << endl;
//
//	return 0;
//}


#include "iostream"
using namespace std;


int main()
{
	int num1,num2;
	cout << "������С����һ�ο��Եĳɼ���0 - 100��" << endl;
	cin >> num1;
	cout << "������С���ڶ��ο��Եĳɼ���0 - 100��" << endl;
	cin >> num2;
	string value = num1 < num2 ? "��С���Ŀ��Գɼ������жϣ�����ǣ�����" : "��С���Ŀ��Գɼ������жϣ�����ǣ�������";
	cout << value << endl;

	return 0;
}