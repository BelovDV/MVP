#pragma once

#include <string>
#include <ctime>

class Data {
	std::string text_;
	double sensor_readings_;
	time_t time_;
};

template <class Class /* should realise all resourse in destructor */>
class Holder {
public:
	explicit Holder(Class* holding);
	~Holder() { holding_->~Class(); }

	Holder(Holder&&) = default;
	Holder(const Holder&) = delete;
	Holder& operator=(Holder&&) = default;
	Holder& operator=(const Holder&) = delete;

public:
	operator Class& () { return *holding_; }

private:
	Class* holding_;
};
