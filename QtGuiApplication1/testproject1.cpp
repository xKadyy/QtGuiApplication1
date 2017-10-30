#include "testproject1.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

testproject1::testproject1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void testproject1::on_actionnew_triggered()
{
	currentFile = "";
	ui.textEdit->setText("");
}

void testproject1::on_actionexit_triggered()
{
	QCoreApplication::quit();
}

void testproject1::on_actionopen_triggered()
{
	QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
	QFile file(fileName);
	currentFile = fileName;
	if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
		QMessageBox::warning(this, "..", "File not opened.");
		return;
	}
	QTextStream in(&file);
	QString text = in.readAll();
	ui.textEdit->setText(text);
	file.close();
}

void testproject1::on_actionsave_triggered()
{
	QFile file(currentFile);
	if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
		QMessageBox::warning(this, "..", "No file opened. Use Save As");
		return;
	}
	QTextStream out(&file);
	QString text = ui.textEdit->toPlainText();
	out << text;
	file.flush();
	file.close();
}

void testproject1::on_actionsave_as_triggered()
{
	QString fileName = QFileDialog::getSaveFileName(this, "Save as");
	QFile file(fileName);
	currentFile = fileName;
	if (!file.open(QFile::WriteOnly | QFile::Text)) {
		QMessageBox::warning(this, "..", "File not opened.");
		return;
	}
	QTextStream out(&file);
	QString text = ui.textEdit->toPlainText();
	out << text;
	file.flush();
	file.close();
}