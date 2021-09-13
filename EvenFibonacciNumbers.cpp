#include <iostream>

int main()
{

    std::cout << "Even Fibonacci Numbers Solution!\n";

    int pastnum1 = 1;
    int pastnum2 = 1;
    int curnum = 2;
    int sum = 0;

    while (curnum < 4000000)
    {

        if (curnum % 2 == 0)
        {
            sum += curnum;
        }

        pastnum1 = pastnum2;
        pastnum2 = curnum;
        curnum = pastnum1 + pastnum2;

    }

    std::cout << sum;

}