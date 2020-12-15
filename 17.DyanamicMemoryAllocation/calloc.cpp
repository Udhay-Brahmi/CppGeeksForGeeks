#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // This pointer will hold the
    // base address of the block created
    int *ptr;
    int n, i;

    // Get the number of elements for the array
    n = 5;
    cout << "Enter number of Elements: " << n << endl;

    // Dynamically allocate memory using calloc()
    ptr = (int *)calloc(n, sizeof(int));

    // Check if the memory has been successfully
    // allocated by calloc or not
    if (ptr == NULL)
    {
        cout << "Memory not allocated" << endl;
        exit(0);
    }
    else
    {

        //Memory has been successfully allocated
        cout << "Memory successfully allocated using malloc" << endl;
        //Get the element of the array
        for (int i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
        //print the elements of the arrya
        cout << "The elements of the array are: ";
        for (int i = 0; i < n; i++)
        {
            cout << ptr[i] << " ";
        }
    }
    return 0;
}
