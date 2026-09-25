# Experiment 3: Parameter Passing Methods, Inline Functions, Static Members, and Access Specifiers

## Aim
To implement and understand:
1. **Parameter Passing Methods**: Call by Value vs Call by Address/Reference.
2. **Inline Functions**: Reducing function call overhead by substituting code at the call site.
3. **Static Class Members**: Variables shared across all class instances.
4. **Access Specifiers**: Controlling visibility using `public` and `private`.

## Programs
- `01_call_by_value.cpp`: Values passed are copies; modifications do not reflect in caller.
- `02_call_by_reference.cpp`: Passing pointers and references allows caller variables to be altered directly.
- `03_inline_functions.cpp`: Inlining arithmetic operations (`sum`, `difference`, `product`, `division`).
- `04_static_members.cpp`: Class `Student` tracking instance count with `static int total`.
- `05_access_specifiers.cpp`: Public data access in `Circle`.

## Compilation & Execution
```bash
g++ -std=c++17 01_call_by_value.cpp -o 01_call_by_value.exe
g++ -std=c++17 02_call_by_reference.cpp -o 02_call_by_reference.exe
g++ -std=c++17 03_inline_functions.cpp -o 03_inline_functions.exe
g++ -std=c++17 04_static_members.cpp -o 04_static_members.exe
g++ -std=c++17 05_access_specifiers.cpp -o 05_access_specifiers.exe
```
