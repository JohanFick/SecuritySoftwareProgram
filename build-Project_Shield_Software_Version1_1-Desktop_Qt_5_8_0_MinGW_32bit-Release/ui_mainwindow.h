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
#include <QtWidgets/QFrame>
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
    QFrame *frame;
    QLineEdit *UserName_LineEdit;
    QLineEdit *UserPassWord_LineEdit;
    QPushButton *LoginButton;
    QLabel *Info_Label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 47, 13));
        Version_Text = new QLabel(centralWidget);
        Version_Text->setObjectName(QStringLiteral("Version_Text"));
        Version_Text->setGeometry(QRect(120, 30, 111, 21));
        QFont font;
        font.setFamily(QStringLiteral("Javanese Text"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        Version_Text->setFont(font);
        MainText = new QLabel(centralWidget);
        MainText->setObjectName(QStringLiteral("MainText"));
        MainText->setGeometry(QRect(200, 60, 561, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Javanese Text"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        MainText->setFont(font1);
        AddUserLabel = new QLabel(centralWidget);
        AddUserLabel->setObjectName(QStringLiteral("AddUserLabel"));
        AddUserLabel->setGeometry(QRect(660, 440, 161, 71));
        AddUser_Button = new QPushButton(centralWidget);
        AddUser_Button->setObjectName(QStringLiteral("AddUser_Button"));
        AddUser_Button->setGeometry(QRect(660, 510, 61, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        AddUser_Button->setFont(font2);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(250, 120, 251, 301));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(240, 21, 116, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 127, 183, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 74, 149, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(120, 10, 58, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(160, 14, 77, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(247, 138, 185, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        frame->setPalette(palette);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        UserName_LineEdit = new QLineEdit(frame);
        UserName_LineEdit->setObjectName(QStringLiteral("UserName_LineEdit"));
        UserName_LineEdit->setGeometry(QRect(70, 100, 171, 20));
        UserPassWord_LineEdit = new QLineEdit(frame);
        UserPassWord_LineEdit->setObjectName(QStringLiteral("UserPassWord_LineEdit"));
        UserPassWord_LineEdit->setGeometry(QRect(70, 150, 171, 20));
        UserPassWord_LineEdit->setEchoMode(QLineEdit::Password);
        LoginButton = new QPushButton(frame);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(70, 220, 171, 31));
        Info_Label = new QLabel(centralWidget);
        Info_Label->setObjectName(QStringLiteral("Info_Label"));
        Info_Label->setGeometry(QRect(740, 510, 47, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        Version_Text->setText(QApplication::translate("MainWindow", "Version1.1", Q_NULLPTR));
        MainText->setText(QApplication::translate("MainWindow", "PROJECT SHIELD SECURITY SOFTWARE", Q_NULLPTR));
        AddUserLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        AddUser_Button->setText(QApplication::translate("MainWindow", "AddUser", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        UserName_LineEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Enter UserName</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        UserName_LineEdit->setText(QApplication::translate("MainWindow", "admin", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        UserPassWord_LineEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Enter Password</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        UserPassWord_LineEdit->setText(QApplication::translate("MainWindow", "admin", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LoginButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Click Login IF</p><p>UserName and Password was set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LoginButton->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        Info_Label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
