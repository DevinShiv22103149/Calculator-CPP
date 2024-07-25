#include<iostream>
#include<conio.h>
using namespace std;

int main()
{	 int a , b ;
	 char op;
	 cout<<"Enter Values "<<endl;
	 cin>>a>>b;
	 cout<<"Enter Operator"<<endl;
	 cin>>op;
	 switch(op)
	 {
	 	case '+':
	 		cout<<"Sum is "<<a+b;
	 		break;
	 	case '-':
		 	cout<<"Difference is "<<a-b;
		 	break;
		case '*':
			cout<<"Multiplication is "<<a*b;
			break;
		case '/':
			cout<<"Devision is"<<a/b;
	 	default :
	 		cout<<"INVALID OPERATOR ";
	 		exit(0);
	 }
	getch();
	return 0;	 
}
