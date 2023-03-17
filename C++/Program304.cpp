#include<iostream>
using namespace std;

template<class T>
T Addition(T i,T j)
{
      T Ans ;    // initalistion nahi karyach
      Ans = i + j;
      return Ans;
}
int main()
{
      double a = 11.9, b = 10.1;
      double iret = 0.0;
      iret = Addition(a,b);
      cout<<"Additio is :"<<iret<<"\n";

      int X = 11, Y = 10;
      int ire = 0;
      ire = Addition(X,Y);
      cout<<"Additio is :"<<ire<<"\n";


      return 0;
}