#include<iostream>
#include<algorithm>
using namespace std;


int binarySearch(int arr[],int left, int right,int search){
    int mid;
    
    while(left <= right){
        mid = (left+right)/2;
        
        if(arr[mid] > search){
            right = mid - 1;
        }
        else if(arr[mid] < search){
            left = mid + 1;
        }
        else{
            return 1;
        }
    }
    return 0;
}

int main(){
    int N;
    
    cin >> N;
    
    int arr[100000] = {0,};
    
    for(int i=0;i<N;i++){
        int n;
        cin >> n;
        arr[i] = n;
    }
    sort(arr,arr+N);
    
    int M;
    cin >> M;
    
    int arr1[100000] = {0,};
    
    for(int i=0;i<M;i++){
        int m;
        cin >> m;
        arr1[i] = m;
    }
    
    for(int i=0;i<M;i++){
        cout << binarySearch(arr,0,N,arr1[i]) << "\n";
    }

}
