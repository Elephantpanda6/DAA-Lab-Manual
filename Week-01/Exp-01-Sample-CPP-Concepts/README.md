# Experiment 1: Sample Programs Using C++ Concepts

## Aim
To demonstrate core Object-Oriented Programming (OOP) concepts in C++:
1. **Encapsulation & Abstraction**: Designing an abstract base class `Shape` with protected attributes and pure virtual methods.
2. **Inheritance**: Creating derived classes (`Circle`, `Rectangle`) that inherit from `Shape`.
3. **Runtime Polymorphism**: Manipulating diverse derived objects uniformly using base class pointers/smart pointers (`std::unique_ptr`).

## Algorithm / Flow
1. Define abstract base class `Shape` containing:
   - Protected attribute `shapeName`.
   - Pure virtual method `virtual double calculateArea() const = 0`.
   - Virtual destructor `virtual ~Shape()`.
2. Implement derived class `Circle`:
   - Store private `radius`.
   - Override `calculateArea()` returning $\pi \times r^2$.
3. Implement derived class `Rectangle`:
   - Store private `width` and `height`.
   - Override `calculateArea()` returning $width \times height$.
4. In `main()`, store polymorphic objects in `std::vector<std::unique_ptr<Shape>>` and invoke `calculateArea()` dynamically.

## Compilation & Execution
```bash
g++ -std=c++17 -Wall sample_cpp_concepts.cpp -o sample_cpp_concepts.exe
./sample_cpp_concepts.exe
```

## Expected Output
```
Shape: Circle
Area: 78.5398

Shape: Rectangle
Area: 24
```
