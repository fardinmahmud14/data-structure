#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int key,count=1;
    cin>>key;
    int start,end,mid;
    start=0;
    end=n;
    while(start<=end){
        mid=(start+end)/2;
        cout<<"iteration no "<<count<<" "<<"mid is "<<arr[mid];
        cout<<endl;
        if(arr[mid]==key){
            cout<<mid;
            break;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        count++;
    }
    if(start>end){

        cout<<"not found";
    }
    


    return 0;
}
