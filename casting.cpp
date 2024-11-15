#include <iostream>
using namespace std;

class  Base
{
    public:
        int i , j;
        void Fun()                          //Definition
        {
            cout<<"Inside Base Fun: \n ";
        }
};

class Derived : public Base
{
    public :
        int x ,y;
        void Fun()                          //Redefinition
        {
            cout<<"Inside Derived Fun \n";
        }
};

int main()
{
    
    Base bobj;
    Derived dobj;
    
    Base *bptr = NULL;
    Derived *dptr = NULL;

    bptr = &bobj;               //No Casting
    dptr = &dobj;               //No Casting
    
    bptr = &dobj;               //Up casting
    
    dptr = &bobj;               //Down casting      Not Allowed


    return 0;
}