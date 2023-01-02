#include<iostream>
using namespace std;
class bank{
	string name;
	double amount;
public:
	bank(string n, double a){
	name=n;
	amount=a;
	}
	void displayinfo();
	double withdraw(double);
    double deposit(double);
};
void bank::displayinfo(){
	cout<<"name= "<<name<<endl;
	cout<<"amount= "<<amount<<endl;
}
double bank::withdraw(double amt){
	if(amt>0&&amount>=amt){
		amount=amount-amt;
		cout<<"remaining amt:"<<amount<<endl;
	cout<<"withdrawn amt: "<<amt<<endl;
	}
	else{
		cout<<"insufficent amount!!!"<<endl;
	}
return 0;
}
double bank::deposit(double cash){
	if(cash>0){
		cout<<"amount you deposit: "<<cash<<endl;
		amount =amount+cash;
		cout<<"total amount you have in bank:"<<amount<<endl;
	}
	else {
		cout<<"this amount is invalid!!"<<endl;
	}
	return 0;
}
void info(){
	cout<<"1.display info"<<endl;
	cout<<"2.Withdraw amount"<<endl;
	cout<<"3.deposit amount"<<endl;
	cout<<"0.exit"<<endl;
}
int main(){
	bank b("ram",10000);
	info();
	int opt;
	int amt;
	while(opt!=0){
			cout<<"enter your choice<<"<<endl;
	         cin>>opt;
   switch(opt){
		case 1:
			b.displayinfo();
			break;
		case 2:
			cout<<"enter your withdraw amt:"<<endl;
			cin >>amt;
			b.withdraw(amt);
			break;
		case 3:
			cout<<"enter your deposit amt:"<<endl;
			cin >>amt;
			b.deposit(amt);
			break;
		default:
			info();
	}
}
return 0;
}
