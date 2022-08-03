#include<iostream.h>

class bill
{
protected:
float uprice;
float uconsumed;

public:
void funsetbill(float a,float b)
{
uprice = a;
uconsumed = b;
}
};

class waterbill : public bill
{


public:
void funfindbill(float a)
{
}

void funfindbill()
{
cout << "Bill Amount - "<< (uconsumed * uprice) << endl ;
}
};



int main()
{
waterbill obj;
obj.funsetbill(2.00,150.00);
obj.funfindbill ();

return 0;
}
