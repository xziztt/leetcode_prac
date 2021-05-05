#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}



void quicksort(int arr[],int low,int high){

  if(low < high){
    int pi = partition(arr,low,high);
  }
  quicksort(arr,low,pi-1);
  quicksort(arr,pi+1,high);

}

void partition(int arr[],int low,int high){
  int pivot = arr[high];
  int i = low - 1;
  for(int j = low;j <= high;j++){
    if(arr[j] < pivot){
      i++;
      swap(arr[i],arr[j]);
    }

  }
  swap(arr[high],arr[i+1]);
  return i+1;

}

int main(){


}
