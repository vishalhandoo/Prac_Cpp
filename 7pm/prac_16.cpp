#include<bits/stdc++.h>
using namespace std;

vector<int> mergeSort(vector<int> arr1,vector<int>arr2){
    int size1 = arr1.size();
    int size2 = arr2.size();
    int size3 = size1+size2;

    vector<int>arr3(size3);
    int i = 0;
    int j = 0 ;
    int k=0;
    while(i<size1&&j<size2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else if(arr1[i]>arr2[j]){
            arr3[k]=arr2[j];
            k++;
            j++;
        }
        else if(arr1[i]==arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
            j++;
        }
        
    }
    while(i<size1){
        arr3[k++]=arr1[i++];
    }
    while(j<size2){
        arr3[k++]=arr2[j++];
    }

    return arr3;
}

int main(){

    vector<int>arr1={1,3,5,7,9};
    vector<int>arr2={2,4,6,8,10,11,12};

    vector<int>arr4=mergeSort(arr1,arr2);

    for(int i = 0 ; i < arr4.size() ; i++){
        cout<<arr4[i]<<" ";
    }
    return 0;
}