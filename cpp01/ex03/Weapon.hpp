#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
    public:
        Weapon(std::string Wtype);
        Weapon();
        ~Weapon();
        void setType(std::string type);
        std::string const &getType();
    private:
        std::string type;
};

#endif // WEAPON_HPP

