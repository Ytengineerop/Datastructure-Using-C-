/*
 * C program to delete an element from array at specified position
 */

#include <iostream>
#define MAX_SIZE 100

using namespace std;
int main()
{
    int arr[MAX_SIZE];
    int i, size, pos;

    cout<<"Enter size of the array : "<<endl;
    cin>>size;
	cout<<"Enter elements in array : "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element position to delete : "<<endl;
    cin>>pos;

    if(pos < 0 || pos > size)
    {
        cout<<"Invalid position! Please enter position between 1 to "<<size;
    }
    else
    {

        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }


        size--;

        cout<<endl<<"Elements of array after delete are : "<<endl;
        for(i=0; i<size; i++)
        {
            cout<<"  "<<arr[i];
        }
    }

    return 0;
}
