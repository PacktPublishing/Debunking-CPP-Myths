template <int Min, int Max>
class RangedInteger{
	private:
		int theValue;

		constexpr RangedInteger(int theValue) : theValue(theValue) {}

	public:
		template <int CandidateValue>
		static constexpr RangedInteger make() {
				static_assert(CandidateValue >= Min && CandidateValue <= Max, "Value out of range.");
				return CandidateValue;
			}

		constexpr int value() const {
			return theValue;
		}
};

using Hour = RangedInteger<0, 23>;
