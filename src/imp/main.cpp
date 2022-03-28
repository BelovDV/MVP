#include "controller.hpp"
#include "stat_presenter.hpp"
#include "table_presenter.hpp"
#include "table_model.hpp"

int main() {
	Generator generator;
	Controller controller(generator);
	controller
		.add_backend<TableModel>()
		.add_frontend<StatPresenter, StatView>()
		.add_frontend<TablePresenter, TableView>()
		;
	controller.run();
}
