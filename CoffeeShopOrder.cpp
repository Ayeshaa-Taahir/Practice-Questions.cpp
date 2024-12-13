#include<iostream>
using namespace std;
int main()
{
    int menu,total_Cost;
    
    cout<<"1. small coffee $5"<<endl;
    cout<<"2. medium coffee $7"<<endl;
    cout<<"3. large coffee $10"<<endl;
    cout<<"enter your coffee type"<<endl;
    cin>>menu;
    
    switch(menu){
        case 1:
        total_Cost = 5;
        break;
        cout<<"your total cost is $"<<total_Cost<<endl;
        case 2:
        total_Cost = 7;
        break;
        cout<<"your total cost is $"<<total_Cost<<endl;
        case 3 :
        total_Cost =10;
        cout<<"your total cost is $"<<total_Cost<<endl;
        break;
        default :
        cout<<"invalid choice! Please enter a valid choice"<<endl;
    }
    return 0;
}