#include <functional>

double computePriceImperative(const int taxPercentage, const int serviceFee, const double price, const int discount){
	return (price - discount + serviceFee) * (1 + (static_cast<double>(taxPercentage) / 100));
}

auto discountPrice = [](const double price, const int discount){return price - discount;};

auto addServiceFee = [](const double price, const int serviceFee){ return price + serviceFee; };

auto applyTax = [](const double price, const int taxPercentage){ return price * (1 + static_cast<double>(taxPercentage)/100); };

auto computePriceLambda = [](const int taxPercentage, const int serviceFee, const double price, const int discount){
	return applyTax(addServiceFee(discountPrice(price, discount), serviceFee), taxPercentage);
};

template <class F, class G> 
constexpr auto compose(F f, G g){ 
  return [=](auto value){return f(g(value));}; 
}

auto computePriceFunctional(const int taxPercentage, const int serviceFee, const double price, const int discount){
	using std::bind;
	using std::placeholders::_1;

	auto discountLambda = bind(discountPrice, _1, discount);
	auto serviceFeeLambda = bind(addServiceFee, _1, serviceFee);
	auto applyTaxLambda = bind(applyTax, _1, taxPercentage);
	return compose( applyTaxLambda, compose(serviceFeeLambda, discountLambda));
}

constexpr auto discountPriceCompile = [](const double price, const int discount){return price - discount;};

constexpr auto addServiceFeeCompile = [](const double price, const int serviceFee){ return price + serviceFee; };

constexpr auto applyTaxCompile = [](const double price, const int taxPercentage){ return price * (1 + static_cast<double>(taxPercentage)/100); };


template<int taxPercentage, int serviceFee, double price, int discount>
constexpr auto computePriceFunctionalCompile() {
	using std::bind;
	using std::placeholders::_1;

	constexpr auto discountLambda = bind(discountPrice, _1, discount);
	constexpr auto serviceFeeLambda = bind(addServiceFee, _1, serviceFee);
	constexpr auto applyTaxLambda = bind(applyTax, _1, taxPercentage);
	return compose( applyTaxLambda, compose(serviceFeeLambda, discountLambda));
}
