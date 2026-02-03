#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string name, const int grade_sign,const int  grade_exec):Name(name),Grade_sign(grade_sign),Grade_execute(grade_exec)
{
    isSigned  = false;

}
AForm& AForm::operator=(const AForm& other){
    
    isSigned = other.isSigned;
    return *this;
}
AForm::AForm(const AForm& other):Name(other.Name),isSigned(other.isSigned),Grade_sign(other.Grade_sign),Grade_execute(other.Grade_execute)
{
    
}
const std::string AForm::getName()const {
    return (Name);
}

bool AForm::getSignature()const{
    return (isSigned);
}

int AForm::getGradeSign()const {
    return (Grade_sign);
}

int AForm::getGradeExecute()const {
    return (Grade_execute);
}
void AForm::beSigned(Bureaucrat& bureaucrat)
{
    if(bureaucrat.getGrade()> Grade_sign)
        throw AForm::GradeTooLowException();
    this->isSigned = true;
}


std::ostream& operator<<(std::ostream& out ,const AForm& form)
{
    out << "Form : " <<form.getName() <<std::endl << "signed : " <<form.getSignature()<<std::endl
    << "with signed grade : "<< form.getGradeSign() << std::endl << "execution Grade : " <<form.getGradeExecute(); 
    return out;
}

AForm::~AForm(){
    // std::cout << "contract  done !" << std::endl;
}