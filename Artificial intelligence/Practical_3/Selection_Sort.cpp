#include <iostream>
using namespace std;
void Selectionsort(int arr[], int n)
{
    int i, j, min;
    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min])
            {
                min=j;
            }  
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int n,i;
    cout<<"\nEnter the number of elements: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements: "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    Selectionsort(arr, n);
    cout<<"\nAscending order sorted elements: "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    } 
    return 0;
}
