////////////////////////////////////////////////////////////////////////////////
// 	Source File	:	helloworldTest.cpp
//	Author			: DWolf
//  Date				: 17 Aug 2019
//	Version			: 008-HelloWorld.git
//
//	Description	: GoogleTests Unit tests for "src/helloworld/helloworld.cpp"
///////////////////////////////////////80///////////////////////////////////////

#include "../include/helloworld.hpp"
#include <gtest/gtest.h>

class HelloWorldTests : public ::testing::Test{
	public:
	unsigned iterations, testValue = 0;

	protected:
		RepeatableMesseges helloworld;
		};

TEST_F(HelloWorldTests, CanCallHelloWorld8Times)
{
	testValue = 8;
	iterations = helloworld.helloWorld(testValue);
	EXPECT_EQ(iterations, testValue);
}
TEST_F(HelloWorldTests, CanCallHelloWorld9Times)
{
	testValue = 9;
	iterations = helloworld.helloWorld(testValue);
	EXPECT_EQ(iterations, testValue);
}

TEST_F(HelloWorldTests, WillFailWhenCallingHelloWorld10Times)
{
	testValue = 10;
	iterations = helloworld.helloWorld(testValue);
	EXPECT_EQ(iterations, EXIT_FAILURE);
}


