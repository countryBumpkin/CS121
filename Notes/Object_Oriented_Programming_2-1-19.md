# Object Oriented Programming #
_What is an object?:_ It is the representation in software of some real entity.

### How are Classes Defined? ###
Classes are often defined in two files:

1. Interface _(filename.h)_
2. Implementation _(filename.cpp)_

### Struct Technique ###

    struct circle {
      double radius;
    };

    typedef struct circle Circle;


### Header Files ###
Interfaces for C++ files

---

    // filename.h
    #include <iostream>

    class Circle {
    public:
      Circle(void);
      Circle(double r);

      void SetRadius(double r);
      void ShowRadius(void);

    private:
      double radius;
    };

---

    // filename.c++
    include "filename.h"

    Circle::Circle(void){
      radius = 1.0;
    }

    Circle::Circle(double r){
      radius = r;
    }

    Circle::SetRadius(double r){
      radius = r;
    }

    void Circle::ShowRadius(void){
      std::cout << radius;
    }

---
