//Employee.cpp

#include <iostream>

#include "Employee.h"

using namespace std;

namespace Records{
	
	Employee::Employee(){
		mFirstName = "";
		mLastName = "";
		mEmployeeNumber = -1;
		mSalary = defaultsal;
		fHired = false;
	}
	
  void	Employee::promote(int incrsal){
  	setSalary(getSalary() + incrsal);
  }
	void Employee::demote(int dcrsal){
		setSalary(getSalary()-dcrsal);
	}
	void Employee::hire(){
		fHired=true;
	}
	void Employee::fire(){
		fHired=false;
	}
	void Employee::display(){
		
		cout<<"Employee:"<<getFirstName()<<","<<getLastName()<<endl;
		cout<<"-----------------------"<<endl;
		cout<<(fHired?"Current Employee":"Former Employee")<<endl;
        cout<<"Employee Number :"<<getEmployeeNumber()<<endl;
		cout<<"Salary :"<<getSalary()<<endl;		
		cout<<endl;
	}
	
	void Employee::setFirstName(string inFirstName)
	{
		mFirstName=inFirstName;
	}
	string Employee::getFirstName(){
		return mFirstName;
	}
	void Employee::setLastName(string inLastName){
		mLastName=inLastName;
	}
	string Employee::getLastName(){
		return mLastName;
	}
	void Employee::setEmployeeNumber(int inEmployeeNumber){
		mEmployeeNumber=inEmployeeNumber;
	}
	int Employee::getEmployeeNumber(){
		return mEmployeeNumber;
	}
	void Employee::setSalary(int inSalary){
		mSalary=inSalary;
	}
	int Employee::getSalary(){
		return mSalary;
	}
	bool Employee::getIsHired(){
		return fHired;
	}
}
