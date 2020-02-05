#pragma once

#include <QWidget>
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
	private slots:
		void ClickedEvent(QTreeWidgetItem* item, int column);
	private:
		void Init(void);

		std::vector<ClassTree*> _veClassTree;
	};
}
