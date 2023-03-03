#include <iostream>
#include <string>
#include"IElectronics.h"
#include "Appliances.h"
#include "Portable.h"
#include "Player.h"
#include "Fridge.h"
#include "Notebook.h"
using namespace std;



int main()
{
    IElectronics* product[3];

    product[0] = new Player(50, 180);
    product[1] = new Fridge(50, 10, string("Green"));
    product[2] = new Notebook(500, 830, string ("turquoise"));
    
     
    bool open = true;
    while (open)
    {
        cout << "�������� ������� : 1 - Player , 2 - Fridge  , 3 - Notebook, 0 ����� �����" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            product[0]->ShowSpec();
            break;

        case 2:
            product[1]->ShowSpec();
            break;

        case 3:
            product[2]->ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "�������� ������� �� 1 �� 3 ��� 0, ����� �����" << endl;
            break;
        }
    }

    delete product[0];
    delete product[1];
    delete product[2];
    
    return 0;
}