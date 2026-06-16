#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key,int index){
    //base case
    if(index==n)
    return -1;

    //if element is found
    if (arr[index]==key)
    return index;

    //recursive call
    return linearsearch(arr,n,key,index+1);

}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=30;
    int index=linearsearch(arr,n,key,0);
    if(index==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at position: "<<index+1;

    return 0;
}