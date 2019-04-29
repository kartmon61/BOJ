//
//  main.cpp
//  algorithm
//
//  Created by 이진호 on 29/04/2019.
//  Copyright © 2019 이진호. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // insert code here...
    int N=0;
    int a[100]={0,};
    int b[100]={0,};
    int result=0;
    cin >> N;
    //int result[100]={0,};
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    for(int i=0;i<N;i++){
        cin >> b[i];
    }
    
    
    int loc=0;
    
    sort(a,a+N);
    int size = N;
    while(N>0){
        int min=100;
        for(int i=0;i<size;i++){
            if(b[i]<=min){
                min = b[i];
                loc =i;
            }
            
        }
        
        b[loc] = 100;
        
        
        result += min*a[N-1];
        
        N--;
    }
    
    
    cout << result << endl;
    return 0;
}
