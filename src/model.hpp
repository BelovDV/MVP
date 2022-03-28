#pragma once

#include <vector>

#include "common.hpp"

class Model {
public:
	virtual ~Model() = default;

public:
	virtual const std::vector<Data>& get_data() const = 0;
	virtual bool changed() const = 0; // should be redrawn
};
