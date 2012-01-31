#include <iostream>
int fact( int n)
{
    if (n==0)
    return 1;
    else return n*fact(n-1);
}

int main(int argc, char ** argv)
{

    int a;
    a=fact(5);
    std::cout << a << std::endl;
} 