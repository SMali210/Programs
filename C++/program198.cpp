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
int main()
{
      int iLength = 0;
      
      cout<<"Enter the size of array :\n";
      cin>>iLength;

      Arrayx obj(iLength);  // Static And Hardcoded

      obj.Accept();
      obj.Display();

      return 0;
}