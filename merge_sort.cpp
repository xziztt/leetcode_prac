#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&nums,int l,int mid,int r){
  int n1 = mid - l + 1;
  int n2 = r - mid;

  vector<int>left(n1);
  vector<int>right(n2);
  for(int i = 0;i < n1;i++){
    left[i] = nums[l+i];
  }
  for(int j = 0;j < n2;j++){
    right[j] = nums[mid+j+1];
  }
int i = 0;
int j = 0;
int k = l;
while(i < n1 && j < n2){
  if(left[i] < right[j]){
    nums[k] = left[i];
    i++;
  }else{
    nums[k] = right[j];
    j++;
  }
  k++;
}

while(i < n1){
  nums[k++] = left[i++];
}
while(j < n2){
  nums[k++] = right[j++];
}
}


void mergeSort(vector<int>&nums,int l,int r){

  if(l >= r){
    return;
  }
  int mid = l + (r-l)/2;
  mergeSort(nums,l,mid);
  mergeSort(nums,mid+1,r);

  merge(nums,l,mid,r);
}


int main()
{
    vector<int>arr = { 12, 11, 13, 5, 6, 7 };
    int arr_size = arr.size();

    cout << "Given array is \n";
    for(int i = 0;i < arr_size;i++){
      cout<<arr[i]<<" ";
    }

    mergeSort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    for(int i = 0;i < arr_size;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}
