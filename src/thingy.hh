#ifndef THINGY_HH
#define  THINGY_HH

class CSandwich
{
public:
	virtual void eat();
};

class CBoloneySandwich : public CSandwich
{
public:
	void eat() override;
};

#endif
