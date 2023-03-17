#include<iostream>
using namespace std;

template<class T>
T Addition(T Arr[],int iSize)   // size la pn nhai change na karu
{
      int icnt = 0;  // alla int ch karn no ha tumhi 

      T sum ;
      for(icnt = 0;icnt<iSize;icnt++)
      {
            sum = sum + Arr[icnt];
      }
      return sum;
}
int main()
{
      int Data [] = {10,20,30,40};
      int   iRet = 0;
     iRet = Addition(Data,4);
      cout<<"Addition is :"<<iRet<<"\n";

     double Dataf [] = {10.9,11.5,20.5,30.5,20.9};

     float fRet = Addition(Dataf,5);

       cout<<"Addition is :"<<fRet<<"\n";


      return 0;
}