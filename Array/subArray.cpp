
#include <iostream>
using namespace std;
int main (){

int n=5;
int arr[5]={1,2,3,4,5};

for (int st=0;st<n;st++){
    for(int ed=st;ed<n;ed++){
        for(int i=st;i<=ed;i++){
            cout<<arr[i];
        }
        cout<<" ";
    }
    cout<<endl;
}


}
