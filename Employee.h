//employee record system module

//Employee.h

namespace Records{
	
	const int defaultsal=30000;
	
	class Employee{
		
		public:
		
		Employee();
		
		void promote(int incrsal=1000);//default value assigned
		
		void demote(int dcrsal=1000);
		
		void hire();
		
		void fire();
		
		void display();
		
		//Accessors and setters
		
		void setFirstName(std::string inFirstName);
		
		std::string getFirstName();
		
		void setLastName(std::string inLastName);
		
		std::string getLastName();
		
		void setEmployeeNumber(int inEmployeeNumber);
		
		int getEmployeeNumber();
		
		void setSalary(int inSalary);
		
		int getSalary();
		
		bool getIsHired();
		
		private:
			
			std::string mFirstName;
            
			std::string mLastName;
			
			int mEmployeeNumber;
			
			int mSalary;
			
			bool fHired;		
	};
	
	
}
