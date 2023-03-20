#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    const int row = 4;
    const int col = 3;
    int min = 100000;
    int max = 0;
    int length = 23;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    //first
    for (int i = 0; i <= length; i++)
    {
        for (int j = 0; j <= length; j++)
        {
            if (i >= j && i + j >= length) {
                cout << "*";
                one++;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    //second
    length = 11;
    for (int i = 0; i <= length; i++)
    {
        for (int j = 0; j <= length; j++)
        {
            if (i == j) {
                cout << "   ";
                
            }
            else {
                cout << " @";
                two++;
            }
        }
        cout << endl;
    }
    //third
        for (int i = 0; i <= length; i++)
        {
            for (int j = 0; j <= length; j++)
            {
                if (i >= j && i + j >= length || i <= j && i + j <= length) {
                    cout << "*";
                    three++;
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
     //4
        /*for (int i = 0; i <= length; i++)
        {
            for (int j = 0; j <= length; j++)
            {
                if (i > j) {
                    cout << "*";
                    four++;
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        for (int i = 0; i <= length; i++)
        {
            for (int j = 0; j <= length; j++)
            {
                if (i < j) {
                    cout << " ";
                }
                else {
                    cout << "*";
                    four++;
                }
            }
            cout << endl;
        }*/
        if (max < one) {
            max = one;
        }
        if (max < two) {
            max = two;
        }
        if (max < three) {
            max = three;
        }
        
        if (min > one) {
            min = one;
        }
        if (min > two) {
            min = two;
        }
        if (min > three) {
            min = three;
        }
        int sum = one + two + three;
    cout << "one: " << one << "\ntwo: " << two << "\nthree: " << three << "\n\nmax: " << max << "\nmin: " << min << "\nsum: " << sum;
}
