#include<iostream>
using namespace std;
int main(){
    // Question No.01
    // int i = 0;
    // while(i<=10){
    //     cout<<i<<endl;
    //     i=i+1;
    // }

    // Question no.02
    // int i = 1;
    // int total_sum = 0;
    // while(i<=5){
    //     cout<<i<<endl;
    //     total_sum+=i;
    //     i++;
    // }
    // cout<<"Total Sum: "<<total_sum<<endl;

    // Question No.03
    int i = 1;
    int num;
    cout<<"Enter a Number: "<<endl;
    cin>>num;
    cout<<"Table of "<<num<<" is:"<<endl;
    for(int i =0;i<=10;i++){
        cout<<num<<" * "<<i<<"= "<<num*i<<endl;
    }
    return 0;
}