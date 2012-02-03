/*
The purpose of this document is to learn basic C++ syntax and semantics through some already written test.
*/

// iostream allows users to interact with terminal
#include <iostream>

/*--------------------------------------------------------------------------------------------------------------*/
/* FACTORIAL */
//write function factorial below this line
int factorial(int n)
{
    if (n==0)
        return 1;
    else return n*factorial(n-1);
}

bool factorial_test()
{
    return (6 == factorial(3));
}

/*--------------------------------------------------------------------------------------------------------------*/
/* POINT */

//write class point below this line

class Point
{
public:
    Point (int a,int b)
    {
        _x=a;
        _y=b;
    }
    int x()
    {
        return _x;
    }
    int y()
    {
        return _y;
    }
    void move(int a,int b)
    {
        _x=_x+a;
        _y=_y+b;
    }
    void print()
    {std::cout << "(" << _x << ";"<< _y << ")" << std::endl;
    }
private:
    int _x;
    int _y;
};

//Test if x() and y() method returs values of x an y private attributes
bool point_test_1()
{
    int x = 10;
    int y = 12;
    Point p(x,y);
    return (p.x() == x &&  p.y() == y); //methods p.x () <> p.x
}



//Test if move() method works correctly
//We move position to the position given to move()
bool point_test_2()
{
int x = 0;
int y = 0;
Point p(x,y);
p.move(1,1);
return (p.x() == 1 && p.y() == 1);
}



void point_test_3()
{
Point p0(12, 15);
Point p1(13, 14);
p0.print();
p1.print();
std::cout << "p0 should print : (12,15)" << std::endl;
std::cout << "p1 should print : (13,14)" << std::endl;
}



bool point_test()
{
    std::cout << "point_test_1 " << point_test_1() << std::endl;
    std::cout << "point_test_2 " << point_test_2() << std::endl;
    point_test_3();
    std::cout << "point_test_3 "  << std::endl;
    return true;
}

/*--------------------------------------------------------------------------------------------------------------*/
/* SQUARE */

class Square
{
public:
    Square (Point p, int l):_center(p)
    {
        _length=l;
    }

    Point center()
    {
    return _center;
    }

    int length()
    {
    return _length;
    }

private:
    Point _center;
    int _length; 
};
bool square_test_1()
{
Point center(10,10);
int length = 2;
Square s(center, length);
return (s.center().x() == 10 && s.center().y() == 10 && s.length() == 2);
}


/*
bool square_test_2()
{
Point center(10,10);
int length = 2;
Square s(center, length);
s.move(15,15)
return (s.center().x() == 15 && s.center().y() == 15);
}
*/

/*
bool square_test_3()
{
Point center(10,10);
int length = 2;
Square s(center, length);
s.print();
std::cout << "s should print : (10,10) - 2" << std::endl;
}
*/


bool square_test()
{
std::cout << "square_test_1 " << square_test_1() << std::endl;
//std::cout << "square_test_2 " << square_test_2() << std::end;
//std::cout << "square_test_3 " << square_test_3() << std::end;
}


/*--------------------------------------------------------------------------------------------------------------*/
/*ALL TESTS*/
int main(int argc, char ** argv)
{
    std::cout << "factorial_test " << std::endl << factorial_test() << std::endl;
    std::cout << "point_test " << std::endl << point_test() << std::endl;
    //std::cout << "square_test" << std::endl << square_test() << std::endl;
}
