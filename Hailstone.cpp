#include <bits/stdc++.h>
using namespace std;

int cnt=0;

void hailstone(int n, int limit){
    if(cnt==limit){
        if(n%2==0){
            cout<<n<<" "<<n/2<<endl;
        }else{
            cout<<n<<" "<<3*n+1<<endl;
        }
        return;
    }
    if(n==2){
        cout<<2<<" "<<1;
        return;
    }
    
    cout<<n<<" ";
    cnt++;
    if(n%2==0){
        cout<<n/2<<endl;
        hailstone(n/2,limit);
    }else{
        cout<<3*n+1<<endl;
        hailstone(3*n+1, limit);
    }
}

int main(){
    int num,limit;
    cout<<"Enter the number and the limit : ";
    cin>>num>>limit;

    hailstone(num,limit);
}
