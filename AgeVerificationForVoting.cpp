#include<iostream>
using namespace std;
int main()
{
   int current_Age, eligible_Age = 18;
   
   cout<<"enter your current age"<<endl;
   cin>>current_Age;
   if(current_Age >= 18){
       cout<<"you are elligible to vote"<<endl;
   }else{
     eligible_Age = eligible_Age - current_Age;
      cout<<"you are not eligible to vote "<<endl<<eligible_Age<<" years are left for you to be elligible to vote"<<endl;
   }
   
    return 0;
}