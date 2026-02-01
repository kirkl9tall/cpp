#pragma once 
#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

// class Bureaucrat;

class Form{
private:
    const std::string Name;
    bool  isSigned;
    const int Grade_sign;
    const int Grade_execute;

public:
    Form(const std::string Name, const int grade_sign,const int  grade_exec);
    Form& operator=(const Form& other);
    Form(const Form& other);
    const std::string getName() const;
    bool getSignature() const;
    int getGradeSign()const;
    int getGradeExecute()const;
    void beSigned(Bureaucrat& bureaucrat);
    ~Form();

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

std::ostream& operator<<(std::ostream& out ,const Form& form);
// {
//     out << "Form : " <<form.getName() <<std::endl << "signed : " <<form.getSignature()<<std::endl
//     << "with signed grade : "<< form.getGradeSign() << std::endl << "execution Grade : " <<form.getGradeExecute(); 
//     return out;
// }