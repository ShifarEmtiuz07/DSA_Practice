#include<iostream>
using namespace std;
int main(){

int n=5,max_sum=INT_MIN;
int arr[5]={1,5,-3,6,2};
for(int st=0;st<n;st++){
        int currSum=0;
    for(int ed=st;ed<n;ed++){

            currSum+=arr[ed];
            max_sum=max(currSum,max_sum);


    }
}
cout<<"Maximun sun array sum: "<<max_sum<<endl;



}
