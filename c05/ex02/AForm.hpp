#pragma once 
#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"


class AForm{
private:
    const std::string Name;
    bool  isSigned;
    const int Grade_sign;
    const int Grade_execute;

public:
    AForm(const std::string Name, const int grade_sign,const int  grade_exec);
    AForm& operator=(const AForm& other);
    AForm(const AForm& other);
    const std::string getName() const;
    bool getSignature() const;
    int getGradeSign()const;
    int getGradeExecute()const;
    void beSigned(Bureaucrat& bureaucrat);
    virtual void  execute(Bureaucrat const & executor)const = 0;
    ~AForm();

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

std::ostream& operator<<(std::ostream& out ,const AForm& form);
