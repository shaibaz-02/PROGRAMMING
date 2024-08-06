#include <iostream>
using namespace std;
int main(){
	int n,k,l,c,d,p,nl,np,a,b,cc;
	while(cin>>n){
		cin>>k>>l>>c>>d>>p>>nl>>np;
		a=(k*l)/nl;
		b=(c*d);
		cc=p/np;
		cout<<(min(min(a,b),cc))/n;
	}
	return 0;
}