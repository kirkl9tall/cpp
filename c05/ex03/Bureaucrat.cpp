#include "Bureaucrat.hpp"
#include "AForm.hpp"
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

std::ostream& operator<<(std::ostream& out,const Bureaucrat&  b){
    
    out<<b.getName()<< ", bureaucrat grade " << b.getGrade()<< ".";
    return out;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
        this->Grade = other.Grade;
}

void Bureaucrat::signForm(AForm& form){
    try{
        form.beSigned(*this);
        std::cout << this->getName()<<" signed "<< form.getName()<< std::endl;
    }
    catch(std::exception& f) {
        std::cout << this->getName()<<" couldn't sign "<< form.getName()<< " because " << f.what()<< std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) const{
try{
        form.execute(*this);
        std::cout << this->getName()<<" executed  "<< form.getName()<< std::endl;
    }
    catch(std::exception& f) {
        std::cout << this->getName()<<" couldn't execute !"<< form.getName()<< " because " << f.what()<< std::endl;
    }
}