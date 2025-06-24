# C++ Geometry Toolkit

This project is a **C++20-based** geometry toolkit designed for precision modeling, geometric operations (such as boolean operations and intersections), and unit testing for CAD-style components. The toolkit leverages **Eigen** for vector and matrix calculations and **GoogleTest** for unit testing.

## Features

- **Core Geometry Operations**: 
  - Basic geometric classes like `Point`, `Line`, and `Circle`.
  - Intersection operations (e.g., circle-circle intersection).
  - Boolean operations for geometric objects.
  
- **Precision Modeling**: 
  - Uses `Eigen` for efficient vector and matrix operations.
  - Focused on handling precision issues typical in CAD-style modeling.

- **Unit Testing**: 
  - Utilizes **GoogleTest** to ensure correctness of geometry calculations (intersection, boolean operations, etc.).

## Project Structure

C++-Geometry-Toolkit/
│
├── Geometry.h # Header file defining geometry classes (Point, Line, Circle)
├── Geometry.cpp # Source file implementing geometry operations
├── GeometryTest.cpp # Unit tests using GoogleTest
├── main.cpp # Main program to test and demonstrate the toolkit
└── README.md # This file

markdown
Copy
Edit

## Dependencies

- **Eigen**: A C++ template library for linear algebra.
- **GoogleTest**: A C++ testing framework for unit tests.

To install **Eigen** and **GoogleTest**, follow the instructions below:

### Installing Eigen

Eigen is a header-only library. You can download it from [Eigen's official site](https://eigen.tuxfamily.org/dox/GettingStarted.html) or install it via a package manager.

### Installing GoogleTest

To install GoogleTest, you can follow these steps:

1. Clone the GoogleTest repository:
   ```bash
   git clone https://github.com/google/googletest.git
   cd googletest
Build and install:

bash
Copy
Edit
cmake .
sudo make install
Compilation
To compile the project, you can use g++ with the following command:

bash
Copy
Edit
g++ -std=c++20 -I/path/to/eigen -I/path/to/googletest/include -o GeometryToolkit main.cpp Geometry.cpp -L/path/to/googletest/lib -lgtest -lgtest_main -pthread
Replace /path/to/eigen and /path/to/googletest with the actual paths to your Eigen and GoogleTest installations.

Usage
After compiling, you can run the GeometryToolkit executable:

bash
Copy
Edit
./GeometryToolkit
This will execute the main program and demonstrate some of the toolkit's functionality, such as detecting intersections between geometric objects.
