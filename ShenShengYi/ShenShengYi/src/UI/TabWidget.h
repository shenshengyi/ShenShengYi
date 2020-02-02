#pragma once

#include <QWidget>
#include "ui_TabWidget.h"
#include <vector>

namespace SSY
{
	class ClassTree;

	class TabWidget : public QTabWidget
	{
		Q_OBJECT

	public:
		TabWidget(QWidget* parent = Q_NULLPTR);
		~TabWidget();

	private:
		void Init(void);

		std::vector<ClassTree*> _veClassTree;
		Ui::TabWidget ui;
	};
}
