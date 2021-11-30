#include<iostream>


using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int number = 1;
    while (true)
    {
        fib(number);
        if (fib(number) > 1000)
            break;
        cout <<fib(number) << "\n";
        number++;
    }
   
    system("pause");
    return 0;
}