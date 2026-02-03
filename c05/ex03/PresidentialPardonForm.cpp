#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"


    PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("VERSAILLE",25,5){
        this->target = target;
    }
    void PresidentialPardonForm::execute(Bureaucrat const & executor)const{
        if (this->getSignature() == 0 )
            throw PresidentialPardonForm::GradeTooLowException();
        if (this->getGradeExecute() >= executor.getGrade()){
            std::cout << target << " has been pardoned by Zaphod Beeblebrox. "<<std::endl;
        }
        else
            throw PresidentialPardonForm::GradeTooLowException();
    }

    PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):AForm("VERSAILLE",145,137){
            this->target = other.target;
    }

    PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
            this->target = other.target;
            return *this;
    }
    
    PresidentialPardonForm::~PresidentialPardonForm(){

    }