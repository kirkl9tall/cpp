#pragma once 

#include <iostream>
#include <exception>
#include <string>
// #include  "Form.hpp"

class AForm;

class Bureaucrat{
private:
    const std::string Name;
    int Grade;
public:
    Bureaucrat(std::string name,int grade);
    Bureaucrat& operator=(const Bureaucrat& other);
    Bureaucrat(const Bureaucrat& other);
    // geter_seter 
    std::string getName()const;
    int getGrade ()const;
    void increment_grade();
    void decrement_grade();
    void signForm(AForm& form);
    void executeForm(AForm const & form) const;
    ~Bureaucrat();

    class GradeTooHighException:public std::exception{
    public:
        const char* what() const throw()
        {
            return "Grade too High";
        }
    };

    class GradeTooLowException:public std::exception{
    public:
        const char* what() const throw()
        {
            return "Grade too Low";
        }
    };
};

std::ostream& operator<<(std::ostream& out,const Bureaucrat&  b);
