# 42 C++ Modules Curriculum (CPP00 - CPP09)

This repository contains a comprehensive suite of solutions for the **42 C++ Modules** curriculum (10 modules, 42 exercises). The program is a progressive journey from basic C++ syntax to advanced object-oriented programming, manual memory management, template metaprogramming, and complex Standard Template Library (STL) algorithms.

---

## 🛠️ Global Tech Stack & Requirements

* **Language Standard:** C++98 (strictly compliant across all modules)
* **Compiler & Flags:** `c++` / `g++` / `clang++` with `-Wall -Wextra -Werror -std=c++98`
* **Build System:** Individual `Makefile` per exercise with `all`, `clean`, `fclean`, `re` targets
* **Core Concepts:** Object-Oriented Programming (OOP), Orthodox Canonical Form, Manual Memory Allocation, RTTI, Templates, STL Containers & Algorithms

---

## 📚 Detailed Module Progression

### 📦 CPP00 — Introduction to C++
*Focus: C++ Basics, Standard I/O streams (`std::cin`, `std::cout`), Member Functions, and Simple Data Storage.*
* **ex00 — Megaphone:** String manipulation converting command-line arguments to uppercase.
* **ex01 — PhoneBook:** An interactive contact manager holding up to 8 contacts using `PhoneBook` and `Contact` classes.
  * *Features:* Commands `ADD`, `SEARCH`, `EXIT`, formatted tabular display, field validation.
  * *Concepts:* Getter/setter encapsulation, fixed-size object arrays, `std::string` operations.

---

### 💾 CPP01 — Memory Allocation, Pointers & References
*Focus: Dynamic Memory Management (`new`/`delete`), References vs. Pointers, Object Lifecycle, File I/O.*
* **ex00 — Zombie:** Heap allocation vs. Stack allocation of objects (`newZombie()` vs. `randomChump()`).
* **ex01 — ZombieHorde:** Allocating dynamic arrays of objects in a single memory block using `new[]` and `delete[]`.
* **ex02 — HI THIS IS BRAIN:** Memory address exploration comparing a `std::string`, its pointer, and its reference.
* **ex03 — Unnecessary Violence:** Object composition using pointers (`HumanB`, nullable) vs. references (`HumanA`, mandatory binding).
* **ex04 — Sed is for losers:** File stream manipulation (`std::ifstream`, `std::ofstream`) replacing occurrences of strings within files.
* **ex05/ex06 — Harl / Harl Filter:** Dispatching member functions using array of pointers-to-member-functions and `switch` statement log filtering.

---

### ⚙️ CPP02 — Ad-hoc Polymorphism & Operator Overloading
*Focus: Orthodox Canonical Form, Operator Overloading, Fixed-Point Number Representation.*
* **ex00 to ex02 — Fixed Point Class:** Building a custom fixed-point number class (`Fixed`) from scratch.
  * *Canonical Form:* Default constructor, copy constructor, copy assignment operator, destructor.
  * *Overloaded Operators:* Assignment (`=`), Comparison (`>`, `<`, `>=`, `<=`, `==`, `!=`), Arithmetic (`+`, `-`, `*`, `/`), Increment/Decrement (`++`, `--` prefix & postfix), and Stream Insertion (`<<`).
  * *Type Conversions:* Implicit and explicit `int` to `Fixed` and `float` to `Fixed` conversions.
* **ex03 — Binary Space Partitioning (BSP):** 2D geometry algorithms calculating point inclusion inside triangles using custom `Point` and `Fixed` classes.

---

### 🌳 CPP03 — Inheritance & Class Hierarchies
*Focus: Code Reuse via Inheritance, Access Specifiers, Method Overriding, Construct/Destruct Order.*
* **ex00 — ClapTrap:** Base class managing hit points, energy points, and attack damage.
* **ex01 — ScavTrap:** Derived class extending `ClapTrap` with special abilities (`guardGate`) and overridden attributes.
* **ex02 — FragTrap:** Multi-level inheritance showcasing different constructor chaining and special abilities (`highFivesGuys`).
* **ex03 — Diamond Problem:** Resolving multiple inheritance ambiguity using `virtual` base inheritance (`DiamondTrap`).

---

### 🔮 CPP04 — Subtype Polymorphism & Abstract Classes
*Focus: Virtual Functions, Pure Virtual Interfaces, Dynamic Binding, Deep vs. Shallow Copies.*
* **ex00 — Polymorphism:** Base class `Animal` with derived `Dog` and `Cat` classes overriding `makeSound()` via `virtual`.
* **ex01 — I don't want to burn the world on fire:** Dynamic allocation inside objects (handling a `Brain` class container) requiring explicit deep copy implementations in copy constructors and assignment operators.
* **ex02 — Abstract Class:** Enforcing non-instantiability by introducing pure virtual functions (`AAnimal`).
* **ex03 — Interface & Materia:** Abstract interface implementation (`AMateria`, `ICharacter`, `IMateriaSource`) for inventory and spell systems.

---

