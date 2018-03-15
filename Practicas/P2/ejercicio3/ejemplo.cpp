#include <iostream>
using namespace std;

int main()
{
  int v = 5;
  int k = 10;

  int *p = &v;
  int *p2 = &k;

  //p = &v;
  //p2 = &k;

  cout << p << " " << p2 << endl;

  int array[10] = {7,89,75,5,8,89,97};
  int *p5 = &(array[4]);
  int array2[10];
  for(int *p3=&(array[0]);p3<array+10;++p3)
  {
    cout << *p3<< " ";

  }
  cout << endl;
  for(int *p4=&(array2[0]);p4<array2+10;++p4,++p5)
  {
    *p4 = *p5;
  }

  for(int i=0;i<10;i++)
  {
    cout << array2[i] << " ";
  }
  cout << endl;
}
