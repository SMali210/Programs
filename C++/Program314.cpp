#include<iostream>
using namespace std;

template<class T>
T Maximum(T Arr[],int iSize)   // 
{
      int icnt = 0;  //
      T Max  = Arr[0] ;
      for(icnt = 0;icnt<iSize;icnt++)
      {
            if(Arr[icnt] > Max)
            {
                  Max = Arr[icnt];
            }
      }
      return Max;
}
int main()
{
      int Data [] = {10,20,320,40};
      int   iRet = 0;
     iRet = Maximum(Data,4);
      cout<<"Maximum no  is :"<<iRet<<"\n";

     double Dataf [] = {10.9,11.5,20.5,30.5,20.9};

     float fRet = Maximum(Dataf,5);

       cout<<"Maximum  no is :"<<fRet<<"\n";


      return 0;
}