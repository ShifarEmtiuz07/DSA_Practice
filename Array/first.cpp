#include <iostream>
using namespace std;
int main(){
int smallest=INT_MAX;
int largest=INT_MIN;
int minIndex=0,maxIndex=0;
int num[]={12,46,24,80,345};
int size=sizeof(num)/sizeof(int);
for(int i =0;i<size;i++){

if(num[i]<smallest){
    smallest=num[i];
    if(smallest==num[i]){
       minIndex=i;
    }
}
if(num[i]>largest){
    largest=num[i];
    if( largest==num[i]){
        maxIndex=i;
    }
}
}
cout<<"smallest = "<<smallest<<endl;
cout<<"largest = "<<largest<<endl;
cout<<"minIndex = "<<minIndex<<endl;
cout<<"maxIndex = "<<maxIndex<<endl;
}
