
#pragma region Example 4.1

//#include <iostream>
//#include <conio.h>
//using namespace std;
//
//class BaseClass {
//	int num1;
//
//public:
//
//	void setInt(int n); // function protoypes
//	int getInt();
//};
//
//class DerivedClass : public BaseClass {
//	int num2;
//
//public:
//
//	void setJ(int n);
//	int mu1();
//};
//
//void BaseClass::setInt(int n) {
//
//	num1 = n;
//};
//
//int BaseClass::getInt() {
//
//	return num1;
//};
//
//void DerivedClass::setJ(int n) {
//
//	num2 = n;
//};
//
//int DerivedClass::mu1() {
//
//	cout << "Result = ";
//
//	return (num2 * getInt());
//};
//
//int main() {
//
//	DerivedClass obj;
//
//	obj.setInt(10);
//	obj.setJ(4);
//
//	cout << obj.mu1() << endl;
//
//	return 0;
//};

#pragma endregion

#pragma region Example 4.2

//#include <iostream>
//using namespace std;
//
//class Counter {
//
//protected:
//	unsigned int count;
//
//public:
//	Counter() : count(0)
//	{
//
//	}
//
//	Counter(int c) : count(c)
//	{
//
//	}
//
//	unsigned int get_count() const { return count; }
//
//	Counter operator++() {
//		return Counter(++count);
//	}
//};
//
//class CountDn : public Counter {
//
//public:
//	Counter operator--() {
//		return Counter(--count);
//	};
//};
//
//int main() {
//	CountDn c1;
//	cout << "\nc1 = " << c1.get_count();
//	++c1; ++c1; ++c1;
//	cout << "\nc1 = " << c1.get_count();
//	--c1; --c1;
//	cout << "\nc1 = " << c1.get_count() << endl;
//
//	return 0;
//};

#pragma endregion

#pragma region Example 4.3

//#include <iostream>
//#include <conio.h>
//using namespace std;
//
//class Stack {
//
//protected:
//	enum { MAX = 3 };
//	int st[MAX];
//	int top;
//
//public:
//	Stack() {
//		top = -1;
//	}
//
//	void push(int var) {
//		st[++top] = var;
//	}
//
//	int pop() {
//		return st[top--];
//	}
//};
//
//class Stack2 : public Stack {
//
//public:
//	void push(int var) {
//
//		if (top >= MAX - 1) {
//			cout << "\nError: Stack is full";
//			return;
//		}
//
//		Stack::push(var);
//	}
//	int pop() {
//
//		if (top < 0) {
//			cout << "\nError: Stack is empty";
//			return 0;
//		}
//
//		return Stack::pop();
//	}
//};
//
//int main() {
//	Stack2 s1;
//	s1.push(11);
//	s1.push(22);
//	s1.push(33);
//	s1.push(44);
//	cout << "\n1: " << s1.pop();
//	cout << "\n2: " << s1.pop();
//	cout << "\n3: " << s1.pop();
//	cout << "\n4: " << s1.pop();
//
//	return 0;
//};

#pragma endregion

#pragma region Task 1

//#include <iostream>
//using namespace std;
//
//class Publication {
//
//protected:
//	string title;
//	float price;
//
//public:
//	void getData() {
//		cout << "Enter title: " << endl;
//		cin >> title;
//		cout << "Enter price: " << endl;
//		cin >> price;
//	}
//
//	void putData() {
//		cout << "Title: " << title << endl;
//		cout << "Price: " << price << endl;
//	}
//};
//
//class Book : public Publication {
//
//protected:
//	int pageCount;
//
//public:
//	void getData() {
//
//		Publication::getData();
//		cout << "Enter page count: " << endl;
//		cin >> pageCount;
//	}
//
//	void putData() {
//
//		Publication::putData();
//		cout << "Page count: " << pageCount << endl;
//	}
//};
//
//class Tape : public Publication {
//private:
//	float playingTime;
//
//public:
//	void getData() {
//
//		Publication::getData();
//		cout << "Enter playing time: " << endl;
//		cin >> playingTime;
//	}
//	void putData() {
//
//		Publication::putData();
//		cout << "Playing time: " << playingTime << endl;
//	}
//};
//
//int main() {
//	Book b1;
//	Tape t1;
//
//	b1.getData();
//	b1.putData();
//
//	t1.getData();
//	t1.putData();
//
//	return 0;
//}

