//exception.cpp

#include <iostream>

#include <stdexcept>

using namespace std;
double divideby(double num,double den);
int main()
{
	
	try{
		cout<<divideby(2.5,0.5)<<endl;
		cout<<divideby(2.3,0)<<endl;
	}
	catch(std::exception exception)
	{
		cout<<"Error bc 0 se divide mat kar gawaar"<<endl;
	}
	
}
double divideby(double num,double den){
	
	if(den!=0)
	{
		return (num/den);
		}
	
	else
     throw std::exception();     	
	
}
