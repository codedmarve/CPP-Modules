/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:34:15 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/06 09:40:52 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {
    std::cout << "base destructor called" << std::endl;
}

Base *generate(void) {
	Base    *ptr;

	srand(time(NULL));
    int i = rand();
    switch(i % 3) {
        case 0:
            ptr = new A;
            std::cout << "type A created" << std::endl;
            break;
        case 1:
            ptr = new B;
            std::cout << "Type B created" << std::endl;
            break;
        case 2:
            ptr = new C;
            std::cout << "Type C created" << std::endl;
            break;
    }
    return (ptr);
}

void identify(Base *p) {
	// tries to cast the Base* pointer to an A* pointer using dynamic_cast
    A   *Aptr = dynamic_cast<A *>(p);
    B   *Bptr = dynamic_cast<B *>(p);
    C   *Cptr = dynamic_cast<C *>(p);
	// if cast succeeded (not a NULL pointer):
    if (Aptr)
        std::cout << Aptr << " - pointer of type: A" << std::endl;
    else if (Bptr)
        std::cout << Bptr << " - pointer of type: B" << std::endl;
    else if (Cptr)
        std::cout << Cptr << " - pointer of type: C" << std::endl;
    else
        std::cout << " - cannot identify pointer type" << std::endl;
}

void identify(Base &p)
{
    try { // Attempt to cast the reference to an A object
        A   &Aptr = dynamic_cast<A &>(p);
        std::cout << &Aptr << " - reference of type: A" << std::endl;
    }
    catch(std::exception &e) {
        try { // Attempt to cast the reference to an B object
            B   &Bptr = dynamic_cast<B &>(p);
            std::cout << &Bptr << " - reference of type: B" << std::endl;
        }
        catch(std::exception &e) {
            try { // Attempt to cast the reference to an C object
                C   &Cptr = dynamic_cast<C &>(p);
                std::cout << &Cptr << " - reference of type: C" << std::endl;
            }
            catch(const std::exception& e) {
				// if none of the casts succeed, object is not A, B, or C
                std::cerr << e.what() << " - cannot identify reference type" << std::endl;
            }
        }
    }
}