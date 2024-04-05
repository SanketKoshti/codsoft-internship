#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    float n1, n2, c;
    int choice;

    while (1)
    {
        cout << "\n\t\tBASIC CALCULATOR \n\n " << endl;
        cout << "\t1.Addition " << endl;
        cout << "\t2.subtraction " << endl;
        cout << "\t3.Multiplication " << endl;
        cout << "\t4.Division " << endl;
        cout << "\t5.Exit " << endl;

        cout << "Enter your choice  " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "You select the addition of two numbers " << endl;
            cout << "Enter 1st number  " << endl;
            cin >> n1;
            cout << "Enter 2nd number " << endl;
            cin >> n2;

            c = n1 + n2;
            cout << "The addition of two number s is :" << c << endl;
            break;

        case 2:
            cout << "You select the Subtraction of two numbers " << endl;
            cout << "Enter 1st number  " << endl;
            cin >> n1;
            cout << "Enter 2nd number " << endl;
            cin >> n2;

            c = n1 - n2;
            cout << "The Subtraction of two number s is :" << c << endl;
            break;

        case 3:
            cout << "You select the Multiplication of two numbers " << endl;
            cout << "Enter 1st number  " << endl;
            cin >> n1;
            cout << "Enter 2nd number " << endl;
            cin >> n2;

            c = n1 * n2;
            cout << "The Multiplication of two number s is :" << c << endl;
            break;

        case 4:
            cout << "You select the Division of two numbers " << endl;
            cout << "Enter 1st number  " << endl;
            cin >> n1;
            cout << "Enter 2nd number " << endl;
            cin >> n2;

            c = n1 / n2;
            cout << "The DIvision of two number s is :" << c << endl;
            break;

        case 5:
            cout << "Exit !!!";
            exit(0);
        default:
            cout << "ENter valid choice " << endl;
        }
    }
}