
// Task 01 ----------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//// Base class
//class Base {
//protected:
//    int baseValue1;
//    int baseValue2;
//
//public:
//    void getBaseValues() {
//        cout << "Enter value for baseValue1: ";
//        cin >> baseValue1;
//        cout << "Enter value for baseValue2: ";
//        cin >> baseValue2;
//    }
//
//    void displayBaseValues() {
//        cout << "Base Value 1: " << baseValue1 << endl;
//        cout << "Base Value 2: " << baseValue2 << endl;
//    }
//};
//
//// Derived1 class inheriting from Base
//class Derived1 : public Base {
//protected:
//    int derived1Value;
//
//public:
//    void getDerived1Value() {
//        cout << "Enter value for derived1Value: ";
//        cin >> derived1Value;
//    }
//
//    void displayDerived1Value() {
//        cout << "Derived1 Value: " << derived1Value << endl;
//    }
//};
//
//// Derived2 class inheriting from Derived1
//class Derived2 : public Derived1 {
//public:
//    void getAllValues() {
//        getBaseValues();
//        getDerived1Value();
//    }
//
//    void displayAllValues() {
//        displayBaseValues();
//        displayDerived1Value();
//    }
//};
//
//// Main function
//int main() {
//    Derived2 obj;
//
//    cout << "Enter all values:" << endl;
//    obj.getAllValues();
//
//    cout << "\nDisplaying all values:" << endl;
//    obj.displayAllValues();
//
//    return 0;
//}

// ---------------------------------------------------------------------------------------------

// Task 02 ----------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//// Person base class
//class Person {
//protected:
//    string name;
//    int age;
//    string gender;
//
//public:
//    void setPersonData() {
//        cout << "Enter Name: ";
//        cin >> name;
//        cout << "Enter Age: ";
//        cin >> age;
//        cout << "Enter Gender: ";
//        cin >> gender;
//    }
//
//    void getPersonData() {
//        cout << "Name: " << name << endl;
//        cout << "Age: " << age << endl;
//        cout << "Gender: " << gender << endl;
//    }
//};
//
//// Employee base class
//class Employee {
//protected:
//    string employerName;
//    float dailyWages;
//
//public:
//    void setEmployeeData() {
//        cout << "Enter Employer Name: ";
//        cin >> employerName;
//        cout << "Enter Daily Wages: ";
//        cin >> dailyWages;
//    }
//
//    void getEmployeeData() {
//        cout << "Employer Name: " << employerName << endl;
//        cout << "Daily Wages: " << dailyWages << endl;
//    }
//};
//
//// Teacher class inheriting from Person and Employee
//class Teacher : public Person, public Employee {
//private:
//    char grade;
//
//public:
//    void setTeacherData() {
//        setPersonData();
//        setEmployeeData();
//        cout << "Enter Teacher Grade: ";
//        cin >> grade;
//    }
//
//    void getTeacherData() {
//        getPersonData();
//        getEmployeeData();
//        cout << "Teacher Grade: " << grade << endl;
//    }
//};
//
//// Main function
//int main() {
//    Teacher teacherObj;
//
//    cout << "Enter Teacher Details:" << endl;
//    teacherObj.setTeacherData();
//
//    cout << "\nDisplaying Teacher Details:" << endl;
//    teacherObj.getTeacherData();
//
//    return 0;
//}

// ------------------------------------------------------------------------------------------

