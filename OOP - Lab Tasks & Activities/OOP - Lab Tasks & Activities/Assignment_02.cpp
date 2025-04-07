//---------------------------------------------------------------
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	const int x = 10;
//	int x = 20;
//
//	cout << x << endl;
//
//}
//---------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    string name;
//public:
//    Student(string n) : name(n) {}
//
//    void display() const {  
//        cout << "Student Name: " << name << endl;
//    }
//};
//
//int main() {
//    Student s1("Alice");
//    const Student s2("Bob");
//
//    s1.display();
//    s2.display();
//
//    return 0;
//}
//---------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    static int count; 
//
//public:
//    Student() { count++; }
//
//    static void showCount() { 
//        cout << "Total Students: " << count << endl;
//    }
//};
//
//int Student::count = 0;
//
//int main() {
//    Student s1, s2, s3;
//
//    Student::showCount();
//
//    return 0;
//}
//---------------------------------------------------------------

//#include <iostream>
//
//int main() {
//    int num = 42;   // Integer variable
//    int* ptr = &num; // Pointer storing address of num
//
//    std::cout << "Address of num: " << &num << std::endl;
//    std::cout << "Address stored in ptr: " << ptr << std::endl;
//    std::cout << "Value of num: " << num << std::endl;
//    std::cout << "Value accessed via pointer: " << *ptr << std::endl;
//
//    return 0;
//}

//---------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[] = { 10, 20, 30, 40, 50 };
//    int* ptr = arr;
//
//    cout << "Accessing array elements using pointer arithmetic:" << endl;
//
//    for (int i = 0; i < 5; i++) {
//        cout << "arr[" << i << "] = " << *(ptr + i) << endl;
//    }
//
//    return 0;
//}

//---------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main() {
//    int x = 5, y = 10;
//
//    cout << "Before swap: x = " << x << ", y = " << y << endl;
//
//    swap(&x, &y);
//
//    cout << "After swap: x = " << x << ", y = " << y << endl;
//
//    return 0;
//}

//---------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//int main() {
//    int size;
//    cout << "Enter array size: ";
//    cin >> size;
//
//    int* arr = new int[size]; // Allocating memory dynamically
//
//    for (int i = 0; i < size; i++) {
//        arr[i] = i * 10;
//    }
//
//    cout << "Dynamic array elements: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    delete[] arr; // Freeing allocated memory
//
//    return 0;
//}

//---------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//int main() {
//    int a = 10, b = 20;
//
//    // Pointer to a constant (value cannot be changed, but pointer can be reassigned)
//    const int* ptr1 = &a;
//    cout << "Value pointed by ptr1: " << *ptr1 << endl;
//    // *ptr1 = 15;                                               // Error: Cannot modify value through ptr1
//    ptr1 = &b;                                                  // Allowed: ptr1 can point to another address
//    cout << "ptr1 now points to: " << *ptr1 << endl;
//
//    // Constant pointer (pointer cannot change, but value can be modified)
//    int* const ptr2 = &a;
//    cout << "Value pointed by ptr2: " << *ptr2 << endl;
//    *ptr2 = 30;                                                // Allowed: Can modify value through ptr2
//    cout << "Modified value of a: " << a << endl;
//    // ptr2 = &b;                                             // Error: Cannot change pointer address
//
//    return 0;
//}

//---------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//int main() {
//    int size;
//    cout << "Enter array size: ";
//    cin >> size;
//
//    int* arr = new int[size]; // Allocating memory dynamically
//
//    for (int i = 0; i < size; i++) {
//        arr[i] = i * 10;
//    }
//
//    cout << "Dynamic array elements: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    delete[] arr; // Freeing allocated memory
//
//    return 0;
//}

//---------------------------------------------------------------

// #include <iostream>
// using namespace std;

// class Student {
// private:
//     string name;
//     int age;
//     int rollNumber;

//     // Static variable to track the total number of students
//     static int totalStudents;

// public:
//     // Constructor
//     Student(string n, int a, int r) : name(n), age(a), rollNumber(r) {
//         totalStudents++;
//     }

//     void displayStudent() const {
//         cout << "Student Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Roll Number: " << rollNumber << endl;
//     }

//     static int getTotalStudents() {
//         return totalStudents;
//     }

//     // Destructor to decrement student count
//     ~Student() {
//         totalStudents--;
//     }
// };

// // Initialize static variable
// int Student::totalStudents = 0;

// int main() {
//     Student s1("Alice", 20, 101);
//     Student s2("Bob", 21, 102);

//     cout << "Student Details:" << endl;
//     s1.displayStudent();
//     cout << endl;
//     s2.displayStudent();
//     cout << endl;

//     cout << "Total Students: " << Student::getTotalStudents() << endl;

//     return 0; // Destructor will automatically be called when objects go out of scope
// }

