#include<iostream>
#include<string>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++) cin>>arr[i];
    int target;
    cin>>target;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"YES";
            break;
        }
    }

}