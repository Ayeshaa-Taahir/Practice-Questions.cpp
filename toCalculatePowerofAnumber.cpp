#include<iostream>
using namespace std;
int main()
{
    int base, exponent, result = 1 , i;
    
    cout<<"Enter a base :"<<endl;
    cin>>base;
    cout<<"Enter an exponent :"<<endl;
    cin>>exponent;
    
    for(i=0;i<exponent;i++){
        result *= base;
    } 
     cout << base << " raised to the power of " << exponent <<" is: " << result << endl;
    return 0;
}
    