// Task 03 ----------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//// Date class
//class Date {
//    int day;
//    int month;
//    int year;
//
//public:
//    Date() : day(1), month(1), year(2000) {
//        cout << "Date Constructor Called." << endl;
//    }
//
//    ~Date() {
//        cout << "Date Destructor Called." << endl;
//    }
//
//    void display() {
//        cout << "Date: " << day << "/" << month << "/" << year << endl;
//    }
//
//    Date get() {
//        return *this;
//    }
//
//    void set() {
//        cout << "Enter Day: ";
//        cin >> day;
//        cout << "Enter Month: ";
//        cin >> month;
//        cout << "Enter Year: ";
//        cin >> year;
//    }
//};
//
//// Time class
//class Time {
//    int hour;
//    int minute;
//    int second;
//
//public:
//    Time() : hour(0), minute(0), second(0) {
//        cout << "Time Constructor Called." << endl;
//    }
//
//    ~Time() {
//        cout << "Time Destructor Called." << endl;
//    }
//
//    void display() {
//        cout << "Time: " << hour << ":" << minute << ":" << second << endl;
//    }
//
//    Time get() {
//        return *this;
//    }
//
//    void set() {
//        cout << "Enter Hour: ";
//        cin >> hour;
//        cout << "Enter Minute: ";
//        cin >> minute;
//        cout << "Enter Second: ";
//        cin >> second;
//    }
//};
//
//// DateTime class
//class DateTime : public Date, public Time {
//    int digital;
//
//public:
//    DateTime() : digital(1) {
//        cout << "DateTime Constructor Called." << endl;
//    }
//
//    ~DateTime() {
//        cout << "DateTime Destructor Called." << endl;
//    }
//
//    void display() {
//        cout << "Displaying DateTime Information:" << endl;
//        Date::display();
//        Time::display();
//        cout << "Digital Flag: " << digital << endl;
//    }
//
//    void setDigital(int d) {
//        digital = d;
//    }
//};
//
//// Main function
//int main() {
//    DateTime Watch;
//
//    cout << "\nInitial DateTime values (via constructor):" << endl;
//    Watch.display();
//
//    cout << "\nResetting values using set functions..." << endl;
//    Watch.Date::set();
//    Watch.Time::set();
//
//    int digitalFlag;
//    cout << "Enter Digital Flag (0 or 1): ";
//    cin >> digitalFlag;
//    Watch.setDigital(digitalFlag);
//
//    cout << "\nUpdated DateTime values:" << endl;
//    Watch.display();
//
//    return 0;
//}

// ------------------------------------------------------------------------------------------

// Task 04 ----------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//// Teacher class
//class Teacher {
//protected:
//    string teacherName;
//    int age;
//    string address;
//
//public:
//    void inputTeacher() {
//        cout << "Enter Teacher's Name: ";
//        cin >> teacherName;
//        cout << "Enter Teacher's Age: ";
//        cin >> age;
//        cout << "Enter Teacher's Address: ";
//        cin >> address;
//    }
//
//    void displayTeacher() {
//        cout << "\n--- Teacher Information ---" << endl;
//        cout << "Name: " << teacherName << endl;
//        cout << "Age: " << age << endl;
//        cout << "Address: " << address << endl;
//    }
//};
//
//// Author class
//class Author {
//protected:
//    string authorName;
//    string authorAddress;
//    int numBooks;
//
//public:
//    void inputAuthor() {
//        cout << "Enter Author's Name: ";
//        cin >> authorName;
//        cout << "Enter Author's Address: ";
//        cin >> authorAddress;
//        cout << "Enter Number of Books Written: ";
//        cin >> numBooks;
//    }
//
//    void displayAuthor() {
//        cout << "\n--- Author Information ---" << endl;
//        cout << "Name: " << authorName << endl;
//        cout << "Address: " << authorAddress << endl;
//        cout << "Books Written: " << numBooks << endl;
//    }
//};
//
//// Scholar class inheriting from both Teacher and Author
//class Scholar : public Teacher, public Author {
//public:
//    void inputScholar() {
//        cout << "\n--- Enter Scholar (Teacher + Author) Details ---\n";
//        inputTeacher();
//        inputAuthor();
//    }
//
//    void displayScholar() {
//        cout << "\n--- Displaying Scholar Details ---" << endl;
//        displayTeacher();
//        displayAuthor();
//    }
//};
//
//// Main function
//int main() {
//    Scholar scholarObj;
//
//    scholarObj.inputScholar();
//    scholarObj.displayScholar();
//
//    return 0;
//}

// ------------------------------------------------------------------------------------------

