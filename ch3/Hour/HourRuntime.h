class Hour{
	private:
		int theValue;


		void setValue(int candidateValue) {
			if(candidateValue >= 0 && candidateValue <= 23){
				theValue = candidateValue;

			}
			else{
				throw std::out_of_range("Value out of range");
			}
		}

	public:

		Hour(int theValue){
			setValue(theValue);
		} 
		int value() const {
			return theValue;
		}
};
