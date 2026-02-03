#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>
    ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("VERSAILLE",145,137){
        this->target = target;
    }
    void ShrubberyCreationForm::execute(Bureaucrat const & executor)const{
        if (this->getSignature() == 0 )
            throw ShrubberyCreationForm::GradeTooLowException();
        if (this->getGradeExecute() >= executor.getGrade()){
            std::string  out = target+"_shrubbery";
            std::ofstream fl(out.c_str());
            if(!fl.is_open())
                return;
            fl << "     _-_" << std::endl;
            fl << "  /~~   ~~\\" << std::endl;
            fl << " /~~       ~~\\" << std::endl;
            fl << "{             }" << std::endl;
            fl << " \\  _- _-  /" << std::endl;
            fl << "  ~\\\\  ////  ~" << std::endl;
            fl << "_- -  |  |_- _" << std::endl;
            fl << "  _ - |  |  -_" << std::endl;
            fl << "    //// \\\\" << std::endl;
            fl.close();
        }
        else
            throw ShrubberyCreationForm::GradeTooLowException();
    }
    ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):AForm("VERSAILLE",145,137){
            this->target = other.target;
    }

    ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
            this->target = other.target;
            return *this;
    }
    
    ShrubberyCreationForm::~ShrubberyCreationForm(){

    }

