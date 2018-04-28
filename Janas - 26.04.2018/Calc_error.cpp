#include "Calc_error.h"
#include <iostream>

void Calc_error::handler()
{
	try
	{
		throw;
	}
	catch(std::runtime_error* wyjatek)
	{
		std::cout<<" Zlapano wyjatek: "<<std::endl;
		Calc_error* temp = dynamic_cast<Calc_error*> (wyjatek);
		
		while (temp)
		{

			std::cout<<" -- z powodu: ";
			std::cout<<temp->what()<<std::endl;
			Calc_error* temp2 = temp;
			temp = dynamic_cast<Calc_error*>(temp->m_rzuconyWyjatek);
			if (temp==nullptr)
			{
				std::cout<<" -- z powodu: ";
				std::cout<<temp2->m_rzuconyWyjatek->what()<<std::endl;
				delete temp2->m_rzuconyWyjatek;
			}
			delete temp2;
		}

	}
	
}