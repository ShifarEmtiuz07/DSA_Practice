#include <iostream>
using namespace std;

void reserve(int arr[],int size){
    int start=0,end=size-1;

    for(int i=0;start<end;i++){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}

int main()
{
    int size=0;
    cout<<"enter size: "<<endl;
      cin>>size;
    int arr[size];


    cout<<"enter the array:"<<endl;
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    reserve(arr,size);
     for (int i=0;i<size;i++){
        cout<<arr[i];
    }

}
