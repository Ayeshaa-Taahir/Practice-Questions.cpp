#include<iostream>
using namespace std;
int main()
{
    int no, i = 61;
     cout<<"** Number guessing game ** "<<endl;
    while(true){
    
    cout<<" Guess a no :"<<endl;
    cin>>no;
    
     if(no==i){
       cout<<"congratulations,you guessed a right number"<<endl;
          break;  
        }else{
            cout<<"you guessed it wrong"<<endl;
        }
    
    }
    return 0;
} 