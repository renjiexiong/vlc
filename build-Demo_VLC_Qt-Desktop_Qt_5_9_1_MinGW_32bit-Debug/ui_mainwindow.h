/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *lB_Path;
    QPushButton *pushButton;
    QPushButton *pB_Open;
    QLabel *label;
    QPushButton *pB_Stop;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(722, 508);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lB_Path = new QLabel(centralWidget);
        lB_Path->setObjectName(QStringLiteral("lB_Path"));
        lB_Path->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(lB_Path, 0, 0, 1, 3);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        pB_Open = new QPushButton(centralWidget);
        pB_Open->setObjectName(QStringLiteral("pB_Open"));

        gridLayout->addWidget(pB_Open, 0, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(24);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 0);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 4);

        pB_Stop = new QPushButton(centralWidget);
        pB_Stop->setObjectName(QStringLiteral("pB_Stop"));

        gridLayout->addWidget(pB_Stop, 2, 3, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        lB_Path->setText(QApplication::translate("MainWindow", "Please enter \"Open\"", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "play", Q_NULLPTR));
        pB_Open->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Please enter \"play\"", Q_NULLPTR));
        pB_Stop->setText(QApplication::translate("MainWindow", "stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
