# Data-Types-in-Cpp

# AIM- To study and implement c++ program structures(data types).

# Software Used
Visual Studio Code

# Theory: 
Understanding and Comparing Basic Data Types in C++

In C++, basic data types form the foundation of all variable declarations and memory operations. These data types include:

    Integer types (int, short, long, long long, and their unsigned variants)

    Floating-point types (float, double, long double)

    Character type (char)

    Boolean type (bool)

Each of these types has specific characteristics in terms of memory size, range, and precision, which can vary based on the system architecture and compiler settings.

# Sizes 

bool

    Size: 1 byte

    Represents: true or false

char

    Size: 1 byte

    Used to store characters (e.g., 'A', 'b', etc.)

signed char

    Size: 1 byte

    Range: -128 to 127

unsigned char

    Size: 1 byte

    Range: 0 to 255

short (or short int)

    Size: 2 bytes

    Range: approximately -32,768 to 32,767

unsigned short

    Size: 2 bytes

    Range: 0 to 65,535

int

    Size: 4 bytes

    Range: approximately -2,147,483,648 to 2,147,483,647

unsigned int

    Size: 4 bytes

    Range: 0 to 4,294,967,295

long

    Size: 8 bytes on most 64-bit systems (may be 4 bytes on 32-bit)

    Range: very large, typically over ±9 quintillion

unsigned long

    Size: 8 bytes

    Range: 0 to over 18 quintillion

long long

    Size: 8 bytes

    Guaranteed to be at least 64 bits

float

    Size: 4 bytes

    Precision: about 6–7 decimal digits

double

    Size: 8 bytes

    Precision: about 15–16 decimal digits

long double

    Size: 8, 12, or 16 bytes (platform/compiler dependent)

    Higher precision than double, but not always significantly

# Conclusion

In this experiment, we studied and implemented various basic data types available in C++. Each data type serves a specific purpose and comes with distinct size and value ranges that can vary based on the system architecture and compiler. Understanding these characteristics is essential for writing efficient and error-free programs. By analyzing sizes and limits through a C++ program, we gain practical insight into memory usage and type selection, which is fundamental in system-level programming and performance-critical applications.
