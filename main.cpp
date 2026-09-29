#include <iostream>

int add(int a, int b)
{
    int res = a + b;
    return res;
}

int main()
{
    std::cout << "10 + 628 = " << add(10, 628) << std::endl;

    return 0;
}
