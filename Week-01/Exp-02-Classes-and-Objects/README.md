# Experiment 2: Sample Programs on Classes and Inheritance in C++

## Aim
1. To understand how to define a C++ class as a blueprint, instantiate objects, and access data attributes.
2. To demonstrate basic single inheritance where a derived child class (`Car`) inherits attributes and member functions from a base parent class (`Vehicle`).

## Concepts
- **Class**: A user-defined data type and prototype from which objects are created.
- **Object**: An instance of a class having states and behaviors.
- **Inheritance**: A mechanism by which one class acquires the properties and behavior of another class using the `:` access specifier.

## Files
- `01_class_basics.cpp`: Class definition, object creation, member variable assignment, and display.
- `02_inheritance_basics.cpp`: Base class `Vehicle` with derived class `Car`.

## Compilation & Execution
```bash
# Program 1
g++ -std=c++17 01_class_basics.cpp -o 01_class_basics.exe
./01_class_basics.exe

# Program 2
g++ -std=c++17 02_inheritance_basics.cpp -o 02_inheritance_basics.exe
./02_inheritance_basics.exe
```

## Expected Output
### Program 1:
```
15
Good Morning
```

### Program 2:
```
Hello,hai! 
Ford Mustang
```