### 🛡️ CPP05 — Exceptions & Validation
*Focus: Exception Handling, Stack Unwinding, Custom Exception Classes.*
* **ex00 — Bureaucrat:** Enforcing value constraints (Grades 1 to 150) using custom exceptions (`GradeTooHighException`, `GradeTooLowException`).
* **ex01 — Form:** Inter-class exception interactions where `Bureaucrat` signs forms based on required grades.
* **ex02 — Concrete Forms:** Special forms (`ShrubberyCreationForm`, `RobotomyRequestForm`, `PresidentialPardonForm`) executing file actions, random outcomes, and administrative tasks.
* **ex03 — Intern:** Dynamic form creation using factory pattern design with string matching.

---

### 🎭 CPP06 — Casts & Serialization
*Focus: C++ Explicit Casting Operators, Type Conversion Rules, RTTI (Run-Time Type Information).*
* **ex00 — ScalarConverter:** Static class converting literal strings (`char`, `int`, `float`, `double`, pseudo-literals like `nan`, `+inf`) using explicit parsing and numeric limits checks.
* **ex01 — Serializer:** Non-lossy pointer serialization/deserialization converting pointers to `uintptr_t` via `reinterpret_cast`.
* **ex02 — Identify:** Type identification at runtime using `dynamic_cast` for both pointers and references without using type tags.
* **Casts Summary:**
  * `static_cast`: Safe compile-time type conversions.
  * `dynamic_cast`: Polymorphic downcasting with RTTI runtime checks.
  * `reinterpret_cast`: Bit-level reinterpretation.
  * `const_cast`: Adding/removing `const` qualifiers.

---

### 🧬 CPP07 — Templates & Generic Programming
*Focus: Function Templates, Class Templates, Template Specialization, Type Deduction.*
* **ex00 — Start with a few functions:** Generic utility function templates: `swap()`, `min()`, `max()`.
* **ex01 — Iter:** Generic array iteration function template accepting function pointers:
  ```cpp
  template <typename T>
  void iter(T *array, size_t length, void (*func)(T&));
  ```
* **ex02 — Array:** Custom dynamic container template class supporting generic data types, out-of-bound exception safety (`[]` operator overloading), and memory management.

---

### 📦 CPP08 — Standard Template Library (STL)
*Focus: STL Containers, Iterators, Generic Algorithms, Container Adapters.*
* **ex00 — Easyfind:** Function template searching values in sequential STL containers using `std::find()` and iterators.
* **ex01 — Span:** Class holding a maximum of $N$ integers with range-based insertion, computing `shortestSpan()` and `longestSpan()` using `std::sort()` and iterator ranges.
* **ex02 — MutantStack:** Making the non-iterable `std::stack` container adapter iterable by inheriting from `std::stack` and exposing underlying container iterators.

---

### 🚀 CPP09 — Advanced STL Algorithms & Complex Problem Solving
*Focus: Real-world Applications, Container Selection Trade-offs, Parsing, Sorting Optimization.*
* **ex00 — Bitcoin Exchange:**
  * *Task:* Calculates portfolio value over time using a historical price database.
  * *Tech:* CSV parsing, date validation, `std::map<std::string, float>` for binary search lookups using `std::map::lower_bound()`.
* **ex01 — Reverse Polish Notation (RPN):**
  * *Task:* Evaluates mathematical expressions written in postfix notation.
  * *Tech:* Expression parsing, operator validation, stack-based evaluation using `std::stack<int>`.
* **ex02 — PmergeMe:**
  * *Task:* Implements the **Ford-Johnson algorithm** (merge-insertion sort) to sort large integer sequences.
  * *Tech:* Dual implementation comparing performance between `std::vector` and `std::deque`, minimizing comparison operations, recursion, pair sorting, and insertion via Jacobsthal numbers.

---

## 📈 Skills Acquisition Matrix

| Skill Area | Modules | Key Technologies & Concepts |
| :--- | :--- | :--- |
| **Language Basics** | `CPP00` | Streams (`cin`/`cout`), Member functions, Basic Encapsulation |
| **Memory Management** | `CPP01`, `CPP04` | `new`/`delete`, Pointers vs. References, Deep Copying, Leaks Avoidance |
| **Operator Overloading** | `CPP02` | Fixed-point math, Canonical Form, Stream overload (`<<`) |
| **Object Architecture** | `CPP03`, `CPP04` | Base/Derived classes, Virtual methods, Polymorphism, Interfaces |
| **Error Handling** | `CPP05` | Custom exception classes, `try`/`catch`/`throw` blocks |
| **Type Conversions** | `CPP06` | `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`, RTTI |
| **Generics** | `CPP07` | Function/Class Templates, Instantiation, Bounds checking |
| **STL & Algorithms** | `CPP08`, `CPP09` | Containers (`vector`, `deque`, `map`, `stack`), Iterators, Ford-Johnson Sort |

---

## 📝 Notes & Academic Integrity

This repository forms part of the official **42 School Curriculum**. All implementation files conform strictly to standard C++98 conventions, pass all compilation flags without warnings, and guarantee zero memory leaks checked via Valgrind / AddressSanitizer.
