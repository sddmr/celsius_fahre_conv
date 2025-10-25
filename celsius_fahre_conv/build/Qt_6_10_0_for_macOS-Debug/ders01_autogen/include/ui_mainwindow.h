/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionas;
    QWidget *centralwidget;
    QPushButton *ctofbutton;
    QPushButton *ftocbutton;
    QLabel *label;
    QTextEdit *inputedit;
    QLabel *value;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(540, 331);
        actionas = new QAction(MainWindow);
        actionas->setObjectName("actionas");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ctofbutton = new QPushButton(centralwidget);
        ctofbutton->setObjectName("ctofbutton");
        ctofbutton->setGeometry(QRect(240, 60, 100, 32));
        ctofbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;       /* Mavi arka plan */\n"
"    color: white;                    /* Beyaz yaz\304\261 */\n"
"    border-radius: 10px;             /* K\303\266\305\237eleri yuvarla */\n"
"    font-size: 16px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;       /* \303\234zerine gelince koyu mavi */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1f5a85;       /* Bas\304\261l\304\261yken daha koyu */\n"
"}\n"
""));
        ftocbutton = new QPushButton(centralwidget);
        ftocbutton->setObjectName("ftocbutton");
        ftocbutton->setGeometry(QRect(240, 150, 100, 32));
        ftocbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;       /* Mavi arka plan */\n"
"    color: white;                    /* Beyaz yaz\304\261 */\n"
"    border-radius: 10px;             /* K\303\266\305\237eleri yuvarla */\n"
"    font-size: 16px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;       /* \303\234zerine gelince koyu mavi */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1f5a85;       /* Bas\304\261l\304\261yken daha koyu */\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 110, 58, 16));
        inputedit = new QTextEdit(centralwidget);
        inputedit->setObjectName("inputedit");
        inputedit->setGeometry(QRect(100, 100, 104, 41));
        value = new QLabel(centralwidget);
        value->setObjectName("value");
        value->setGeometry(QRect(380, 110, 131, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 540, 36));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "celsius_fahre_conv", nullptr));
        actionas->setText(QCoreApplication::translate("MainWindow", "as", nullptr));
        ctofbutton->setText(QCoreApplication::translate("MainWindow", "C to F", nullptr));
        ftocbutton->setText(QCoreApplication::translate("MainWindow", "F to C", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Value:", nullptr));
        value->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
