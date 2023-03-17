
#include<iostream>
using namespace std;

// problems of n Number

class Arrayx
{
      public:
            int *Arr;
            int iSize;

            Arrayx(int i)
            {
                  iSize = i;
                  Arr = new int[iSize];
            }
            ~Arrayx()
            {
            
                 delete []Arr;
            }
            void Accept()
            {
                  cout<<"Plese enter the number :"<<"\n";
                  int icnt = 0;

                  for(icnt = 0;icnt < iSize;icnt++)
                  {
                        cin>>Arr[icnt];
                  }
            }
            void Display()
            {
                  cout<<"Elements of array :"<<"\n";
                  int icnt = 0;
                  
                  for(icnt = 0;icnt < iSize;icnt++)
                  {
                        cout<<Arr[icnt]<<"\t";
                  }
                  cout<<"\n";
            }

            int SumEven()
            {
                  int iSum = 0;
                  int icnt = 0;

                  for(icnt = 0;icnt<iSize;icnt++)
                  {
                       if((Arr[icnt] % 2)== 0)
                       {
                          iSum = iSum + Arr[icnt];
                       }
                  }
                  return iSum;
            }
            int SumOdd()
            {
                  int iSum = 0;
                  int icnt = 0;

                  for(icnt = 0;icnt<iSize;icnt++)
                  {
                       if((Arr[icnt] % 2)!= 0)
                       {
                          iSum = iSum + Arr[icnt];
                       }
                  }
                  return iSum;
            }


};
int main()
{
      int iLength = 0;
      int iRet = 0;

      cout<<"Enter the number of elements :"<<"\n";
      cin>>iLength;

      Arrayx obj(iLength);

      obj.Accept();
      obj.Display();

      iRet = obj. SumEven();
      cout<<"Addition of even Number :"<<iRet<<"\n";
       
      iRet = obj. SumOdd();
      cout<<"Addition of odd Number :"<<iRet<<"\n";
      

      return 0;
}