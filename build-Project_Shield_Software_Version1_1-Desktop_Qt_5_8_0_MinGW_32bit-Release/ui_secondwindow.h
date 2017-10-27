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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
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
    QFrame *frame;
    QLabel *labeInstructions;
    QLabel *labelInstructionstext;
    QPushButton *ButtonDone;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QLabel *labelName;
    QLabel *labelSurname;
    QLabel *labelTown;
    QLabel *labelStreetAdress;
    QLabel *labelAge;
    QLabel *labelSex;
    QLabel *labelContactNumber;
    QLabel *labelAlternateNumber;
    QLabel *labelEmalAdress;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QStringLiteral("SecondWindow"));
        SecondWindow->resize(1336, 768);
        SecondWindow->setStyleSheet(QLatin1String("QDialog{\n"
"background-image: url(\":/Logo/grass.jpg\");\n"
"}\n"
"\n"
"QLabel{\n"
"\n"
"\n"
"}"));
        pushButton = new QPushButton(SecondWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 480, 75, 23));
        MainText = new QLabel(SecondWindow);
        MainText->setObjectName(QStringLiteral("MainText"));
        MainText->setGeometry(QRect(530, 80, 561, 31));
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
        tabWidget->setGeometry(QRect(530, 140, 691, 271));
        User_Info = new QWidget();
        User_Info->setObjectName(QStringLiteral("User_Info"));
        tableView = new QTableView(User_Info);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 691, 251));
        tabWidget->addTab(User_Info, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Device_view = new QTableView(tab_2);
        Device_view->setObjectName(QStringLiteral("Device_view"));
        Device_view->setGeometry(QRect(0, 0, 691, 251));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Device_security = new QTableView(tab);
        Device_security->setObjectName(QStringLiteral("Device_security"));
        Device_security->setGeometry(QRect(0, 0, 691, 251));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        Incedent_View = new QTableView(tab_3);
        Incedent_View->setObjectName(QStringLiteral("Incedent_View"));
        Incedent_View->setGeometry(QRect(0, 0, 691, 251));
        tabWidget->addTab(tab_3, QString());
        pushButton_2 = new QPushButton(SecondWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(630, 480, 75, 23));
        frame = new QFrame(SecondWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(80, 140, 411, 411));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        labeInstructions = new QLabel(frame);
        labeInstructions->setObjectName(QStringLiteral("labeInstructions"));
        labeInstructions->setGeometry(QRect(10, 230, 111, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(true);
        font2.setWeight(75);
        labeInstructions->setFont(font2);
        labelInstructionstext = new QLabel(frame);
        labelInstructionstext->setObjectName(QStringLiteral("labelInstructionstext"));
        labelInstructionstext->setGeometry(QRect(0, 260, 381, 101));
        QFont font3;
        font3.setPointSize(10);
        labelInstructionstext->setFont(font3);
        ButtonDone = new QPushButton(frame);
        ButtonDone->setObjectName(QStringLiteral("ButtonDone"));
        ButtonDone->setGeometry(QRect(150, 380, 75, 23));
        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 0, 459, 219));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelTitle = new QLabel(widget);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        labelTitle->setFont(font4);

        verticalLayout->addWidget(labelTitle);

        labelName = new QLabel(widget);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setFont(font3);

        verticalLayout->addWidget(labelName);

        labelSurname = new QLabel(widget);
        labelSurname->setObjectName(QStringLiteral("labelSurname"));
        labelSurname->setFont(font3);

        verticalLayout->addWidget(labelSurname);

        labelTown = new QLabel(widget);
        labelTown->setObjectName(QStringLiteral("labelTown"));
        labelTown->setFont(font3);

        verticalLayout->addWidget(labelTown);

        labelStreetAdress = new QLabel(widget);
        labelStreetAdress->setObjectName(QStringLiteral("labelStreetAdress"));
        labelStreetAdress->setFont(font3);

        verticalLayout->addWidget(labelStreetAdress);

        labelAge = new QLabel(widget);
        labelAge->setObjectName(QStringLiteral("labelAge"));
        labelAge->setFont(font3);

        verticalLayout->addWidget(labelAge);

        labelSex = new QLabel(widget);
        labelSex->setObjectName(QStringLiteral("labelSex"));
        labelSex->setFont(font3);

        verticalLayout->addWidget(labelSex);

        labelContactNumber = new QLabel(widget);
        labelContactNumber->setObjectName(QStringLiteral("labelContactNumber"));
        labelContactNumber->setFont(font3);

        verticalLayout->addWidget(labelContactNumber);

        labelAlternateNumber = new QLabel(widget);
        labelAlternateNumber->setObjectName(QStringLiteral("labelAlternateNumber"));
        labelAlternateNumber->setFont(font3);

        verticalLayout->addWidget(labelAlternateNumber);

        labelEmalAdress = new QLabel(widget);
        labelEmalAdress->setObjectName(QStringLiteral("labelEmalAdress"));
        labelEmalAdress->setFont(font3);

        verticalLayout->addWidget(labelEmalAdress);


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
        labeInstructions->setText(QApplication::translate("SecondWindow", "Instructions", Q_NULLPTR));
        labelInstructionstext->setText(QString());
        ButtonDone->setText(QApplication::translate("SecondWindow", "Done", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SecondWindow", "                   EMERGENCY INFORMATION", Q_NULLPTR));
        labelName->setText(QString());
        labelSurname->setText(QString());
        labelTown->setText(QString());
        labelStreetAdress->setText(QString());
        labelAge->setText(QString());
        labelSex->setText(QString());
        labelContactNumber->setText(QString());
        labelAlternateNumber->setText(QString());
        labelEmalAdress->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
