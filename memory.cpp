#include<iostream>
using namespace std;
int main(){
	bool firstTime = true;
	char operation;
	double num, result, memory = 0.0;
	
	while(true){
		if (firstTime){
			cout<<"Enter the first number or 'm' to recall the initial memory.."<<endl;
			cin>>operation;
			if (operation == 'm'){
				result = memory;
				firstTime = false;
			}
			else{
				cin.putback(operation);
				cin>>result;
				firstTime = false;
			}
		}
		else{
			cout<<"The current result is, "<<result<<endl;
		}
		
		cout<<"Enter Among Operations (+, -, *, /)"<<endl;
		cout<<"Enter 'q' to quit or 'r' to recall memory"<<endl;
		cout<<"Enter 'm' to store memory or 'c' to clear memory"<<endl;
		cin>>operation;
		
		if (operation == 'q'){
			break;
		}
		else if (operation == 'm'){
			memory = result;
			cout<<"Your Memory is successfully Stored"<<endl;
		}
		else if (operation == 'r'){
			result = memory;
			cout<<"Your recalled memory is, "<<result<<endl;
		}
		else if (operation == 'c'){
			memory = 0.0;
			cout<<"You cleared your memory!!"<<endl;
		}
		
		cout<<"Enter the next number.."<<endl;
		cin>>num;
		
		switch(operation){
			case '+': result += num; break;
			case '-': result -= num; break;
			case '*': result *= num; break;
			case '/':
			if (num != 0)
				result /= num;
			else
			cout<<"Error: Cannot Divide by Zero!"<<endl;
			 break;
			default:
				cout<<"Invalid operation!!"<<endl;
				cout<<"Try Again"<<endl;
		}
		
	}
	cout<<"The final result is, "<<result<<endl;
}
