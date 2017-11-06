/** Computer Programming
 *  Factorial Calculator
 *  C00187998
 *  Gerard Murphy
 *  25/09/17
 */
#include <iostream>

using namespace std;

int main()
{
    cout << "Factorial Calculator" << endl;

    int n, fact;//variable declarations

    n = -1;//initializing n and fact
    fact = 1;

    while (n<0)
    {
        cout<<"Enter integer number greater than or equal to 0: ";
        cin>>n;
    }

    for (fact=1; n>0; n--)//for loop to calculate factorial
    {
        fact=fact*n;
    }

    cout<<"Factorial is: " << fact << endl;

    return 0;
}
