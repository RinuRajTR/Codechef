#include <iostream>
using namespace std;

int main() {
	long int a[200000],n,t,small=-1,ssmall,p;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	    }
	    small=a[0];
	    for(int k=0;k<n;k++){
	        if(a[k]<small)
	            small=a[k];
	    }
	    p=0;
	    while(p<n){
	        if(a[p]!=small){
	            ssmall=a[p];
	            break;
	        }
	        p++;
	    }
	    for(int k=0;k<n;k++){
	        if((a[k]<ssmall)&&(a[k]!=small))
	            ssmall=a[k];
	    }
	    cout<<ssmall<<"\n";
	}
	
	return 0;
}
