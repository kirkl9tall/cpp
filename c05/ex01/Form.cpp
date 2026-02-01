#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, const int grade_sign,const int  grade_exec):Name(name),Grade_sign(grade_sign),Grade_execute(grade_exec)
{
    isSigned  = false;

}
Form::Form(const Form& other):Name(other.Name),isSigned(other.isSigned),Grade_sign(other.Grade_sign),Grade_execute(other.Grade_execute)
{

}
Form& Form::operator=(const Form& other){
    
    isSigned = other.isSigned;
    return *this;
}

const std::string Form::getName()const {
    return (Name);
}

bool Form::getSignature()const{
    return (isSigned);
}

int Form::getGradeSign()const {
    return (Grade_sign);
}

int Form::getGradeExecute()const {
    return (Grade_execute);
}
void Form::beSigned(Bureaucrat& bureaucrat)
{
    if(bureaucrat.getGrade()> Grade_sign)
        throw Form::GradeTooLowException();
    this->isSigned = true;
}


std::ostream& operator<<(std::ostream& out ,const Form& form)
{
    out << "Form : " <<form.getName() <<std::endl << "signed : " <<form.getSignature()<<std::endl
    << "with signed grade : "<< form.getGradeSign() << std::endl << "execution Grade : " <<form.getGradeExecute(); 
    return out;
}

Form::~Form(){
    // std::cout << "contract  done !" << std::endl;
}

