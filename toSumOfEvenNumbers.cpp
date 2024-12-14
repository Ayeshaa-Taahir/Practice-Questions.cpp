#include<iostream>
using namespace std;
int main()
{
    int i,no,sum;
     cout<<"enter a number to get the sum of even no"<<endl;
     cin>>no;
    for(i=1;i<=no;i++){
        if(i%2==0){
        sum = sum += i;
        }
      
    }cout<<sum<<" is the sum of even numbers";
    
    return 0;
}