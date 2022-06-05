#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
    int low=0; 
    int high=n-1;
    
    for(int i=0; i<n; i++){
        while ( arr[low]==0)
            low++;
        while (arr[high]==2)
            high--;
        if (arr[i]==2 && i<high)
            swap(arr[i],arr[high]);
        if (arr[i]==0 && i>low)
            swap(arr[i],arr[low]);
    }
}
