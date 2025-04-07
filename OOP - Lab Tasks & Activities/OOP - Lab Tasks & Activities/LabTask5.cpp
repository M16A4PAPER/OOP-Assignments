//
//// 1. Basic Encapsulation - Understanding and applying access specifiers
////                          (private, public) to control access to class members.
//
////#include <iostream>
////using namespace std;
////
////class Student {
////private:
////    string name;
////    int age;
////
////public:
////    void setName(string newName) {
////        name = newName;
////    }
////
////    string getName() {
////        return name;
////    }
////
////    void setAge(int newAge) {
////        if (newAge > 0) {
////            age = newAge;
////        }
////        else {
////            cout << "Age must be positive." << endl;
////        }
////    }
////
////    int getAge() {
////        return age;
////    }
////};
////
////int main() {
////    Student student;
////    student.setName("Alice");
////    student.setAge(20);
////
////    cout << "Student Name: " << student.getName() << endl;
////    cout << "Student Age: " << student.getAge() << endl;
////
////    return 0;
////}
//
//// 2. Using Encapsulation With Getter & Setter Methods - Implementing controlled access to
////                                                       private variables through functions.
//
////#include <iostream>
////using namespace std;
////
////class Employee {
////private:
////    string name;
////    double salary;
////
////public:
////    void setName(string newName) {
////        name = newName;
////    }
////
////    string getName() {
////        return name;
////    }
////
////    void setSalary(double newSalary) {
////        if (newSalary >= 0) {
////            salary = newSalary;
////        }
////        else {
////            cout << "Salary cannot be negative." << endl;
////        }
////    }
////
////    double getSalary() {
////        return salary;
////    }
////};
////
////int main() {
////    Employee emp;
////    emp.setName("John");
////    emp.setSalary(50000);
////
////    cout << "Employee: " << emp.getName() << endl;
////    cout << "Salary: $" << emp.getSalary() << endl;
////
////    return 0;
////}
//
//// 3. Using Encapsulation With Constructors - Ensuring encapsulated initialization and
////                                            modification of class attributes.
//
////#include <iostream>
////using namespace std;
////
////class BankAccount {
////private:
////    double balance;
////
////public:
////    BankAccount(double initialBalance) {
////        if (initialBalance >= 0) {
////            balance = initialBalance;
////        }
////        else {
////            cout << "Initial balance cannot be negative." << endl;
////            balance = 0;
////        }
////    }
////
////    void deposit(double amount) {
////        if (amount > 0) {
////            balance += amount;
////        }
////        else {
////            cout << "Deposit amount must be positive." << endl;
////        }
////    }
////
////    void withdraw(double amount) {
////        if (amount > 0 && amount <= balance) {
////            balance -= amount;
////        }
////        else {
////            cout << "Invalid withdrawal amount." << endl;
////        }
////    }
////
////    double getBalance() {
////        return balance;
////    }
////};
////
////int main() {
////    BankAccount account(1000);
////    account.deposit(500);
////    account.withdraw(200);
////
////    cout << "Account Balance: $" << account.getBalance() << endl;
////
////    return 0;
////}
//
//// 4. Objectives
//
//#include <iostream>
//using namespace std;
//
//// Complex Class with Addition, Subtraction, and Multiplication
//class Complex {
//private:
//    double real, imag;
//
//public:
//    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
//
//    Complex operator+(const Complex& c) {
//        return Complex(real + c.real, imag + c.imag);
//    }
//
//    Complex operator-(const Complex& c) {
//        return Complex(real - c.real, imag - c.imag);
//    }
//
//    Complex operator*(const Complex& c) {
//        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
//    }
//
//    void show() const; // Declaration
//};
//
//// Inline function definition
//inline void Complex::show() const {
//    cout << real << " + " << imag << "i" << endl;
//}
//
//// Distance Class with Addition, Subtraction, and Multiplication
//class Distance {
//private:
//    int feet;
//    float inches;
//
//public:
//    Distance(int f = 0, float i = 0) : feet(f), inches(i) {}
//
//    Distance operator+(const Distance& d) {
//        int f = feet + d.feet;
//        float i = inches + d.inches;
//        if (i >= 12) { f++; i -= 12; }
//        return Distance(f, i);
//    }
//
//    Distance operator-(const Distance& d) {
//        int f = feet - d.feet;
//        float i = inches - d.inches;
//        if (i < 0) { f--; i += 12; }
//        return Distance(f, i);
//    }
//
//    Distance operator*(float factor) {
//        float totalInches = (feet * 12 + inches) * factor;
//        return Distance(totalInches / 12, (int)totalInches % 12);
//    }
//
//    void display() const;
//};
//
//void Distance::display() const {
//    cout << feet << "' " << inches << "\"" << endl;
//}
//
//// Main Function to Test Everything
//int main() {
//    // Testing Complex Class
//    Complex c1(3, 4), c2(1, 2);
//    Complex c3 = c1 + c2;
//    Complex c4 = c1 - c2;
//    Complex c5 = c1 * c2;
//
//    cout << "Complex Numbers Operations:" << endl;
//    c3.show();
//    c4.show();
//    c5.show();
//
//    // Testing Distance Class
//    Distance d1(5, 8), d2(3, 10);
//    Distance d3 = d1 + d2;
//    Distance d4 = d1 - d2;
//    Distance d5 = d1 * 2.5;
//
//    cout << "\nDistance Operations:" << endl;
//    d3.display();
//    d4.display();
//    d5.display();
//
//    return 0;
//}
