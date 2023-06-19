#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"Value of a , b inside the function after swapping : "<<a<<" "<<b<<endl;

    return;
}


int main(){
    int a=10,b=20;
    swap(a,b);
    cout<<"Value of a , b inside the function after swapping : "<<a<<" "<<b<<endl;
    
    return 0;
}