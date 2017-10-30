/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *Version_Text;
    QLabel *MainText;
    QLabel *AddUserLabel;
    QPushButton *AddUser_Button;
    QLabel *Info_Label;
    QPushButton *LoginButton;
    QLineEdit *UserPassWord_LineEdit;
    QLineEdit *UserName_LineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1336, 768);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("QPushButton {\n"
"color:#333;\n"
"background-color: light blue;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
" QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"\n"
"QLineEdit{\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
" QLineedit:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 94, 13));
        Version_Text = new QLabel(centralWidget);
        Version_Text->setObjectName(QStringLiteral("Version_Text"));
        Version_Text->setGeometry(QRect(120, 0, 111, 41));
        QFont font;
        font.setFamily(QStringLiteral("Javanese Text"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        Version_Text->setFont(font);
        MainText = new QLabel(centralWidget);
        MainText->setObjectName(QStringLiteral("MainText"));
        MainText->setGeometry(QRect(380, 0, 841, 81));
        QFont font1;
        font1.setFamily(QStringLiteral("Javanese Text"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStyleStrategy(QFont::PreferDefault);
        MainText->setFont(font1);
        AddUserLabel = new QLabel(centralWidget);
        AddUserLabel->setObjectName(QStringLiteral("AddUserLabel"));
        AddUserLabel->setGeometry(QRect(1160, 540, 161, 71));
        AddUser_Button = new QPushButton(centralWidget);
        AddUser_Button->setObjectName(QStringLiteral("AddUser_Button"));
        AddUser_Button->setGeometry(QRect(1140, 610, 94, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        AddUser_Button->setFont(font2);
        Info_Label = new QLabel(centralWidget);
        Info_Label->setObjectName(QStringLiteral("Info_Label"));
        Info_Label->setGeometry(QRect(1240, 610, 94, 31));
        LoginButton = new QPushButton(centralWidget);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(600, 340, 171, 31));
        LoginButton->setStyleSheet(QLatin1String("\n"
"\n"
"#Mainwindow LoginButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"#Mainwindow LoginButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#Mainwindow LoginButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        UserPassWord_LineEdit = new QLineEdit(centralWidget);
        UserPassWord_LineEdit->setObjectName(QStringLiteral("UserPassWord_LineEdit"));
        UserPassWord_LineEdit->setGeometry(QRect(600, 290, 171, 31));
        UserPassWord_LineEdit->setEchoMode(QLineEdit::Password);
        UserName_LineEdit = new QLineEdit(centralWidget);
        UserName_LineEdit->setObjectName(QStringLiteral("UserName_LineEdit"));
        UserName_LineEdit->setGeometry(QRect(600, 240, 171, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1336, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LoginWindow", Q_NULLPTR));
        label->setText(QString());
        Version_Text->setText(QApplication::translate("MainWindow", "Version1.1", Q_NULLPTR));
        MainText->setText(QApplication::translate("MainWindow", "PROJECT SHIELD SECURITY SOFTWARE", Q_NULLPTR));
        AddUserLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        AddUser_Button->setText(QApplication::translate("MainWindow", "AddUser", Q_NULLPTR));
        Info_Label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LoginButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Click Login IF</p><p>UserName and Password was set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LoginButton->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        UserPassWord_LineEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Enter Password</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        UserPassWord_LineEdit->setText(QApplication::translate("MainWindow", "admin", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        UserName_LineEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Enter UserName</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        UserName_LineEdit->setText(QApplication::translate("MainWindow", "admin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
