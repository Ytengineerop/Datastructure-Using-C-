/**
 * C program to print all unique elements in array
 */

#include <iostream>
#define MAX_SIZE 100

using namespace std;
int main()
{
    int arr[MAX_SIZE], freq[MAX_SIZE];
    int size, i, j, count;


    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
        freq[i] = -1;
    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    cout<<endl<<"Unique elements in the array are: ";
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1)
        {
            cout<<arr[i];
        }
    }

    return 0;
}
