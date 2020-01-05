#include <iostream>

using namespace std;

int amo;
char x;

int main ()
{
    cout << "What number do you want to find primes up to?:\n";
    cin >> amo;


    for (int num=2; num<amo; num++)
        for (int num2=2; num2<num; num2 +1 )
        {
            if (num % num2 == 0)
                break;
            else if (num == ++num2)
                cout << num << " ";

        }
    return 0;
}
