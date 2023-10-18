/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:54:03 by aankote           #+#    #+#             */
/*   Updated: 2023/10/16 18:34:40 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <stack>
#include <vector>

void tes00()
{
    MutantStack<int> mstack;

    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    mstack.push(4);

    std::cout << "\n\n___________________my stack befor delete______________\n\n";
    MutantStack<int>::iterator it = mstack.begin();
    while (it != mstack.end())
    {
        std::cout << *it << "  ";
        it++;
    }
    mstack.pop();
     std::cout << "\n\n___________________my stack after delete______________\n\n";
    it = mstack.begin();
    while (it != mstack.end())
    {
        std::cout << *it << "  ";
        it++;
    }
    std::cout << std::endl;
}

/***********test with list*************/
void test01()
{
 MutantStack<std::string, std::list<std::string> > mstack;

    mstack.push("Ahmed");
    mstack.push("Ali");
    mstack.push("Youssef");
    mstack.push("Hicham");

    MutantStack<std::string, std::list<std::string> >::iterator it = mstack.begin();
    while (it != mstack.end())
    {
        std::cout << *it << "  ";
        it++;
    }
    std::cout << std::endl;
}

void subTest()
{
    MutantStack<int, std::vector<int> > mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
    MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int, std::vector<int> > s(mstack);
}

void  testVector() {
    
    std::vector<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);
    std::vector<int>::iterator it = mstack.begin();
    std::vector<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int, std::vector<int> > s(mstack);
}

/***************************Test Objects****************************************/
class Myclass
{
    private :
        int nb;
    public :
        Myclass() : nb(0)
        {
            
        }
        Myclass(int n) : nb(n)
        {
            
        }
        int &getNb(){return (nb);}
};

std::ostream &operator<<(std::ostream &o, Myclass &my)
{
    o << my.getNb();
    return (o);
}
void testObject()
{
    MutantStack<Myclass, std::vector<Myclass> > myclass;
    myclass.push(Myclass(10));
    myclass.push(Myclass(20));
    myclass.push(Myclass(30));
    myclass.push(Myclass(40));
    
    MutantStack<Myclass, std::vector<Myclass> >::iterator it = myclass.begin();
    while (it != myclass.end())       
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
    myclass.pop();
    it = myclass.begin();
    while (it != myclass.end())       
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
}
/***************************************************************************************/

int main()
{
    
    test01();
    std::stack<int,std::list<int> > a;
//     std::cout << "n\n____________________Subject Test_________________________\n\n";
//     subTest();

//     std::cout << "\n\n____________________Test with std::vector_________________________\n\n";
//     testVector();
}