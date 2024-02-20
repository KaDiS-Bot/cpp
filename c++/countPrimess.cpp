class Solution {
private:
bool isPrime(int n){
    // int n=10;
    bool isPrimee=true;
    if (n<=1){
        isPrimee=false;
    }
    
    for (int i=2;i<n;i++){
        if (n%i==0){
            isPrimee=false;
        }
    }
    return isPrimee;
}

public:
    int countPrimes(int n) {
        int count=0;

    for(int i=2;i<n;i++){
        if(isPrime(i)){
            count++;
        }
        
    }
    return count;
    }
};