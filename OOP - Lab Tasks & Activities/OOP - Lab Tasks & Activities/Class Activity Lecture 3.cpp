
#include <iostream>
using namespace std;

int main() {
	const int x = 15;

	int x = 5;

	cout << x << endl;

	return 0;
}


// Task 1 ----------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//class Rectangle {
//private:
//	int length;
//	int width;
//public:
//	Rectangle() : length(1), width(1) {}
//	void setDimensions(int l, int w) {
//		length = l;
//		width = w;
//	}
//	int getArea() {
//		return length * width;
//	}
//	int getPerimeter() {
//		return 2 * (length + width);
//	}
//	void displayDimensions() {
//		cout << "Length: " << length << ", Width: " << width << endl;
//	}
//};
//int main() {
//	Rectangle rect;
//	rect.displayDimensions();
//	cout << "Area: " << rect.getArea() << endl;
//	cout << "Perimeter: " << rect.getPerimeter() << endl;
//	rect.setDimensions(5, 3);
//	rect.displayDimensions();
//	cout << "Area: " << rect.getArea() << endl;
//	cout << "Perimeter: " << rect.getPerimeter() << endl;
//	return 0;
//}

//--------------------------------------------------------------------------------------------

//Task 2 ------------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//class Rectangle {
//private:
//	int length;
//	int width;
//public:
//	Rectangle();
//	void setDimensions(int l, int w);
//	inline int getArea();
//	inline int getPerimeter();
//	void displayDimensions();
//};
//Rectangle::Rectangle() {
//	length = 1;
//	width = 1;
//}
//void Rectangle::setDimensions(int l, int w) {
//	length = l;
//	width = w;
//}
//inline int Rectangle::getArea() {
//	return length * width;
//}
//inline int Rectangle::getPerimeter() {
//	return 2 * (length + width);
//}
//void Rectangle::displayDimensions() {
//	cout << "Length: " << length << ", Width: " << width << endl;
//}
//int main() {
//	Rectangle rect;
//	rect.displayDimensions();
//	cout << "Area: " << rect.getArea() << endl;
//	cout << "Perimeter: " << rect.getPerimeter() << endl;
//	rect.setDimensions(5, 3);
//	rect.displayDimensions();
//	cout << "Area: " << rect.getArea() << endl;
//	cout << "Perimeter: " << rect.getPerimeter() << endl;
//	return 0;
//}

//--------------------------------------------------------------------------------------------

//Task 3 ------------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//class Rectangle {
//private:
//	int length;
//	int width;
//public:
//	Rectangle();
//	void setDimensions(int l, int w);
//	inline int getArea();
//	inline int getPerimeter();
//	void displayDimensions();
//};
//Rectangle::Rectangle() {
//	length = 1;
//	width = 1;
//}
//void Rectangle::setDimensions(int l, int w) {
//	length = l;
//	width = w;
//}
//inline int Rectangle::getArea() {
//	return length * width;
//}
//inline int Rectangle::getPerimeter() {
//	return 2 * (length + width);
//}
//void Rectangle::displayDimensions() {
//	cout << "Length: " << length << ", Width: " << width << endl;
//}
//int main() {
//	Rectangle rect;
//	rect.displayDimensions();
//	cout << "Area: " << rect.getArea() << endl;
//	cout << "Perimeter: " << rect.getPerimeter() << endl;
//	rect.setDimensions(5, -3);
//	if (rect.getArea() <= 0 || rect.getPerimeter() <= 0) {
//		cout << "Error: Invalid dimensions detected (negative or zero area/perimeter)." << endl;
//		rect.setDimensions(5, 3);
//	}
//	rect.displayDimensions();
//	cout << "Area: " << rect.getArea() << endl;
//	cout << "Perimeter: " << rect.getPerimeter() << endl;
//	return 0;
//}

//--------------------------------------------------------------------------------------------