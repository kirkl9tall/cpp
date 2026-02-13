/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:29:43 by abismail          #+#    #+#             */
/*   Updated: 2026/02/11 11:15:11 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){
    srand(time(NULL));
    int ran = rand() % 3;
    Base *r;
    if(ran == 0)
        r = new A;
    else if(ran == 1)
        r = new B;   
    else
        r = new C;
    return r;
}

void identify(Base* p){
    if(A *a = dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if(B *b = dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if(C *c = dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "base" << std::endl;
}

void identify(Base& p){
    //a
    try{
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast &e){}
    //b
    try{
        B &b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::bad_cast &e){}
    //c
    try{
        C &c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::bad_cast &e){}
}

int main(){
    Base *p = generate(); //
    identify(p);
    identify(*p);
    delete p;
}