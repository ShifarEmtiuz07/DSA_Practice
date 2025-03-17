#include<iostream>
using namespace std;

void swapMaxMin(int arr[],int sz){

int smallest=INT_MAX;
int leargest=INT_MIN;
int smallIndex,largestIndex;

for (int i=0;i<sz;i++){

    smallest=min(arr[i],smallest);
    if(smallest==arr[i]){
       smallIndex=i;
    }
    leargest=max(arr[i],leargest);
     if(leargest==arr[i]){
       largestIndex=i;
    }
}

swap(arr[smallIndex],arr[largestIndex]);



}

int main(){
int arr[]={4,6,8,5};
int sz=4;
swapMaxMin(arr,sz);
 for (int i=0;i<sz;i++){
        cout<<arr[i];
    }


}
