#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
      public:

            T *Arr;
            int iSize;

            ArrayX(int i);

            void Accept();
      
            void Display();
    
};
template<class T>
ArrayX <T> :: ArrayX(int i)
{
   iSize = i;
   Arr = new T [iSize];
                  
}
template<class T>
void ArrayX <T> :: Accept()
{
      cout<<"Enter The Elemnts :"<<"\n";

      for(int icnt = 0;icnt <iSize;icnt++)
      {
            cin>>Arr[icnt];

      }
}
template<class T>
void ArrayX <T> :: Display()
{
      cout<<"Elemnts of the Array:"<<"\n";

      for(int icnt = 0;icnt < iSize;icnt++)
      {
            cout<<Arr[icnt]<<"\n";

      }
}
int main()
{
      ArrayX <int>obj1(5);
      obj1.Accept();
      obj1.Display();

      ArrayX <double>obj2(5);
      obj2.Accept();
      obj2.Display();
}
