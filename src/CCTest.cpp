#include "CCTest.h"


void CCTest::setNumber( int num ) { number = num; }

void CCTest::printNumber() const {
   std::cout << "\nBefore: " << number;
   const_cast< CCTest * >( this )->number--;
   std::cout << "\nAfter: " << number;
}