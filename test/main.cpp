#include <iostream>
int f( int x)
{
    x=5;
    return 2;
}

void g(int x)
{
    x=5;
   
}
int main(int argc, char ** argv)
{

    int a=3;

    f(5);
    std::cout << a << std::endl;
} 