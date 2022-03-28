#pragma once

#include "view.hpp"
#include "common.hpp"

#include <vector>

class TableView : public View {
public:
	virtual void set_data(const std::vector<Data>&) = 0;
};
