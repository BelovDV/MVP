#pragma once

class Presenter {
public:
	virtual ~Presenter() = default;

public:
	virtual void run() = 0;
};
