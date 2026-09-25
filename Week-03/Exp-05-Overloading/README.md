# Experiment 5: Function Overloading and Operator Overloading

## Aim
To demonstrate compile-time (static) polymorphism in C++ through:
1. **Function Overloading**: Defining multiple functions with the same name but different parameter lists.
2. **Operator Overloading**: Giving custom meaning to existing C++ operators (e.g., prefix `++`) for user-defined types.

## Programs
- `01_function_overloading.cpp`: Class `Cal` overloading `add()` for 2 ints, 3 ints, and doubles.
- `02_operator_overloading.cpp`: Overloading prefix `++` to increment internal counter by 2.

## Compilation & Execution
```bash
g++ -std=c++17 01_function_overloading.cpp -o 01_function_overloading.exe
./01_function_overloading.exe

g++ -std=c++17 02_operator_overloading.cpp -o 02_operator_overloading.exe
./02_operator_overloading.exe
```

## Expected Output
### Program 1:
```
add(10, 20)       = 30
add(12, 20, 23)   = 55
add(4.5, 3.2)     = 7.7
```

### Program 2:
```
Initial: The Count is: 8
After ++tt: The Count is: 10
```
