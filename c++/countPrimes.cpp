#include<iostream>
using namespace std;
#include<vector>
// int countt(int n){
//    
// }
int main()
{
    int n=10;
    
    
    vector<int> test;
    for (int i=2;i<n;i++){
        for (int j=3;j<i;j++){
            if (i%j!=0 && i!=j){
                test.push_back(i);
            }
        }
    }
    for (int j=0;j<test.size();j++){
        cout<<test[j]<<" ";
        }
    return 0;
}