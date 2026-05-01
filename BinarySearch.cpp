#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&arr,int x){
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x)
        return mid;
        if(arr[mid]<x)
        low=mid+1;
        else 
        high=mid-1;
    }
    return -1;
}
int main(){
vector<int>arr={2,3,6,7,4,9,10};
int x=10;
int result=binarySearch(arr,x);
if(result==-1)
cout<<"not present";
else
cout<<"present at index"<<result;
return 0;
}
