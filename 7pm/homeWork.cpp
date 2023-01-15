#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int size)
{
    if (size == 0 || size == 1){
        return size;
    }
    int temp[size];
    int j = 0;
    for (int i = 0; i < size - 1; i++){
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
    }
    temp[j++] = arr[size - 1];
    for (int i = 0; i < j; i++){
        arr[i] = temp[i];
    }
    return j;
}
  

int main()
{
    
    int size ;
    cin>>size;
    int arr[size];
    for(int i=0; i < size ; i++){
        cin>>arr[i];
    }
  
    size = removeDuplicates(arr, size);
  
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
  
    return 0;
}