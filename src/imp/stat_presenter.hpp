#pragma once

#include "presenter.hpp"
#include "stat_view.hpp"
#include "model.hpp"

class StatPresenter : public Presenter {
public:
	StatPresenter(StatView& view, Model& model);

public:
	void run() override;

private:
	Holder<StatView> view_;
	Model& model_;
};
