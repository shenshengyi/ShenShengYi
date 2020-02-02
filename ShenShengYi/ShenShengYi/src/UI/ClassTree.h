#pragma once

#include <QWidget>
#include "ui_ClassTree.h"

namespace SSY
{
	class ClassTree : public QTreeWidget
	{
		Q_OBJECT

	public:
		ClassTree(QWidget* parent = Q_NULLPTR);
		~ClassTree(void);
		virtual QString GetClassName(void)const;
		virtual void UpdateData(void);
	private:
		void Init(void);

		const QString _classType;
		Ui::ClassTree ui;
	};

	class ArtsClassTree :public ClassTree
	{
		Q_OBJECT
	public:
		ArtsClassTree(QWidget* parent = Q_NULLPTR);
		~ArtsClassTree(void);
		QString GetClassName(void)const override;
		void UpdateData(void)override;
	private:
		const QString _classType;
	};

	class ScienceClassTree :public ClassTree
	{
		Q_OBJECT
	public:
		ScienceClassTree(QWidget* parent = Q_NULLPTR);
		~ScienceClassTree(void);
		QString GetClassName(void)const override;
		void UpdateData(void)override;
	private:
		const QString _classType;
	};
}
