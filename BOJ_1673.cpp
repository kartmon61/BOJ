#include<iostream>

using namespace std;

int main(){
    int n;
    int k;
    
    while(cin >> n >> k){
        int coupon = n;
        int chance = n;
        int cnt = coupon;
        while(chance >= k){
            chance -= k;
            chance++;
            cnt++;
        }
        cout << cnt << "\n";
    }
}
