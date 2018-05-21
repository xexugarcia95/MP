#ifndef _BIGINT__
#define _BIGINT__

#include <iostream>
using namespace std;


class BIGINT
{
private:

  int *entero;

public:

BigInt();
BigInt(const BigInt& b);
~BigInt();

int* sumaBig(int *b1,int *b2);
ostream& operator<<(ostream& os,const BigInt& b);//friend ??

};

#endif;
