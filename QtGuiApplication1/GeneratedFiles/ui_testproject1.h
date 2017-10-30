/********************************************************************************
** Form generated from reading UI file 'testproject1.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTPROJECT1_H
#define UI_TESTPROJECT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testproject1Class
{
public:
    QAction *actionnew;
    QAction *actionexit;
    QAction *actionopen;
    QAction *actionsave;
    QAction *actionsave_as;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menumenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testproject1Class)
    {
        if (testproject1Class->objectName().isEmpty())
            testproject1Class->setObjectName(QStringLiteral("testproject1Class"));
        testproject1Class->resize(600, 602);
        actionnew = new QAction(testproject1Class);
        actionnew->setObjectName(QStringLiteral("actionnew"));
        actionexit = new QAction(testproject1Class);
        actionexit->setObjectName(QStringLiteral("actionexit"));
        actionopen = new QAction(testproject1Class);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        actionsave = new QAction(testproject1Class);
        actionsave->setObjectName(QStringLiteral("actionsave"));
        actionsave_as = new QAction(testproject1Class);
        actionsave_as->setObjectName(QStringLiteral("actionsave_as"));
        centralWidget = new QWidget(testproject1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 130, 104, 87));
        testproject1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(testproject1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        menumenu = new QMenu(menuBar);
        menumenu->setObjectName(QStringLiteral("menumenu"));
        testproject1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testproject1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        testproject1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(testproject1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        testproject1Class->setStatusBar(statusBar);

        menuBar->addAction(menumenu->menuAction());
        menumenu->addAction(actionnew);
        menumenu->addAction(actionexit);
        menumenu->addAction(actionopen);
        menumenu->addAction(actionsave);
        menumenu->addAction(actionsave_as);

        retranslateUi(testproject1Class);

        QMetaObject::connectSlotsByName(testproject1Class);
    } // setupUi

    void retranslateUi(QMainWindow *testproject1Class)
    {
        testproject1Class->setWindowTitle(QApplication::translate("testproject1Class", "testproject1", Q_NULLPTR));
        actionnew->setText(QApplication::translate("testproject1Class", "new", Q_NULLPTR));
        actionexit->setText(QApplication::translate("testproject1Class", "exit", Q_NULLPTR));
        actionopen->setText(QApplication::translate("testproject1Class", "open", Q_NULLPTR));
        actionsave->setText(QApplication::translate("testproject1Class", "save", Q_NULLPTR));
        actionsave_as->setText(QApplication::translate("testproject1Class", "save as", Q_NULLPTR));
        menumenu->setTitle(QApplication::translate("testproject1Class", "menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class testproject1Class: public Ui_testproject1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTPROJECT1_H
