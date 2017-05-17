#ifndef _HUGEINTEGER_
#define _HUGEINTEGER_
//#include <vector>
//using std::vector;

const int SIZE = 10;

class HugeInteger
{
private:
	char sign = '+';
	int number[SIZE];
	void simplifyF();
	void simplifyB();
	void reverseSign();
	int length() const;
	HugeInteger& divideBy10();
	HugeInteger& multiplyBy10();
public:
	HugeInteger();
	//HugeInteger(vector<short>);
	void input();
	void output();
	HugeInteger add(const HugeInteger&);
	HugeInteger substract(const HugeInteger&);
	bool isEqualTo(const HugeInteger&);
	bool isNotEqualTo(const HugeInteger&);
	bool isGreaterThan(const HugeInteger&);
	bool isLessThan(const HugeInteger&);
	bool isGreaterThanOrEqualTo(const HugeInteger&);
	bool isLessThanOrEqualTo(const HugeInteger&);
	bool isZero();
	HugeInteger multiply(const HugeInteger&);
	HugeInteger divide(const HugeInteger&);
	HugeInteger modulus() const;
	~HugeInteger();
};

#endif