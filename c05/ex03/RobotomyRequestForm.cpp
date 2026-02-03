#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
    RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("VERSAILLE",72,45){
        this->target = target;
    }
    void RobotomyRequestForm::execute(Bureaucrat const & executor)const{
        if (this->getSignature() == 0 )
            throw RobotomyRequestForm::GradeTooLowException();
        if (this->getGradeExecute() >= executor.getGrade()){

            std::cout << "dzzzz.... !"<<std::endl;
            srand(time(NULL));
            int a =  rand();

            if (a % 2 == 0)
            {
                std::cout << target << " has been robotomized successfully "<<std::endl;
            }
            else{
                std::cout << target << " the robotomy failed "<<std::endl;
            } 
        }
        else
            throw RobotomyRequestForm::GradeTooLowException();
    }
    RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):AForm("VERSAILLE",145,137){
            this->target = other.target;
    }

    RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
            this->target = other.target;
            return *this;
    }
    
    RobotomyRequestForm::~RobotomyRequestForm(){

    }