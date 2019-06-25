#include<iostream>

using namespace std;

int main(){
    int arr[1000] = {0,};
    int N,K;
    cin >> N >> K;
    
    bool isPrime = false;
    int cnt = 0;
    for(int i = 2;i<=N;i++){
        isPrime = true;
        for(int j = 2;j<i;j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        
        if(isPrime){
            for(int j=1;j<=N/i;j++){
                if(arr[j*i] != 1){
                    arr[j*i] = 1;
                    cnt++;
                    
                    
                    if(cnt == K){
                        cout << j*i << endl;
                        return 0;
                    }
                }
            }
        }
    }
    
    
    
    
    
    
}
