#ifndef THINGY_HH
#define  THINGY_HH

class CSandwich
{
	float calories;
public:
	CSandwich() : calories(0f) {}
	virtual void eat();
};

class CBoloneySandwich : public CSandwich
{
public:
	CBoloneySandwitch() : calories(200f) {}
	void eat() override;
};

#endif
