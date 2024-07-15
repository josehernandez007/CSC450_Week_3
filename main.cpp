
#include <iostream>

int main() {
    int value1, value2, value3;
    
    // Ask the user to enter three integer values
    std::cout << "Please enter the first value: ";
    std::cin >> value1;
    
    std::cout << "Please enter the second value: ";
    std::cin >> value2;
    
    std::cout << "Please enter the third value: ";
    std::cin >> value3;
    
    // This creates integer pointers and it allocate memory
    int* ptr1 = new int(value1);
    int* ptr2 = new int(value2);
    int* ptr3 = new int(value3);
    
    // Display the contents of the variables and pointers
    std::cout << "\nValues entered by the user:\n";
    std::cout << "Value1: " << value1 << std::endl;
    std::cout << "Value2: " << value2 << std::endl;
    std::cout << "Value3: " << value3 << std::endl;
    
    std::cout << "\nPointers pointing to the values:\n";
    std::cout << "Ptr1: " << *ptr1 << std::endl;
    std::cout << "Ptr2: " << *ptr2 << std::endl;
    std::cout << "Ptr3: " << *ptr3 << std::endl;
    
    // Deallocate memory
    delete ptr1;
    delete ptr2;
    delete ptr3;
    
    return 0;
}
