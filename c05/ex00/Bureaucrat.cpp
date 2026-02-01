#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name , int grade)
:Name(name),Grade(grade){
    if (this->Grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    if (this->Grade <1)
        throw(Bureaucrat::GradeTooHighException());
}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    this->Grade = other.Grade;
    return *this;
}

void Bureaucrat::increment_grade(){
    if (Grade <= 1)
        throw(Bureaucrat::GradeTooHighException());
    Grade--; 
}
void Bureaucrat::decrement_grade(){
    if (Grade >=150)
        throw(Bureaucrat::GradeTooLowException());
    Grade++; 
}
int Bureaucrat::getGrade()const 
{
    return(Grade);
}
std::string Bureaucrat::getName() const
{
    return (Name);
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
        this->Grade = other.Grade;
}
std::ostream& operator<<(std::ostream& out,const Bureaucrat&  b){
    
    out<<b.getName()<< ", Bureaucrat  grade " << b.getGrade()<< ".";
    return out;
}