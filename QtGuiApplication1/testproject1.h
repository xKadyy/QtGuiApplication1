#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_testproject1.h"
#include "qdatetime.h"

class testproject1 : public QMainWindow
{
	Q_OBJECT

public:
	testproject1(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_actionnew_triggered();
	void on_actionexit_triggered();
	void on_actionopen_triggered();
	void on_actionsave_triggered();
	void on_actionsave_as_triggered();
	void time();


private:
	Ui::testproject1Class ui;
	QString currentFile;
	
};
