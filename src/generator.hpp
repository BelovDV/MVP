#pragma once

#include "common.hpp"

class Generator {
public:
	Generator() = default;

public:
	template <class TView /* View implementation */>
	Holder<TView> generate_view() const;

	template <class TPresenter /* Presenter implementation */>
	Holder<TPresenter> generate_presenter() const;

	template <class TModel /* Model implementation */>
	Holder<TModel> generate_presenter() const;
};
