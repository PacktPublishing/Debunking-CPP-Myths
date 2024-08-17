#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h" 
#include "composition.h"

TEST_CASE("compute price imperative"){
	int taxPercentage = 18;
	int serviceFee = 10;
	double price = 100;
	int discount = 10;

	double result = computePriceImperative(taxPercentage, serviceFee, price, discount);

	CHECK_EQ(118, result);
}

TEST_CASE("compute price with lambda"){
	int taxPercentage = 18;
	int serviceFee = 10;
	double price = 100;
	int discount = 10;

	double result = computePriceLambda(taxPercentage, serviceFee, price, discount);

	CHECK_EQ(118, result);
}

TEST_CASE("compute price functional"){
	int taxPercentage = 18;
	int serviceFee = 10;
	double price = 100;
	int discount = 10;

	auto computePriceLambda = computePriceFunctional(taxPercentage, serviceFee, price, discount);
	double result = computePriceLambda(price);

	CHECK_EQ(118, result);
}

TEST_CASE("compute price functional compile"){
	constexpr int taxPercentage = 18;
	constexpr int serviceFee = 10;
	constexpr double price = 100;
	constexpr int discount = 10;

	constexpr auto computePriceLambda = computePriceFunctionalCompile<taxPercentage, serviceFee, price, discount>();
	double result = computePriceLambda(price);

	CHECK_EQ(118, result);
}

