#include<iostream>
using namespace std;
int search(int n,int i);
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int start,end,mid;
    start=0;
    end=n;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<mid+1;
            break;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    int a=2 ,b=5;
    cout<<search(a,b);


    return 0;
}
int search(int n,int i){
    int sum=n+i;
    return sum;
}