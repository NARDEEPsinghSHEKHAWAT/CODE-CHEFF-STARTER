#include <iostream>
using namespace std;
void solve(string s,int n){
    int nu_of_zero = 0;
    int nu_of_one = 0;
    for(int i=0; i<n;i++){
        if(s[i]=='0')
        {nu_of_zero++;}
        else
        {nu_of_one++;}
    }
    if(nu_of_one==0)
        cout<<0<<endl;
    else if(nu_of_zero==0)
        cout<<1<<endl;
    else if(nu_of_one >nu_of_zero)
        cout<<nu_of_zero + 1<<endl;
    else
        cout<<nu_of_one<<endl;
}

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    solve(s,n);
	}
	return 0;
}

