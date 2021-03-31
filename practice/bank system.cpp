#include<iostream>
#include<math.h>
using namespace std;

class account{
	public:
		account(){
			cout<<"Enter Account Holders name:- \t"<<endl;
			cin.getline(name,40);
			cout<<"Enter Account no.:- \t"<<endl;
			cin>>acc_no;
			cout<<"Enter Opening balance:- \t"<<endl;
			cin>>bal;
		}
		void deposit(int amt){
			getbal();
			bal+=amt;
			setbal(bal);
			cout<<"Deposit made successfully."<<endl;
			cout<<"Balance after Deposit is:-\t"<<bal<<endl;
		}
		void withdraw(int amt){
			if(bal>=amt){
				getbal();
				bal-=amt;
				setbal(bal);
				cout<<"Withdraw made successfully."<<endl;
			cout<<"Balance after Withdraw is:-\t"<<bal<<endl;
			}else{
				cout<<"Insufficient balance."<<endl;
				cout<<"Available Balance is:- "<<bal<<endl;
			}
		}
		void display(){
			cout<<"---Account Details---"<< endl;
			cout<<"Name of the Account Holder is \t"<<name<<endl;
			cout<<"Account no. is \t"<<acc_no<<endl;
			cout<<"Current Balance is \t"<<bal<<endl;
		}
		void Interest(float t,int r){
			double CI;
			cout<<"Compound interest is:- \t"<<endl;
			CI = bal*pow(1+(r/100),t);
			cout<<"CI = \t"<<CI<<endl;
			
		}
		int getbal(){
			return bal;
		}
		void setbal(int b){
			bal = b;
		}
	private:
		int acc_no, bal;
		char name[40];
};
int main(){
	account acc1;
	int amount, choice, rate;
	float time;
	do{
		cout<<"---Main Menu---"<<endl;
		cout<<"1: Deposit money."<<endl;
		cout<<"2: Display Account Details."<<endl;
		cout<<"3: Withdraw money."<<endl;
		cout<<"4: Calculate Interest."<<endl;
		cout<<"5: Quit."<<endl;
		cout<<"Enter YOur Choice"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter the amount you want to deposit"<<endl;
				cin>>amount;
				acc1.deposit(amount);
				break;
			case 2:
				acc1.display();
				break;
			case 3:
				cout<<"Enter the amount you want to Withdraw"<<endl;
				cin>>amount;
				acc1.withdraw(amount);
				break;
			case 4:
				
				cout<<"Enter the time(in years):- "<<endl;
				cin>>time;
				cout<<"Enter the rate(in percentage):-"<<endl;
				cin>>rate;
				acc1.Interest(time,rate);
				break;
			case 5:
				exit(0);
				break;	
		}
	}while(1);
	return 0;
}
