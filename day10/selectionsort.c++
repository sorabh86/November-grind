//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
    }
     // min element find kro for the unsorted arrray part and swap with the ith elememt
     // initially sorted arrray =0 and unsorted start from 1
     // when we find a min ellement from 1to end we swap with 0th index and then i  moves to 1 and unsorted array becomes from 2 to end
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=0;i<n-1;i++){
           int min_ind=i;
           for(int j=i+1;j<n;j++){
               if(arr[j]<arr[min_ind]){
                   min_ind=j;
               }
           }
           int temp=arr[min_ind];
           arr[min_ind]=arr[i];
           arr[i]=temp;
       }
    }
};

//{ Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends