//selection sort
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the count of number "<<endl;
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter the number for sorting "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {   
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<endl<<"Sorted array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
