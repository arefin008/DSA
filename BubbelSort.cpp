
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5,7,7,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++)
    {
        for(int j=0;j< n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
               int temp = arr[j];

               arr[j] = arr[j+1];
               arr[j+1] = temp;
            }
        }
    }

    cout<< "Ascending Order: ";
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;

    cout<<"Descending Order: ";
     for(int i=n-1; i>=0; i--){
        cout<< arr[i] << " ";
    }
    cout<< endl;

    return 0;

}
