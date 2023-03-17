#include<iostream>
using namespace std;

template<class T>
void Diplay(T Arr[],int iSize)
{
      int icnt = 0;  // alla int ch karn no ha tumhi 

      for(icnt = 0;icnt<iSize;icnt++)
      {
            cout<<Arr[icnt]<<"\n";
      }
}
int main()
{
      int Data [] = {10,20,30,40};

      Diplay(Data,4);

      double Datad [] = {10.9,20.5,30.6,40.8};

      Diplay(Datad,4);



      return 0;
}