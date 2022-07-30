#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter Your Number to check : ";
    cin >> n;
    bool flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non-Prime Number" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime Number" << endl;
    }

    return 0;
}