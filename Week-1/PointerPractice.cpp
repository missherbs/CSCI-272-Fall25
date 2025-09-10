#include <iostream>

using namespace std;

void changeValue(int *ptr)
{
    cout << "Address inside the function (ptr): " << ptr << endl; 
    *ptr = 50; // we will update the value stored at this address
}

int main()
{
    int num = 10;
    
    cout << "Before: " << num << endl;
    
    cout << "Address of num (&num): " << &num << endl;
    
    changeValue(&num);
    
    cout << "After: " << num << endl;
    cout << "Address of num (&num): " << &num << endl;

    return 0;
}
