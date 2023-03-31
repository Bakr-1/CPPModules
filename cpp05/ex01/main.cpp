# include "Bureaucrat.hpp"
# include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b("Bureaucrat", 1);
        Form f("Form", 1, 1);
        b.signForm(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat b("Bureau", 150);
        Form f("Mag", 2, 1);
        b.signForm(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
