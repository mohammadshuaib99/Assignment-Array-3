#include <iostream>
#include <vector>

using namespace std;

vector<int> multiply(vector<int> &num, int x)
{
    vector<int> result;
    int carry = 0;

    for (int i = 0; i < num.size(); i++)
    {
        int product = num[i] * x + carry;
        result.push_back(product % 10);
        carry = product / 10;
    }

    while (carry > 0)
    {
        result.push_back(carry % 10);
        carry /= 10;
    }

    return result;
}

vector<int> calculateFactorial(int n)
{
    vector<int> result;
    result.push_back(1);

    for (int i = 2; i <= n; i++)
    {
        result = multiply(result, i);
    }

    return result;
}

void printFactorial(vector<int> &num)
{
    for (int i = num.size() - 1; i >= 0; i--)
    {
        cout << num[i];
    }
    cout << endl;
}

int main()
{
    int n = 100; // Change this to the desired number

    vector<int> factorial = calculateFactorial(n);

    cout << "Factorial of " << n << " is: ";
    printFactorial(factorial);

    return 0;
}

/*output 
Factorial of 100 is: 93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000*/