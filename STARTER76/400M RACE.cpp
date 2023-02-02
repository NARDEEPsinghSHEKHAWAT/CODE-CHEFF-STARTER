#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    long long int i,j,k;
	    cin>>i>>j>>k;
	    if(i<j&&i<k){
	        cout<<"ALICE"<<endl;
	    }
	    else if(j<i&&j<k){
	        cout<<"BOB"<<endl;
	    }
	    else if(k<i && k<j){
	        cout<<"CHARLIE"<<endl;
	    }
	    
	    
	}
	return 0;
}

