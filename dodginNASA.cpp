#include<iostream>
using namespace std;
int main(){

    string num1, num2;
    int a,b;
    
    //For Names
    cout<<"What's your name ?"<<endl;
    cin>>num1;
    cout<<"What's your friend name ?"<<endl;
    cin>>num2;

    //For Ages
    cout<<"What is your age ?"<<endl;
    cin>>a;
    cout<<"What is your Friend's age ?"<<endl;
    cin>>b;

    //For results
    cout<<"The age of "<<num1<<" is "<<a<<" and the age of "<<num2<<" is "<<b<<endl;

    //For age difference
    cout<<"Here is the age difference b/w you and your friend "<<a-b<<endl;


    return 0;
}