// Task 05 ----------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//// Base Class
//class Employee {
//protected:
//    string name;
//    int eno;
//
//public:
//    Employee(string n = "Unknown", int e = 0) : name(n), eno(e) {
//        cout << "Employee Constructor Called\n";
//    }
//
//    virtual ~Employee() {
//        cout << "Employee Destructor Called\n";
//    }
//
//    virtual void salary() = 0; // Pure virtual
//};
//
//// Regular Employee
//class Regular : public Employee {
//private:
//    float basic;
//
//public:
//    Regular(string n, int e, float b) : Employee(n, e), basic(b) {
//        cout << "Regular Constructor Called\n";
//    }
//
//    ~Regular() {
//        cout << "Regular Destructor Called\n";
//    }
//
//    void salary() override {
//        float DA = 0.1f * basic;
//        float HRA = 0.3f * basic;
//        float total = basic + DA + HRA;
//        cout << "\n--- Regular Employee ---\n";
//        cout << "Name: " << name << "\nEmployee No: " << eno << endl;
//        cout << "Salary: " << total << endl;
//    }
//};
//
//// Adhoc Employee
//class Adhoc : public Employee {
//private:
//    float wage;
//    int number_of_days;
//
//public:
//    Adhoc(string n, int e, float w) : Employee(n, e), wage(w), number_of_days(0) {
//        cout << "Adhoc Constructor Called\n";
//    }
//
//    ~Adhoc() {
//        cout << "Adhoc Destructor Called\n";
//    }
//
//    void days(int n) {
//        number_of_days = n;
//    }
//
//    void salary() override {
//        float total = wage * number_of_days;
//        cout << "\n--- Adhoc Employee ---\n";
//        cout << "Name: " << name << "\nEmployee No: " << eno << endl;
//        cout << "Days Worked: " << number_of_days << "\nSalary: " << total << endl;
//    }
//};
//
//// Main function to test the classes
//int main() {
//    // Creating Regular employee
//    Regular r("Arthur", 1001, 50000);
//    r.salary();
//
//    // Creating Adhoc employee
//    Adhoc a("Lancelot", 2002, 1200);
//    a.days(22);
//    a.salary();
//
//    return 0;
//}

// ------------------------------------------------------------------------------------------

// Task 06 ----------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//// Base class
//class Student {
//protected:
//    int rollno;
//
//public:
//    void getnum() {
//        cout << "Enter Roll Number: ";
//        cin >> rollno;
//    }
//
//    void putnum() {
//        cout << "Roll Number: " << rollno << endl;
//    }
//};
//
//// Derived from Student
//class Test : virtual public Student {
//protected:
//    float marks;
//
//public:
//    void getmarks() {
//        cout << "Enter Marks: ";
//        cin >> marks;
//    }
//
//    void putmarks() {
//        cout << "Marks: " << marks << endl;
//    }
//};
//
//// Also derived from Student
//class Sports : virtual public Student {
//protected:
//    float score;
//
//public:
//    void getscore() {
//        cout << "Enter Sports Score: ";
//        cin >> score;
//    }
//
//    void putscore() {
//        cout << "Sports Score: " << score << endl;
//    }
//};
//
//// Derived from Test and Sports
//class Result : public Test, public Sports {
//private:
//    float total;
//
//public:
//    void display() {
//        total = marks + score;
//        cout << "\n--- Student Result ---" << endl;
//        putnum();
//        putmarks();
//        putscore();
//        cout << "Total Score (Marks + Sports): " << total << endl;
//    }
//};
//
//// Main function
//int main() {
//    Result studentResult;
//
//    studentResult.getnum();
//    studentResult.getmarks();
//    studentResult.getscore();
//
//    studentResult.display();
//
//    return 0;
//}

// -------------------------------------------------------------------------------------------

