# 42 C++ Modules (CPP00 - CPP09)

This repository contains my solutions for the 42 C++ Pool curriculum, covering object-oriented programming (OOP), memory management, generic programming, and advanced algorithms across 10 modules and 42 exercises.

![C++](https://img.shields.io/badge/Language-C%2B%2B98-blue.svg)
![42 School](https://img.shields.io/badge/School-42-black.svg)
![Build](https://img.shields.io/badge/Build-Passing-brightgreen.svg)

---

## 🚀 Modules Overview

| Module | Core Topic | Key Concepts & Exercises |
| :--- | :--- | :--- |
| **CPP00** | **Basics & I/O** | `std::cout`, `std::cin`, basic classes (`Megaphone`, `Phonebook`). |
| **CPP01** | **Memory & Pointers** | Heap allocation (`new`/`delete`), references vs. pointers, file streams, member pointers (`Zombie`, `Human/Weapon`, `Harl`). |
| **CPP02** | **Operator Overloading** | Ad-hoc polymorphism, Orthodox Canonical Form, fixed-point arithmetic (`Fixed`, `BSP`). |
| **CPP03** | **Inheritance** | Base/derived classes, constructor chaining, diamond problem (`ClapTrap`, `ScavTrap`, `FragTrap`). |
| **CPP04** | **Polymorphism & Abstraction** | Virtual functions, abstract interfaces (`AAnimal`), deep copies (`Brain`). |
| **CPP05** | **Exceptions** | Error handling with `try`/`catch`/`throw`, custom exception hierarchies (`Bureaucrat`, `Form`). |
| **CPP06** | **Casting & RTTI** | `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`, scalar conversions, serialization. |
| **CPP07** | **Templates** | Generic functions (`min`, `max`, `swap`, `iter`) and class templates (`Array`). |
| **CPP08** | **STL Containers & Algos** | Containers (`vector`, `stack`, `list`), iterators, algorithms (`easyfind`, `Span`, `MutantStack`). |
| **CPP09** | **Advanced STL Applications** | Real-world algos & containers: `map` (`Bitcoin Exchange`), `stack` (`RPN Calculator`), Ford-Johnson merge-insertion sort (`PmergeMe`). |

---

## 🛠️ Tech Stack & Rules

- **Standard:** C++98 / C++11 compliant codebase
- **Compiler Flags:** `-Wall -Wextra -Werror -std=c++98`
- **Build Tool:** `Makefile` for each exercise
- **Allowed Tools:** Standard C++ Library (`iostream`, `vector`, `map`, `stack`, `algorithm`, etc.)

---

## 💻 Instructions

### Requirements

- A C++ compiler (`c++`, `g++`, or `clang++`)
- `make`
- Unix-like environment (Linux / macOS)

### Compilation & Execution

Navigate to any exercise directory and run:

```bash
# Compile the exercise
make

# Run the binary (e.g., CPP00/ex01)
./phonebook

# Clean build artifacts
make fclean
```

---

## 📈 Learning Roadmap

```text
CPP00: Basics & Classes
  └── CPP01: Memory, Pointers & References
       └── CPP02: Operator Overloading & Canonical Form
            └── CPP03: Inheritance & Hierarchies
                 └── CPP04: Polymorphism & Abstract Classes
                      └── CPP05: Exception Handling
                           └── CPP06: C++ Casts & RTTI
                                └── CPP07: Templates & Generics
                                     └── CPP08: Standard Template Library (STL)
                                          └── CPP09: Complex Algorithms & Containers
```

---

## 📝 Notes

Created as part of the 42 curriculum. All exercises strictly adhere to the Orthodox Canonical Form where required, with zero memory leaks.
