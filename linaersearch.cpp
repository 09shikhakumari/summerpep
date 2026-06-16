//program in c++ for linear search
#include<iostream>
using namespace std;

int main()
{

    int a[5] = {10, 20, 30, 40, 50};
    int key,i;
    cout<<"Enter the number to search:";
    cin>>key;
    for(i=0;i<5;i++)
    {

        if(a[i]==key)
        {
            cout<<"Element found at postions :"<<i+1;
       break;
        }
    }
        return 0;
    }
