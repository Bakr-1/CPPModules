# CPP MODULE

#### CPP00
* stdio steames
* class & instance methods
#
#### CPP01
* New and delete methods
* Pointers
* Refrence
* Files methods
* class & instance methods
#
#### CPP02
* Ad-hoc polymorphism / function overload
    * Function overloading is a C++ principle, which allows you to define many functions having the same name, but accepting different parameters
    * It is not just for class member functions, but also works on any function. The principle is that you have an one-and-only function name and different parameters for every overload. This will allow you to specialise the process of a function based on its parameters
* Operator overload
    * Operator overloading enables you to write function members that enable the basic operators to be applied to class objects (source: Beginning C++). To do this, you write a function that redefines each operator that you want to use with your class
    * Groups operators in C++
        * Arithmetic, Assignment, Comparison, Logical and Bitwise operators
    * Operator overloading allows you to define or change the behaviour of an operator in your program. Operators are essentially just functions
    * C++ gives you full control on operator overloading, however this can lead to a bad use of the language. Only use operator overloading when it makes perfect sense
    * The overload must be related to the natural semantics of the operator. There are not many cases with operator overload. Make sure there is a good use case for it, otherwise it's easy to make stupid mistakes with it
* Canonical form main features:
    * A default constructor
    * A default destructor
    * A copy constructor
    * A assignation operator
* Copy constructor
    * If a class has data members that are pointers, you should implement the copy constructor. If you don't, the default copy constructor will copy an object by copying the values of the data members, which means just the addresses for pointers will be copied - not what they point to
    * The result will be two or more objects with members pointing to the same object. A change to an object that is pointed to by a data member of one object will affect all the duplicate objects
    * When you create a copy constructor, the duplicate can be dependent from the original
#
### CPP03
* inheritance
    * Inheritance is the means by which you can create new classes by reusing and expanding on existing class definitions.
    * Inheritance is also fundamental to making polymorphism possible, and polymorphism is a basic feature of object-oriented programming.
    * One class is derived from another by adding extra properties, by specialization and making the new class a specialized version of the more general class
* private: members are totally private to the class. Not only can they not be accessed from outside of the base class, they also cannot be accessed from inside a class that inherits them
* protected: members of a base class is accessible from within the derived class, but protected from outside interference
* Access  to inherited members of a derived class object is not only determined by their access specification in the base class, but by both the access specifier in the base class and the access specifier of the base class in the derived class
#### Virtual base classes
* To avoid duplication of a base class, you must identify to the compiler that the base class should only appear once within a derived class. You do this by specifying the class as a virtual base class using the virtual keyword.

    *to have an idea [virtual](https://stackoverflow.com/questions/2659116/how-does-virtual-inheritance-solve-the-diamond-multiple-inheritance-ambiguit)
#
#
### CPP04
* abstract class
    * An abstract class means some behaviours are abstract and some are not. The abstract class itself cannot be instantiated
    * An abstract class is a class that cannot be instantiated and is usually implemented as a class that has one or more pure virtual (abstract) functions
    * A pure virtual function is one which must be overridden by any concrete derived class. This is indicated in the declaration with the syntax "=0" in the member function's declaration. It is a way of forcing a contract between the class designer and the users of that class
    * If a class only has pure virtual functions (and no data), it is called an interface
* Virtual functions (virtual keyword)
    * By marking the function in the base class as virtual, you have the possibility of overriding this function in the derived class. This is key to allow polymorphism to work.
    * Runtime cost for virtual functions
        * Additional memory is required to store the V table, which allows us to dispatch to the correct function
        * Every time when we call a virtual function, we need to go through the V table to determine which function to map to use
* Interface & pure virtual functions (virtual keyword + "= 0")
    * "= 0" makes a virtual function a pure virtual function
    * It allows us to define a function in the base class that does not have an implementation, and force subclasses to implement that function
    * An interface only contains unimplemented methods and acts as a template. It also makes it impossible to instantiate that class. We must instantiate a subclass that has the functions implemented. A derived class can only be instantiated when it implements all of the pure virtual functions
#








#### Methods that can be useful
* str.length(). Count the number of characters in a string

* str[]. Use square brackets to access individual characters within a string. No range-checking

* str.at(int index). Retrieve the character at a position with the benefit of built-in range-checking.

* == / !=. Compare two strings for equality

* s1 + s2 / +=. Appending another string or a single character to the end of a string

* str.find(key) / str.find(key, n). Search within a string for a particular string or character. key can either be a string or a character. We say the find member function is overloaded to allow more than one usage.

* str.substr(start, length). Extract substrings. Create new strings by extracting portions of a larger one. This member function does not change the receiver string, as it makes a new string with a copy of the characters specified.

* str1.insert(start, str2) / str1.replace(start, length, str2). Modify a string by inserting and replacing. These functions do modify the receive string

* C-style string. Although old-style C char * strings and C++ strings can co-exist in a program, almost all use will be of C++ strings, since they have a much richer set of operations and are less error-prone to work with. However, when working with file streams, it's unavoidable to use C-style string

* Important: When using (std::string str) as parameter, it takes a copy from the calling function to the destination function. It is not fast to dynamically allocate a string to create a copy. If you are not going to modify the string, send it as a const &, in this way, it will not create a copy