#pragma endregion

#pragma region Task 2

//#include <iostream>
//using namespace std;
//
//class Person {
//protected:
//	int id;
//	string name, address;
//
//public:
//	Person() {}
//
//	void input() {
//		cout << "Enter ID: ";
//		cin >> id;
//		cout << "Enter Name: ";
//		cin >> name;
//		cout << "Enter Address: ";
//		cin >> address;
//	}
//
//	void display() {
//		cout << "ID: " << id << endl;
//		cout << "Name: " << name << endl;
//		cout << "Address: " << address << endl;
//	}
//};
//
//class Student : public Person {
//protected:
//	int rollNumber;
//	float marks;
//
//public:
//	void input() {
//		Person::input();
//		cout << "Enter Roll Number: ";
//		cin >> rollNumber;
//		cout << "Enter Marks: ";
//		cin >> marks;
//	}
//
//	void display() {
//		Person::display();
//		cout << "Roll Number: " << rollNumber << endl;
//		cout << "Marks: " << marks << endl;
//	}
//};
//
//int main() {
//	Student s;
//	cout << "Enter Student Details:\n";
//	s.input();
//
//	cout << "\nStudent Information:\n";
//	s.display();
//
//	return 0;
//}


#pragma endregion

#pragma region Task 3

//#include <iostream>
//using namespace std;
//
//class Computer {
//protected:
//	int wordSize, memorySize, storageSize, speed;
//
//public:
//	Computer() {}
//
//	void input() {
//		cout << "Enter Word Size (bits): ";
//		cin >> wordSize;
//		cout << "Enter Memory Size (MB): ";
//		cin >> memorySize;
//		cout << "Enter Storage Size (MB): ";
//		cin >> storageSize;
//		cout << "Enter Speed (MHz): ";
//		cin >> speed;
//	}
//
//	void display() {
//		cout << "Word Size: " << wordSize << " bits" << endl;
//		cout << "Memory Size: " << memorySize << " MB" << endl;
//		cout << "Storage Size: " << storageSize << " MB" << endl;
//		cout << "Speed: " << speed << " MHz" << endl;
//	}
//};
//
//class Laptop : public Computer {
//protected:
//	float length, width, height, weight;
//
//public:
//	void input() {
//		Computer::input();
//		cout << "Enter Length (cm): ";
//		cin >> length;
//		cout << "Enter Width (cm): ";
//		cin >> width;
//		cout << "Enter Height (cm): ";
//		cin >> height;
//		cout << "Enter Weight (kg): ";
//		cin >> weight;
//	}
//
//	void display() {
//		Computer::display();
//		cout << "Length: " << length << " cm" << endl;
//		cout << "Width: " << width << " cm" << endl;
//		cout << "Height: " << height << " cm" << endl;
//		cout << "Weight: " << weight << " kg" << endl;
//	}
//};
//
//int main() {
//	Laptop l;
//	cout << "Enter Laptop Details:\n";
//	l.input();
//
//	cout << "\nLaptop Specifications:\n";
//	l.display();
//
//	return 0;
//}

#pragma endregion

#pragma region Task 1(2)

