#pragma once

#include "presenter.hpp"
#include "table_view.hpp"
#include "model.hpp"

class TablePresenter : public Presenter {
public:
	TablePresenter(TableView& view, Model& model);

public:
	void run() override;

private:
	Holder<TableView> view_;
	Model& model_;
};
