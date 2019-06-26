#include<iostream>

using namespace std;

int main(){
    int T;
    
    cin >> T;
    
    for(int i=0;i<T;i++){
        int a;
        int cnt = 0;
        cin >> a;
        
        int arr[11] = {0,};
        
        while(a>0){
            if(arr[a%10]==0){
                arr[a%10] = 1;
            }
            a=a/10;
        }
        
        for(int j=0;j<=10;j++){
            if(arr[j]!=0){
                
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
