#include "Contacts management system.h"

using namespace std;

int main()
{
    //SetConsoleOutputCP(CP_UTF8);
    system("chcp 65001");
    Addressbooks abs;
    abs.size = 0;
    int n = 0;
    do
    {
        showMenu();
        cin >> n;
        switch(n)
        {
            case 1:
                addPerson(&abs);
                break;
            case 2:
                showPerson(&abs);
                break;
            case 3:
                deletePerson(&abs);
                break;
            case 4:
                findPerson(&abs);
                break;
            case 5:
                modifyPerson(&abs);
                break;
            case 6:
                cleanPerson(&abs);
                break;
            case 0:
                break;
            default:
                cout << "Invalid input!" << endl;
        }
    }while(n);

    return 0;
}
