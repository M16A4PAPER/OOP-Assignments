
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
//	system("pause");
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
//	system("pause");
//	return 0;
//};

#pragma endregion

#pragma region Example 4.3
//
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

#include <iostream>
using namespace std;

class Publication {

protected:
	string title;
	float price;

public:
	void getData() {
		cout << "Enter title: " << endl;
		cin >> title;
		cout << "Enter price: " << endl;
		cin >> price;
	}

	void putData() {
		cout << "Title: " << title << endl;
		cout << "Price: " << price << endl;
	}
};

class Book : public Publication {

protected:
	int pageCount;

public:
	void getData() {

		Publication::getData();
		cout << "Enter page count: " << endl;
		cin >> pageCount;
	}

	void putData() {

		Publication::putData();
		cout << "Page count: " << pageCount << endl;
	}
};

class Tape : public Publication {
private:
	float playingTime;

public:
	void getData() {

		Publication::getData();
		cout << "Enter playing time: " << endl;
		cin >> playingTime;
	}
	void putData() {

		Publication::putData();
		cout << "Playing time: " << playingTime << endl;
	}
};

int main() {
	Book b1;
	Tape t1;

	b1.getData();
	t1.getData();

	b1.putData();
	t1.putData();

	return 0;
}

#pragma endregion

#pragma region Task 2



#pragma endregion