//#include <iostream>
//using namespace std;
//
//class Student {
//protected:
//    int rollno;
//    string name;
//    string Class;
//
//public:
//    void getData() {
//        cout << "Enter Roll No: ";
//        cin >> rollno;
//        cout << "Enter Name: ";
//        cin >> name;
//        cout << "Enter Class: ";
//        cin >> Class;
//    }
//
//    void putData() {
//        cout << "Roll No: " << rollno << endl;
//        cout << "Name: " << name << endl;
//        cout << "Class: " << Class << endl;
//    }
//};
//
//class Test : public Student {
//protected:
//    float T1marks, T2marks, T3marks;
//    float Sessional1, Sessional2, Assignment;
//    float Final;
//
//public:
//    void getMarks() {
//        cout << "Enter Test 1 Marks: ";
//        cin >> T1marks;
//        cout << "Enter Test 2 Marks: ";
//        cin >> T2marks;
//        cout << "Enter Test 3 Marks: ";
//        cin >> T3marks;
//        cout << "Enter Sessional 1 Marks: ";
//        cin >> Sessional1;
//        cout << "Enter Sessional 2 Marks: ";
//        cin >> Sessional2;
//        cout << "Enter Assignment Marks: ";
//        cin >> Assignment;
//    }
//
//    void putMarks() {
//        cout << "Test 1 Marks: " << T1marks << endl;
//        cout << "Test 2 Marks: " << T2marks << endl;
//        cout << "Test 3 Marks: " << T3marks << endl;
//        cout << "Sessional 1 Marks: " << Sessional1 << endl;
//        cout << "Sessional 2 Marks: " << Sessional2 << endl;
//        cout << "Assignment Marks: " << Assignment << endl;
//        cout << "Final Marks: " << Final << endl;
//    }
//
//    void FinalResult() {
//        Final = (T1marks + T2marks + T3marks + Sessional1 + Sessional2 + Assignment) / 6;
//    }
//};
//
//int main() {
//    Test student;
//    student.getData();
//    student.getMarks();
//    student.FinalResult();
//    student.putData();
//    student.putMarks();
//
//    return 0;
//}

#pragma endregion

#pragma region Task 2(2)

//#include <iostream>
//using namespace std;
//
//class Simple {
//protected:
//    int num1, num2;
//
//public:
//    void getData() {
//        cout << "Enter two numbers: ";
//        cin >> num1 >> num2;
//    }
//
//    void add() { cout << "Addition: " << num1 + num2 << endl; }
//    void sub() { cout << "Subtraction: " << num1 - num2 << endl; }
//    void mul() { cout << "Multiplication: " << num1 * num2 << endl; }
//    void div() { cout << "Division: " << (num2 != 0 ? num1 / num2 : 0) << endl; }
//};
//
//class Complex : public Simple {
//public:
//    void add() {
//        if (num1 > 0 && num2 > 0)
//            Simple::add();
//        else
//            cout << "Error: Numbers must be positive!" << endl;
//    }
//
//    void sub() {
//        if (num1 > 0 && num2 > 0)
//            Simple::sub();
//        else
//            cout << "Error: Numbers must be positive!" << endl;
//    }
//
//    void mul() {
//        if (num1 > 0 && num2 > 0)
//            Simple::mul();
//        else
//            cout << "Error: Numbers must be positive!" << endl;
//    }
//
//    void div() {
//        if (num1 > 0 && num2 > 0)
//            Simple::div();
//        else
//            cout << "Error: Numbers must be positive!" << endl;
//    }
//};
//
//int main() {
//    Complex obj;
//    obj.getData();
//    obj.add();
//    obj.sub();
//    obj.mul();
//    obj.div();
//
//    return 0;
//}


#pragma endregion

#pragma region Task 3(2)

//#include <iostream>
//using namespace std;
//
//class Electricity {
//protected:
//    int units;
//    float cost;
//
//public:
//    void getUnits() {
//        cout << "Enter units consumed: ";
//        cin >> units;
//    }
//
//    void Bill() {
//        if (units <= 100)
//            cost = units * 0.50;
//        else
//            cost = (100 * 0.50) + ((units - 100) * 0.60);
//
//        cout << "Total Bill: Rs. " << cost << endl;
//    }
//};
//
//class More_Electricity : public Electricity {
//public:
//    void Bill() {
//        Electricity::Bill();
//        if (cost > 25000) {
//            float surcharge = 0.15 * (cost - 25000);
//            cost += surcharge;
//            cout << "Surcharge Added: Rs. " << surcharge << endl;
//            cout << "Final Bill: Rs. " << cost << endl;
//        }
//    }
//};
//
//int main() {
//    More_Electricity bill;
//    bill.getUnits();
//    bill.Bill();
//
//    return 0;
//}

#pragma endregion

#pragma region Task 4(2)

