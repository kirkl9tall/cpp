#include <iostream>
#include <string>

using namespace std;

/* class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      std::cout << "Hello World!";
    }
    MyClass(std::string hoho) {     // Constructor
      std::cout << hoho;
    }
    
};

int main() {
  MyClass myObj; 
  MyClass myObj1("haha\n");   // Create an object of MyClass (this will call the constructor)
  return 0;
} */

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string brand, string model, int year) { // Constructor with parameters
      this->brand = brand;
      this->model = model;
      this->year = year;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}