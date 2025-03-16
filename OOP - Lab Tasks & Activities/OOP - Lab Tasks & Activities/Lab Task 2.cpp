
#pragma region Task 1

//C++ Struct-------------------------------------------------------------------------

//#include <iostream>
//#include <string>
//using namespace std;
//struct StudentStruct {
//	string name;
//	string rollNumber;
//	float marks;
//	void displayStudentInfo()
//	{
//		cout << "Student Name: " << name << endl;
//		cout << "Roll Number: " << rollNumber << endl;
//		cout << "Marks: " << marks << endl;
//	}
//};
//int main()
//{
//	StudentStruct student1;
//	student1.name = "ABC";
//	student1.rollNumber = "SE-4370";
//	student1.marks = 80;
//	student1.displayStudentInfo();
//	return 0;
//}

//--------------------------------------------------------------------------------------

//C++ Class-----------------------------------------------------------------------------

//#include <iostream>
//#include <string>
//#include <regex>
//using namespace std;
//class StudentClass {
//private:
//	string name;
//	string rollNumber;
//	float marks;
//public:
//	void setName(string n)
//	{
//		name = n;
//	}
//	string getName()
//	{
//		return name;
//	}
//	void setRollNumber(string roll)
//	{
//		regex rollPattern("SE-\\d{4}");
//		if (regex_match(roll, rollPattern))
//		{
//			rollNumber = roll;
//		}
//		else {
//			cout << "Invalid Roll Number format! It should be in CS-XXXX format." << endl;
//		}
//	}
//	string getRollNumber()
//	{
//		return rollNumber;
//	}
//	void setMarks(float m)
//	{
//		if (m >= 0 && m <= 100)
//		{
//			marks = m;
//		}
//		else {
//			cout << "Invalid Marks! Marks should be between 0 and 100." << endl;
//		}
//	}
//	float getMarks()
//	{
//		return marks;
//	}
//	void displayStudentInfo()
//	{
//		cout << "Student Name: " << name << endl;
//		cout << "Roll Number: " << rollNumber << endl;
//		cout << "Marks: " << marks << endl;
//	}
//
//};
//int main()
//{
//	StudentClass student2;
//	student2.setName("ABC");
//	student2.setRollNumber("SE-4370");
//	student2.setMarks(80.0);
//	student2.displayStudentInfo();
//	return 0;
//}

//---------------------------------------------------------------------------------------

#pragma endregion

#pragma region Task 2

//C++ Struct-------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//struct BankAccountStruct {
//	string accountNumber;
//	float balance;
//	void deposit(float amount)
//	{
//		balance += amount;
//	}
//	void withdraw(float amount)
//	{
//		balance -= amount;
//	}
//	void displayAccountInfo()
//	{
//		cout << "Account Number: " << accountNumber << endl;
//
//		cout << "Balance: $" << balance << endl;
//	}
//};
//int main()
//{
//	BankAccountStruct account1;
//	account1.accountNumber = "1122334455";
//	account1.balance = 9000.0;
//	account1.displayAccountInfo();
//	account1.deposit(600.0);
//	account1.withdraw(900.0);
//	account1.displayAccountInfo();
//	return 0;
//}

//--------------------------------------------------------------------------------------

//C++ Class-----------------------------------------------------------------------------

//#include <iostream>
//#include <stdexcept>
//using namespace std;
//class BankAccountClass {
//private:
//	string accountNumber;
//	float balance;
//public:
//	BankAccountClass(string accNum, float initialBalance)
//	{
//		accountNumber = accNum;
//		balance = initialBalance;
//	}
//	float getBalance()
//	{
//		return balance;
//	}
//	void deposit(float amount)
//	{
//		if (amount > 0)
//		{
//			balance += amount;
//		}
//		else
//		{
//			cout << "Deposit amount must be positive!" << endl;
//		}
//	}
//	void withdraw(float amount)
//	{
//		if (amount > 0 && amount <= balance)
//		{
//			balance -= amount;
//		}
//		else if (amount > balance)
//		{
//			cout << "Insufficient funds!" << endl;
//		}
//		else {
//			cout << "Withdrawal amount must be positive!" << endl;
//		}
//	}
//	void displayAccountInfo()
//	{
//		cout << "Account Number: " << accountNumber << endl;
//		cout << "Balance: $" << balance << endl;
//	}
//};
//int main() {
//	BankAccountClass account2("1122334455", 9000.0);
//	account2.displayAccountInfo();
//	account2.deposit(600.0);
//	account2.withdraw(900.0);
//
//	account2.displayAccountInfo();
//	return 0;
//}

