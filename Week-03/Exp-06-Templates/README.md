# Experiment 6: Function and Class Templates

## Aim
To write generic, reusable code using C++ templates:
1. **Function Template**: Generic function `add<T>(a, b)` applicable to `int`, `float`, `double`.
2. **Class Template**: Generic container `Number<T>` instantiated for multiple types.

## Concepts
Templates enable parameterized types, allowing functions and classes to operate with generic types without code duplication.

## Compilation & Execution
```bash
g++ -std=c++17 01_function_template.cpp -o 01_function_template.exe
./01_function_template.exe

g++ -std=c++17 02_class_template.cpp -o 02_class_template.exe
./02_class_template.exe
```

## Expected Output
### Program 1:
```
Addition of i and j is: 5
Addition of m and n is: 3.5
```

### Program 2:
```
int Number = 7
double Number = 7.7
```
