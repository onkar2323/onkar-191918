#include<iostream>
#include<string>
using namespace std;
class Str{
	private:
		std::string s1;
		std::string s2;
	public:
	     void get_string(std::string a,std::string b){
	     	s1=a;
	     	s2=b;
		 }
		
		void add_string(std::string a,std::string b) 
		{ cout<<"add of first_name and last_name is  "<<a+b<<endl;
			}
		void equate_string(std::string a,std::string b){
			cout<<"check  "<<a<<"  and  "<<b<<" is equal or not"<<endl<<endl;
			if(a==b)
			{
				cout<<a<<" is equal to "<<b<<endl;
			}
			else{
				cout<<a<<" is not equal to "<<b<<endl;
			}
		}
		 void display ()
		 {	cout<<" first name is: "<<s1<<endl<<"last name is: "<<s2<<endl;
		 	
		 }		
		 
		
};
int main(){
	Str name;
	std::string st1,st2;
	cout<<"enter your first_name"<<endl;
	cin>>st1;
	cout<<"enter your last_name"<<endl;
	cin>>st2;
	
	name.get_string(st1,st2);
	cout<<"-------------------------------------------------"<<endl;
	name.add_string(st1,st2);
	cout<<"-------------------------------------------------"<<endl;
	name.equate_string(st1,st2);
	cout<<"-------------------------------------------------"<<endl;
	name.display();
}