// Task 07 ----------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//// Base Class: LocalPhone
//class LocalPhone {
//protected:
//    string phone;
//
//public:
//    void inputPhone() {
//        cout << "Enter Local Phone Number: ";
//        cin >> phone;
//    }
//
//    void displayPhone() {
//        cout << "Local Phone Number: " << phone << endl;
//    }
//};
//
//// Derived Class: NatPhone (inherits LocalPhone)
//class NatPhone : public LocalPhone {
//protected:
//    string cityCode;
//
//public:
//    void inputCityCode() {
//        cout << "Enter City Code: ";
//        cin >> cityCode;
//    }
//
//    void displayCityCode() {
//        cout << "City Code: " << cityCode << endl;
//    }
//};
//
//// Derived Class: IntPhone (inherits NatPhone)
//class IntPhone : public NatPhone {
//protected:
//    string countryCode;
//
//public:
//    void inputCountryCode() {
//        cout << "Enter Country Code: ";
//        cin >> countryCode;
//    }
//
//    void displayCountryCode() {
//        cout << "Country Code: " << countryCode << endl;
//    }
//
//    // Function to show the complete international phone
//    void displayFullPhone() {
//        cout << "\n--- Full International Phone ---\n";
//        displayCountryCode();
//        displayCityCode();
//        displayPhone();
//        cout << "Complete Number: +" << countryCode << "-" << cityCode << "-" << phone << endl;
//    }
//};
//
//// Main function to test the classes
//int main() {
//    IntPhone myPhone;
//
//    myPhone.inputCountryCode();
//    myPhone.inputCityCode();
//    myPhone.inputPhone();
//
//    myPhone.displayFullPhone();
//
//    return 0;
//}

// ------------------------------------------------------------------------------------------

// Task 08 ----------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//// Base class: Publication
//class Publication {
//protected:
//    string title;
//    float price;
//
//public:
//    void getdata() {
//        cout << "Enter Publication Title: ";
//        cin >> title;
//        cout << "Enter Price: ";
//        cin >> price;
//    }
//
//    void putdata() {
//        cout << "Title: " << title << endl;
//        cout << "Price: $" << price << endl;
//    }
//};
//
//// Base class: Sales
//class Sales {
//protected:
//    float sales[3];
//
//public:
//    void getdata() {
//        cout << "Enter sales for last 3 months:\n";
//        for (int i = 0; i < 3; ++i) {
//            cout << "Month " << i + 1 << ": $";
//            cin >> sales[i];
//        }
//    }
//
//    void putdata() {
//        cout << "Sales for last 3 months:\n";
//        for (int i = 0; i < 3; ++i) {
//            cout << "Month " << i + 1 << ": $" << sales[i] << endl;
//        }
//    }
//};
//
//// Derived class: Book (inherits Publication and Sales)
//class Book : public Publication, public Sales {
//private:
//    int pageCount;
//
//public:
//    void getdata() {
//        Publication::getdata();
//        Sales::getdata();
//        cout << "Enter number of pages: ";
//        cin >> pageCount;
//    }
//
//    void putdata() {
//        Publication::putdata();
//        Sales::putdata();
//        cout << "Pages: " << pageCount << endl;
//    }
//};
//
//// Derived class: Tape (inherits Publication and Sales)
//class Tape : public Publication, public Sales {
//private:
//    float duration;
//
//public:
//    void getdata() {
//        Publication::getdata();
//        Sales::getdata();
//        cout << "Enter tape duration (in minutes): ";
//        cin >> duration;
//    }
//
//    void putdata() {
//        Publication::putdata();
//        Sales::putdata();
//        cout << "Duration: " << duration << " minutes" << endl;
//    }
//};
//
//// Main function to test the classes
//int main() {
//    Book b;
//    Tape t;
//
//    cout << "\n--- Enter Book Data ---\n";
//    b.getdata();
//
//    cout << "\n--- Enter Tape Data ---\n";
//    t.getdata();
//
//    cout << "\n=== Book Info ===\n";
//    b.putdata();
//
//    cout << "\n=== Tape Info ===\n";
//    t.putdata();
//
//    return 0;
//}

// ------------------------------------------------------------------------------------------