#include <iostream>
#include <cassert>

int main()
{
//bool
assert(true);
assert(true!=false);
assert(true == true);
assert(not false);
assert(true and true);
assert(true or false);
assert(true == not false);
assert((false and false) == false);

//float
assert(1.0);
assert(2.0==1.0+1.0);
assert(1.0*10.0);
assert(0.23>0);
assert(3E2 == 3e2);
assert(3E2 == 3*10*10);
assert(3E2 == 300.0);
assert(3E6 == 3000000.0);
assert(3e6 == 3'000'000); //  separador de digitos '
assert(2.0 +1 == 3.0);
assert(-10-0<10-0);


//int
assert(2==2);
assert(1<=8);
assert(100!=10);
assert(4 * 2 == 2 * 4);
assert(19%5==4);
assert(5+5+5+5>19);
assert(-3 * (-7) == 21);


//char
assert('a' == 'a');
assert('b'!= 'B');
assert('d' + 'q'== 0xD5);
assert('s' - 'A');
assert('C' - 'A' == 2);
assert('F' - 2 == 'D');
assert('F' + 2 == 'H');
assert('C' - 2 == 65);
assert('C' - 2 == 65 and 'C' - 2 == 'A');

return 0;

}