//---------------------------------------------------------------------------------------

#pragma endregion

#pragma region Task 3

//C++ Struct-------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//struct EmployeeStruct {
//	static int id;
//	string name;
//	float salary;
//	EmployeeStruct(string empName, float empSalary) {
//		name = empName;
//		salary = empSalary;
//		id++;
//	}
//	void displayEmployeeInfo()
//	{
//		cout << "Employee ID: " << id << endl;
//		cout << "Name: " << name << endl;
//		cout << "Salary: $" << salary << endl;
//	}
//};
//
//int EmployeeStruct::id = 1000;
//int main()
//{
//	EmployeeStruct emp1("ABC", 100000);
//	emp1.displayEmployeeInfo();
//	EmployeeStruct emp2("XYZ", 150000);
//	emp2.displayEmployeeInfo();
//	return 0;
//}

//--------------------------------------------------------------------------------------

//C++ Class-----------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//class EmployeeClass {
//private:
//	string name;
//	float salary;
//
//public:
//	static int id;
//	EmployeeClass(string empName, float empSalary)
//	{
//		name = empName;
//		salary = empSalary;
//		id++;
//	}
//	void displayEmployeeInfo()
//	{
//		cout << "Employee ID: " << id << endl;
//		cout << "Name: " << name << endl;
//		cout << "Salary: $" << salary << endl;
//	}
//};
//int EmployeeClass::id = 1000;
//int main()
//{
//	EmployeeClass emp1("ABC", 100000);
//	emp1.displayEmployeeInfo();
//	EmployeeClass emp2("XYZ", 150000);
//	emp2.displayEmployeeInfo();
//	return 0;
//}

#pragma endregion

#pragma region Task 4

//C++ Struct-------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//struct RectangleStruct {
//	float length;
//	float width;
//	float area()
//	{
//		return length * width;
//	}
//};
//int main() {
//	RectangleStruct rect1;
//	rect1.length = 30.0;
//	rect1.width = 15.0;
//	cout << "Area of Rectangle: " << rect1.area() << endl;
//	rect1.length = 15.0;
//	rect1.width = 8.0;
//	cout << "Updated Area of Rectangle: " << rect1.area() << endl;
//	return 0;
//}

//--------------------------------------------------------------------------------------

//C++ Class-----------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//class RectangleClass {
//private:
//	float length;
//	float width;
//public:
//	float getLength()
//	{
//		return length;
//	}
//	void setLength(float len)
//	{
//		if (len > 0)
//		{
//			length = len;
//		}
//		else
//		{
//			cout << "Length must be positive!" << endl;
//		}
//	}
//	float getWidth()
//	{
//		return width;
//	}
//	void setWidth(float w)
//	{
//		if (w > 0)
//		{
//			width = w;
//		}
//		else
//		{
//			cout << "Width must be positive!" << endl;
//		}
//	}
//	float area()
//	{
//		return length * width;
//	}
//};
//int main()
//{
//	RectangleClass rect2;
//	rect2.setLength(30.0);
//	rect2.setWidth(15.0);
//	cout << "Area of Rectangle: " << rect2.area() << endl;
//
//	rect2.setLength(-5.0);
//	rect2.setWidth(-3.0);
//	cout << "Updated Area of Rectangle: " << rect2.area() << endl;
//	return 0;
//}

#pragma endregion
