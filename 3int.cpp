#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int num1, num2, num3, num1Save, num2Save, num3Save;
while (1==1) {
    cout << "Enter three numbers, no(,): ";
    cin >> num1 >> num2 >> num3;
    num1Save = num1;
    num2Save = num2;
    num3Save = num3;
    if (num1 == 1 || num1 == 0 || num2 == 1 || num2 == 0 || num3 == 0 || num3 == 1) {
        cout << "0 or 1 cannot be a number";
        cout << '\n';
    }
    else {
        // Factorising num1
        cout << "Prime factors of " << num1 << " are: ";
        while (num1 % 2 == 0) {
            cout << 2 << " ";
            num1 /= 2;
        }
        for (int i = 2; i <= num1 / 2; i++)
        {
            while (num1 % i == 0)
            {
                cout << i << ", ";
                num1 /= i;
            }
        }
        if (num1 > 1) {
            cout <<num1;
        }
        cout << '\n';
        // factorising num2
        cout << "Prime factors of " << num2 << " are: ";
        while (num2 % 2 == 0) {
            cout << 2 << " ";
            num2 /= 2;
        }
        for (int i = 2; i <= num2 / 2; i++)
        {
            while (num2 % i == 0)
            {
                cout << i << ", ";
                num2 /= i;
            }
        }
        if (num2 > 1) {
            cout <<num2;
        }
        cout << '\n';
        //factorising num3
        cout << "Prime factors of " << num3 << " are: ";
        while (num3 % 2 == 0) {
            cout << 2 << " ";
            num3 /= 2;
        }
        for (int i = 2; i <= num3 / 2; i++)
        {
            while (num3 % i == 0)
            {
                cout << i << ", ";
                num3 /= i;
            }
        }
        if (num3 > 1) {
            cout <<num3;
        }
        cout << '\n';
        // finding HCF using euclidean formula
        int a = num1Save, b = num2Save, temp;
        do {
            temp = b;
            b = a%b;
            a = temp;
        } while (b != 0);
        b = a;
        a = num3Save;
        do {
            temp = b;
            b = a%b;
            a = temp;
        } while (b != 0);
        cout << "HCF: "<<a <<'\n';
        //derivation of formula for LCM
        /*  num1 x num2 = a(HCF) x LCM
            (num1 x num2)/a = LCM
            (num1, num2, HCF are assigned and are not variables)
        */
        int LCMtemp = (num1Save*num2Save)/a;
        int LCMcalc = LCMtemp;
        int gcd = num3Save;
        do {
            temp = LCMtemp;
            LCMtemp = gcd%LCMtemp;
            gcd = temp;
        } while (LCMtemp != 0);
        int LCM = (LCMcalc*num3Save)/gcd;
        cout << "LCM: " <<LCM <<'\n';
    }
system("pause");
}
}