/********************************************************************************
** Form generated from reading UI file 'Widge.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGE_H
#define UI_WIDGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgeClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WidgeClass)
    {
        if (WidgeClass->objectName().isEmpty())
            WidgeClass->setObjectName(QStringLiteral("WidgeClass"));
        WidgeClass->resize(600, 400);
        menuBar = new QMenuBar(WidgeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        WidgeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WidgeClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WidgeClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(WidgeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        WidgeClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WidgeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WidgeClass->setStatusBar(statusBar);

        retranslateUi(WidgeClass);

        QMetaObject::connectSlotsByName(WidgeClass);
    } // setupUi

    void retranslateUi(QMainWindow *WidgeClass)
    {
        WidgeClass->setWindowTitle(QApplication::translate("WidgeClass", "Widge", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WidgeClass: public Ui_WidgeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGE_H
