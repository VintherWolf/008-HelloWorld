////////////////////////////////////////////////////////////////////////////////
// 	Source File	:	helloworld.cpp
//	Author			: DWolf
//  Date				: 17 Aug 2019
//	Version			: 0.01
//
//	Description	:
///////////////////////////////////////80///////////////////////////////////////

#include "../../include/helloworld.hpp"
#include <iostream>
#include <cstdlib>
/*
StaticRepeatableMesseges::StaticRepeatableMesseges()

StaticRepeatableMesseges::~StaticRepeatableMesseges(){

}*/

unsigned RepeatableMesseges::helloWorld(unsigned repetitions) {
			unsigned iterations = 0;
#define MAXREPETITIONS 9
			if(repetitions > MAXREPETITIONS){
				std::cout << "Bad input" << std::endl;
				std::cout << "Usage is helloWorld(repetitions) where" << std::endl;
				std::cout << "repetitions is a digit in range 1-9" << std::endl;
				return EXIT_FAILURE;
			}

			for (; iterations < repetitions; iterations++)
				std::cout << " !!Hello World!! " << std::endl;
			return iterations;
		};
