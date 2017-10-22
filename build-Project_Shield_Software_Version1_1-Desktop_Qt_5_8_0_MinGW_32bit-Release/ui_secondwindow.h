/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QPushButton *pushButton;
    QLabel *MainText;
    QLabel *Version_Text;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *User_Info;
    QTableView *tableView;
    QWidget *tab_2;
    QTableView *Device_view;
    QWidget *tab;
    QTableView *Device_security;
    QWidget *tab_3;
    QTableView *Incedent_View;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QStringLiteral("SecondWindow"));
        SecondWindow->resize(1336, 768);
        pushButton = new QPushButton(SecondWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 540, 75, 23));
        MainText = new QLabel(SecondWindow);
        MainText->setObjectName(QStringLiteral("MainText"));
        MainText->setGeometry(QRect(470, 50, 561, 31));
        QFont font;
        font.setFamily(QStringLiteral("Javanese Text"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        MainText->setFont(font);
        Version_Text = new QLabel(SecondWindow);
        Version_Text->setObjectName(QStringLiteral("Version_Text"));
        Version_Text->setGeometry(QRect(150, 30, 111, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Javanese Text"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        Version_Text->setFont(font1);
        label = new QLabel(SecondWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 191, 201));
        tabWidget = new QTabWidget(SecondWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(260, 230, 931, 271));
        User_Info = new QWidget();
        User_Info->setObjectName(QStringLiteral("User_Info"));
        tableView = new QTableView(User_Info);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 1051, 251));
        tabWidget->addTab(User_Info, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Device_view = new QTableView(tab_2);
        Device_view->setObjectName(QStringLiteral("Device_view"));
        Device_view->setGeometry(QRect(0, 0, 701, 221));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Device_security = new QTableView(tab);
        Device_security->setObjectName(QStringLiteral("Device_security"));
        Device_security->setGeometry(QRect(0, 0, 701, 201));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        Incedent_View = new QTableView(tab_3);
        Incedent_View->setObjectName(QStringLiteral("Incedent_View"));
        Incedent_View->setGeometry(QRect(0, 0, 721, 221));
        tabWidget->addTab(tab_3, QString());
        pushButton_2 = new QPushButton(SecondWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 540, 75, 23));

        retranslateUi(SecondWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QApplication::translate("SecondWindow", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SecondWindow", "ConnectDB", Q_NULLPTR));
        MainText->setText(QApplication::translate("SecondWindow", "PROJECT SHIELD SECURITY SOFTWARE", Q_NULLPTR));
        Version_Text->setText(QApplication::translate("SecondWindow", "Version1.1", Q_NULLPTR));
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(User_Info), QApplication::translate("SecondWindow", "User_Info", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SecondWindow", "Device_Info", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SecondWindow", "Device_Security", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SecondWindow", "Incident_Log", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SecondWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
