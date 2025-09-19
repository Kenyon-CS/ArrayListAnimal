#include <iostream>
#include <string>

// Abstract base class
class Animal {
public:
    // Pure virtual function (abstract function)
    virtual void makeSound() const = 0; // This makes Animal an abstract class

    // Virtual destructor to ensure proper cleanup of derived classes
    virtual ~Animal() {}
};

// Concrete derived class: Dog
class Dog : public Animal {
public:
    Dog(const std::string& name) : name_(name) {}

    void makeSound() const override {
        std::cout << name_ << " says: Woof!" << std::endl;
    }

private:
    std::string name_;
};

// Concrete derived class: Cat
class Cat : public Animal {
public:
    Cat(const std::string& name) : name_(name) {}

    void makeSound() const override {
        std::cout << name_ << " says: Meow!" << std::endl;
    }

private:
    std::string name_;
};

// Function to demonstrate polymorphism
void describeAnimal(const Animal& animal) {
    animal.makeSound(); // Calls the appropriate makeSound() function based on the actual object type
}

