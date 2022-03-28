#pragma once

#include "view.hpp"
#include "common.hpp"

class StatView : public View {
public:
	virtual void set_stat(size_t database_size) = 0;
};
