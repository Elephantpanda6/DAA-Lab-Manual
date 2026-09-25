# Experiment 4: Default Arguments, Constructors, Overloading, Destructors, and "this" Pointer

## Aim
To demonstrate:
1. **Default Arguments**: Providing fallback values to function parameters.
2. **Constructors**: Automatic object initialization.
3. **Constructor Overloading**: Default, parameterized, and copy constructors.
4. **Destructors**: Clean teardown of objects when lifetime ends.
5. **The `this` Pointer**: Self-referencing pointer to differentiate member variables and enable method chaining.

## Programs
- `01_default_arguments.cpp`: Function `display(char='*', int=3)`.
- `02_constructors.cpp`: Interactive initialization of student records.
- `03_constructor_overloading.cpp`: Overloaded constructors for geometric shapes.
- `04_destructors.cpp`: Scope-based destruction demo.
- `05_this_pointer.cpp`: `this->field` disambiguation and method chaining.

## Compilation & Execution
```bash
g++ -std=c++17 01_default_arguments.cpp -o 01_default_arguments.exe
g++ -std=c++17 02_constructors.cpp -o 02_constructors.exe
g++ -std=c++17 03_constructor_overloading.cpp -o 03_constructor_overloading.exe
g++ -std=c++17 04_destructors.cpp -o 04_destructors.exe
g++ -std=c++17 05_this_pointer.cpp -o 05_this_pointer.exe
```
