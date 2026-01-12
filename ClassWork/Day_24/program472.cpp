#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            cout<<"Inside constructor\n";
            iSize = no;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor\n";
            delete [] Arr;
        }
};

int main()
{   
    // Step 1 : Allocate the memory
    ArrayX *aobj = new ArrayX(10);
    
    // Step 2 : Use the memory
    // LB
    
    // Step 3 : Deallocate memory
    delete aobj;

    return 0;
}