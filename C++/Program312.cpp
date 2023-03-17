#include<iostream>
using namespace std;

template<class T>
void Diplay(T Arr[],int iSize)   // size la pn nhai change na karu
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

      char Datac [] = {'S','I','D','D','H','U'};

      Diplay(Datac,6);



      return 0;
}