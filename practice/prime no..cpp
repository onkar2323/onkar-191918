#include<iostream>
using namespace std;

int main(){
	int i,j,n=0;
	for(i=2;i<100;i++){
		
		for(j=2;j<=(i/j);j++)
			if(!(i%j))
				break;
			
			if(j>(i/j))
				cout<<i<<" is prime no."<<endl;
				n++;
			
		
	}
	cout<<"no. of prime nos.is"<<" "<<n<<endl;
	return 0;
}
