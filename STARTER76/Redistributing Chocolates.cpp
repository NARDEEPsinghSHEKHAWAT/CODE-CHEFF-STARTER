#include <iostream>
using namespace std;
void solve(int i,int j, int k){
    int sum= i+j+k;
    int divisor= sum/3;
    if(divisor !=1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}


int main() {
    int a;
    cin>>a;
    while(a--){
        int i,j,k;
        cin>>i>>j>>k;
        solve(i,j,k);
    }
	// your code goes here
	return 0;
}

