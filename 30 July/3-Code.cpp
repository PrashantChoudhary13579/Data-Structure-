// find the a raise to power n but the iteration should be less than n;
#include <iostream>
using namespace std;
int main()
{
    int num, power;
    cout << "Enter the number and it's power - " << endl;
    cin >> num;
    cin >> power;
    int count = 0;
    int c = num;
    if (power == 0)
    {
        c = 1;
    }
    else
    {
        power--;
        while (power != 0)
        {
            c = c * num;
            power--;
            count++;
        }
    }
    cout << "The value is " << c << endl;
    cout << "Number of iteration is " << count << endl;

    return 0;
}