//#include <iostream>
//using namespace std;
//
//class Package {
//protected:
//	string senderName, senderAddress, senderCity, senderState, senderZIP;
//	string recipientName, recipientAddress, recipientCity, recipientState, recipientZIP;
//	double weight;
//	double costPerOunce;
//
//public:
//	Package(string sName, string sAddress, string sCity, string sState, string sZIP,
//		string rName, string rAddress, string rCity, string rState, string rZIP,
//		double w, double cost)
//		: senderName(sName), senderAddress(sAddress), senderCity(sCity), senderState(sState), senderZIP(sZIP),
//		recipientName(rName), recipientAddress(rAddress), recipientCity(rCity), recipientState(rState), recipientZIP(rZIP),
//		weight(w), costPerOunce(cost) {
//	}
//
//	double calculateCost() {
//		return weight * costPerOunce;
//	}
//
//	void displayInfo() {
//		cout << "Sender: " << senderName << " - " << senderAddress << ", " << senderCity << ", " << senderState << " " << senderZIP << endl;
//		cout << "Recipient: " << recipientName << " - " << recipientAddress << ", " << recipientCity << ", " << recipientState << " " << recipientZIP << endl;
//		cout << "Weight: " << weight << " oz" << endl;
//		cout << "Cost per ounce: $" << costPerOunce << endl;
//		cout << "Total Cost: $" << calculateCost() << endl;
//	}
//};
//
//class TwoDayPackage : public Package {
//private:
//	double flatFee;
//
//public:
//	TwoDayPackage(string sName, string sAddress, string sCity, string sState, string sZIP,
//		string rName, string rAddress, string rCity, string rState, string rZIP,
//		double w, double cost, double fee)
//		: Package(sName, sAddress, sCity, sState, sZIP, rName, rAddress, rCity, rState, rZIP, w, cost), flatFee(fee) {
//	}
//
//	double calculateCost() {
//		return Package::calculateCost() + flatFee;
//	}
//
//	void displayInfo() {
//		Package::displayInfo();
//		cout << "Flat Fee for Two-Day Delivery: $" << flatFee << endl;
//		cout << "Total Cost (including flat fee): $" << calculateCost() << endl;
//	}
//};
//
//class OvernightPackage : public Package {
//private:
//	double extraFeePerOunce;
//
//public:
//	OvernightPackage(string sName, string sAddress, string sCity, string sState, string sZIP,
//		string rName, string rAddress, string rCity, string rState, string rZIP,
//		double w, double cost, double extraFee)
//		: Package(sName, sAddress, sCity, sState, sZIP, rName, rAddress, rCity, rState, rZIP, w, cost), extraFeePerOunce(extraFee) {
//	}
//
//	double calculateCost() {
//		return weight * (costPerOunce + extraFeePerOunce);
//	}
//
//	void displayInfo() {
//		Package::displayInfo();
//		cout << "Extra Fee per Ounce for Overnight Delivery: $" << extraFeePerOunce << endl;
//		cout << "Total Cost (including overnight charge): $" << calculateCost() << endl;
//	}
//};
//
//int main() {
//	Package standard("NameOne", "123 Main St", "Main Area", "MA", "12345",
//		"NameTwo", "456 Main St", "Main Area", "MA", "54321",
//		10, 0.5);
//
//	TwoDayPackage twoDay("NameOne", "123 Main St", "Main Area", "MA", "12345",
//		"NameTwo", "456 Main St", "Main Area", "MA", "54321",
//		10, 0.5, 5.0);
//
//	OvernightPackage overnight("NameOne", "123 Main St", "Main Area", "MA", "12345",
//		"NameTwo", "456 Main St", "Main Area", "MA", "54321",
//		10, 0.5, 0.2);
//
//	cout << "Standard Package Details:\n";
//	standard.displayInfo();
//	cout << "\n";
//
//	cout << "Two-Day Package Details:\n";
//	twoDay.displayInfo();
//	cout << "\n";
//
//	cout << "Overnight Package Details:\n";
//	overnight.displayInfo();
//	cout << "\n";
//
//	return 0;
//}

#pragma endregion