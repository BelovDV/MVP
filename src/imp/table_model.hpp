#pragma once

#include "model.hpp"

class TableModel : public Model {
	const std::vector<Data>& get_data() const override;
	bool changed() const override; // should be redrawn
};
