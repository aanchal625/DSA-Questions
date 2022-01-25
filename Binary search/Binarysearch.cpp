// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int binarysearch(int arr[], int size, int x){
        // code here
    int start=0,end=size-1;
    int mid;
    while(start<=end){
        mid =start+(end-start)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
    }
    int binarysearchrev(int arr[], int size, int x){
    // code here
    int start=0,end=size-1;
    int mid;
    while(start<=end){
        mid =start+(end-start)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
    }
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        int found = ob.binarysearchrev(arr,N,key);
        cout<<found<<endl;
    }
}

  // } Driver Code Ends