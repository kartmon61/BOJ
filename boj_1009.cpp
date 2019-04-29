//
//  main.cpp
//  BOJ1009
//
//  Created by 이진호 on 29/04/2019.
//  Copyright © 2019 이진호. All rights reserved.
//

#include<iostream>

using namespace std;

int main(){
    
    int T;
    cin >> T;
    
    for(int i=0;i<T;i++){
        
        int a,b;
        cin >> a>> b;
        
        int result = a;
        
        for(int i=0;i<b-1;i++){
            a = result*a%10;
        }
        
        if(a == 0) cout << 10 << "\n";
        else cout << a << "\n";
    }
}

