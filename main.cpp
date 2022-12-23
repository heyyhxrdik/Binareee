#include <iostream>
#include <math.h>
using namespace std;

static string reverse(string str)
{
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev = rev + str[i];
    }

    return rev;
}

static string DecimalToBinary(int n)
{
    string binary = "";

    while (n != 0)
    {
        binary += to_string((n % 2));
        n = n / 2;
    }

    return reverse(binary);
}

static int BinaryToDecimal(int n)
{

    int i = 0, number = 0;

    while (n != 0)
    {
        if ((n % 10) == 1)
        {
            number += pow(2, i);
        }
        i++;
        n /= 10;
    }

    return number;
}

int main()
{
    int choice, n;
    while (true)
    {
        cout << "\t\t\t---MENU---\n1. Convert decimal number to binary number\n2. Convert binary number to decimal number\n\nEnter your choice: ";
        cin >> choice;
        cout << "\n";

        if (choice == 1)
        {
            cout << "Enter a number to convert into binary(without decimals): ";
            cin >> n;

            cout << "Binary Number: " << DecimalToBinary(n);
            break;
        }
        else if (choice == 2)
        {
            cout << "Enter a binary number to convert into decimal(without decimals): ";
            cin >> n;

            cout << "Decimal Number: " << BinaryToDecimal(n);
            break;
        }
        else
        {
            cout << "Wrong choice! Try again!!" << endl;
            continue;
        }
    }
}