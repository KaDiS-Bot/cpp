#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,54,49,60,100};
    int n=5;
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for (;j>=0;j--){
            if (arr[j]>temp){
                arr[j+1]=arr[j];

            }
            else{
                break;
            }
        arr[j+1]=temp;
        }
    }
    for (int t=0;t<5;t++){cout<<arr[t]<<endl;}
    
    return 0;
}