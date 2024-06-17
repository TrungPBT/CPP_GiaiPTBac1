// CPP_GiaiPTBac1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;





    double tong(double a, double b) { return a + b; }
    double hieu(double a, double b) { return a - b; }
    double tich(double a, double b) { return a * b; }
    double thuong(double a, double b) {
        if (b != 0) { return a / b; }
        else {
            return 0;
        }
    }


    int main()
    {
        cout << "CHUONG TRING TINH TOAN 2 SO\n";
        double so1, so2;
        cout << "NHAP SO 1:";
        cin >> so1;
        cout << "NHAP SO 2:";
        cin >> so2;
        cout << "Tong cua 2 so la:" << tong(so1, so2);
        cout << "\nHieu cua 2 so la:" << hieu(so1, so2);
        cout << "\nTich cua 2 so la:" << tich(so1, so2);
        cout << "\nThuong cua 2 so la:" << thuong(so1, so2);
        return 0;
    }



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
