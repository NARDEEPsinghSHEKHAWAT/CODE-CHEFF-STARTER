#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	int n,i,j;
	cin>>n>>i>>j;
	int nu_of_page = i*j;
	if(nu_of_page >= n)
	{cout<<"YES"<<endl;
	}else
	{cout<<"NO"<<endl;
	}   
	}
	return 0;
}
