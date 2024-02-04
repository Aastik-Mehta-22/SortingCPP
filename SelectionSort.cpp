#include<iostream>
using namespace std;
void selection(int* arr,int n){
    for (int i = 0; i < n-1; i++)
    {
        int minindex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minindex])
            {
                minindex=j;
            }
            
        }
        swap(arr[minindex],arr[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    
    
    
}
int main()
{
    int n;
    cout<<"Enter the length of array : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Your "<<i+1<<" value of array :";
        cin>>arr[i]; 
    }
    cout << "Sorted array is : "; 
    selection(arr,n);
    
    

}
