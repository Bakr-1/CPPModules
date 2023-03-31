#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
    public:
  // Public member function that takes a string as an argument
        void	complain(std::string level);
        Harl();
        ~Harl();
    private:
    // Private member functions for each level of complaining
        void debug();
        void info();
        void warning();
        void error();
        void wrong(void);

};

#endif