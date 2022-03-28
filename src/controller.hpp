#pragma once

#include <vector>

#include "model.hpp"
#include "view.hpp"
#include "presenter.hpp"
#include "generator.hpp"

class Controller {
public:
	Controller(const Generator&);
	~Controller();

public:
	void run();

	template <class TModel /* Model implementation */>
	Controller& add_backend();

	template <class TPresenter /* Presenter */, class TView /* View impl */>
	Controller& add_frontend();

private:
	const Generator& generator_;
	std::vector<Holder<Model>> models_;
	std::vector<Holder<Presenter>> presenters_;
};
