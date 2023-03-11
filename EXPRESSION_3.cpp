#include <iostream>
using namespace std;

int main() {
	long int t,n1,n2,n3;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n1>>n2>>n3;
	if((n1+n2)==n3)
	    cout<<"YES";
	else if((n1+n3)==n2)
	    cout<<"YES";
	else if((n2+n3)==n1)
	    cout<<"YES";
    else
        cout<<"NO";
    cout<<"\n";
	}
	return 0;
}
