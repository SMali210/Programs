#include<iostream>
using namespace std;

class Arrayx
{
      public:
          int *Arr;
          int iSize;

          Arrayx(int i)  // parameterised 
          {
            cout<<"Allocating the memory of resourses ..."<<"\n";
            iSize = i;
            Arr = new int[iSize];

          }
          ~Arrayx()
          {
            cout<<"Dellocating the memory of resourses ..."<<"\n";
            delete []Arr;

          }
          void Accept()
          {

             
            cout<<"Enter the elements of array :"<<"\n";

            for(int icnt = 0;icnt<iSize;icnt++)
            {
               cin>>Arr[icnt];
            }

          }
          void Display()
          {

            int icnt = 0;

            cout<<"Enter the elements of array :"<<"\n";

            for(icnt = 0;icnt<iSize;icnt++)
            {
               cout<<Arr[icnt]<<"\t";
            }
            cout<<"\n";

          }
         
};
class MarvellousLB : public Arrayx
{
      public:

          MarvellousLB(int i) : Arrayx(i)
          { }
          int Minimum()
          {
            int iMin = Arr[0];
            int icnt = 0;

            for(icnt =0;icnt < iSize;icnt++)
            {
                  if( Arr[icnt]< iMin)
                  {
                     iMin = Arr[icnt];
                  }
            }
            return iMin;
          }
};
int main()
{
      int iLength = 0;
      int iRet = 0;

      cout<<"Enter the size of array :\n";
      cin>>iLength;
      
      MarvellousLB * obj = new MarvellousLB(iLength);

      obj->Accept();
      obj->Display();

      iRet = obj->Minimum();

      cout<<"Smallest elsement is :"<<iRet<<"\n";
      
      delete obj;
      return 0;
}