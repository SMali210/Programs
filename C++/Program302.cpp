#include<iostream>
using namespace std;

int Addition(double i,double j)
{
      double Ans = 0.0;
      Ans = i + j;
      return Ans;
}
int main()
{
      double a = 11.9, b = 10.1;
      double iret = 0.0;

      iret = Addition(a,b);

      cout<<"Additio is :"<<iret<<"\n";


      return 0;
}