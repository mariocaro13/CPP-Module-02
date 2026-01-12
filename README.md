*This project has been created as part of the 42 curriculum by mcaro-ro*

# CPP Module 02 – Fixed Point Numbers

## 📖 Description
CPP Module 02 is designed to introduce the fundamentals of **fixed-point arithmetic** in C++.  
The goal is to practice class design, canonical form, operator overloading, and type conversions.  
Through a series of four exercises, you will gradually build a `Fixed` class that evolves from a simple container into a fully functional numeric type.

---

## ⚙️ Instructions
1. Clone the repository from your Git workspace.  
2. Navigate into the exercise folder (`ex00`, `ex01`, `ex02`, or `ex03`).  
3. Compile the project using make
4. Each exercise has its own main.cpp to test the required functionality.
5. Clean build artifacts with:
	```
	make clean
	make fclean
	make re
	```

## 📚 Concepts Covered

1. Orthodox Canonical Form
	- Default constructor
	- Copy constructor
	- Copy assignment operator
	- Destructor  
These four functions ensure proper object lifecycle management.

2. Encapsulation
	- Private attributes (_value, _fractionalBits).
	- Public methods (getRawBits, setRawBits, toInt, toFloat).
	- Clear separation of interface and implementation.

3. Operator Overloading
	- Arithmetic operators: +, -, *, /.
	- Comparison operators: >, <, >=, <=, ==, !=.
	- Stream insertion operator << for output.

4. Type Conversion
	- Constructors from int and float.
	- Methods toInt() and toFloat() to convert back.
	- Understanding how fractional bits represent precision.

5. Geometry Application
Using fixed-point numbers in a practical problem:
Determining if a point lies inside a triangle (bsp function).

## 🧱 Exercises
- ex00 – My First Class in Orthodox Canonical Form ✅
	- Implement a Fixed class with canonical form.
	- Methods: getRawBits, setRawBits.
	- Focus: object lifecycle and encapsulation.

- ex01 – Towards a More Useful Fixed Point Class ❌
	- Add constructors from int and float.
	- Implement toInt() and toFloat().
	- Overload << for output.
	- Focus: type conversion and operator overloading.

- ex02 – Now We’re Talking ❌
	- Implement arithmetic and comparison operators.
	- Add static methods min and max.
	- Focus: operator overloading and reusable utilities.

- ex03 – BSP (Binary Space Partitioning) ❌
	- Implement a Point class using Fixed.
	- Write the bsp function to check if a point is inside a triangle.
	- Focus: applying fixed-point arithmetic to geometry.
