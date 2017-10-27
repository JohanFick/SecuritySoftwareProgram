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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *AddCustomerButton;
    QFrame *AddCustomerFrame;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelAddUser;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAddName;
    QLineEdit *textEditName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelAddSurname;
    QLineEdit *textEditSurname;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelAddTown;
    QLineEdit *textEditTown;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAddStreetAddress;
    QLineEdit *textEditStreetAddress;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelAddAge;
    QLineEdit *textEditAge;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelAddSex;
    QLineEdit *textEditSex;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelAddContactNumber;
    QLineEdit *textEditContactNumber;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelAddAlternateNumber;
    QLineEdit *textEditAlterNumber;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelAddEmailAdress;
    QLineEdit *textEditEmailAddress;

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
        pushButton->setGeometry(QRect(530, 480, 91, 31));
        MainText = new QLabel(SecondWindow);
        MainText->setObjectName(QStringLiteral("MainText"));
        MainText->setGeometry(QRect(510, 30, 561, 31));
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
        tabWidget->setGeometry(QRect(510, 110, 691, 271));
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
        pushButton_2->setGeometry(QRect(630, 480, 91, 31));
        frame = new QFrame(SecondWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(80, 170, 411, 411));
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

        AddCustomerButton = new QPushButton(SecondWindow);
        AddCustomerButton->setObjectName(QStringLiteral("AddCustomerButton"));
        AddCustomerButton->setGeometry(QRect(740, 480, 101, 31));
        AddCustomerFrame = new QFrame(SecondWindow);
        AddCustomerFrame->setObjectName(QStringLiteral("AddCustomerFrame"));
        AddCustomerFrame->setGeometry(QRect(480, 120, 471, 301));
        AddCustomerFrame->setFrameShape(QFrame::StyledPanel);
        AddCustomerFrame->setFrameShadow(QFrame::Raised);
        widget1 = new QWidget(AddCustomerFrame);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(90, 10, 231, 272));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelAddUser = new QLabel(widget1);
        labelAddUser->setObjectName(QStringLiteral("labelAddUser"));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        labelAddUser->setFont(font5);

        verticalLayout_3->addWidget(labelAddUser);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelAddName = new QLabel(widget1);
        labelAddName->setObjectName(QStringLiteral("labelAddName"));
        QFont font6;
        font6.setBold(true);
        font6.setWeight(75);
        labelAddName->setFont(font6);

        horizontalLayout->addWidget(labelAddName);

        textEditName = new QLineEdit(widget1);
        textEditName->setObjectName(QStringLiteral("textEditName"));

        horizontalLayout->addWidget(textEditName);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelAddSurname = new QLabel(widget1);
        labelAddSurname->setObjectName(QStringLiteral("labelAddSurname"));
        labelAddSurname->setFont(font6);

        horizontalLayout_2->addWidget(labelAddSurname);

        textEditSurname = new QLineEdit(widget1);
        textEditSurname->setObjectName(QStringLiteral("textEditSurname"));

        horizontalLayout_2->addWidget(textEditSurname);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelAddTown = new QLabel(widget1);
        labelAddTown->setObjectName(QStringLiteral("labelAddTown"));
        labelAddTown->setFont(font6);

        horizontalLayout_3->addWidget(labelAddTown);

        textEditTown = new QLineEdit(widget1);
        textEditTown->setObjectName(QStringLiteral("textEditTown"));

        horizontalLayout_3->addWidget(textEditTown);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelAddStreetAddress = new QLabel(widget1);
        labelAddStreetAddress->setObjectName(QStringLiteral("labelAddStreetAddress"));
        labelAddStreetAddress->setFont(font6);

        horizontalLayout_4->addWidget(labelAddStreetAddress);

        textEditStreetAddress = new QLineEdit(widget1);
        textEditStreetAddress->setObjectName(QStringLiteral("textEditStreetAddress"));

        horizontalLayout_4->addWidget(textEditStreetAddress);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelAddAge = new QLabel(widget1);
        labelAddAge->setObjectName(QStringLiteral("labelAddAge"));
        labelAddAge->setFont(font6);

        horizontalLayout_5->addWidget(labelAddAge);

        textEditAge = new QLineEdit(widget1);
        textEditAge->setObjectName(QStringLiteral("textEditAge"));

        horizontalLayout_5->addWidget(textEditAge);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelAddSex = new QLabel(widget1);
        labelAddSex->setObjectName(QStringLiteral("labelAddSex"));
        labelAddSex->setFont(font6);

        horizontalLayout_6->addWidget(labelAddSex);

        textEditSex = new QLineEdit(widget1);
        textEditSex->setObjectName(QStringLiteral("textEditSex"));

        horizontalLayout_6->addWidget(textEditSex);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        labelAddContactNumber = new QLabel(widget1);
        labelAddContactNumber->setObjectName(QStringLiteral("labelAddContactNumber"));
        labelAddContactNumber->setFont(font6);

        horizontalLayout_7->addWidget(labelAddContactNumber);

        textEditContactNumber = new QLineEdit(widget1);
        textEditContactNumber->setObjectName(QStringLiteral("textEditContactNumber"));

        horizontalLayout_7->addWidget(textEditContactNumber);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        labelAddAlternateNumber = new QLabel(widget1);
        labelAddAlternateNumber->setObjectName(QStringLiteral("labelAddAlternateNumber"));
        labelAddAlternateNumber->setFont(font6);

        horizontalLayout_8->addWidget(labelAddAlternateNumber);

        textEditAlterNumber = new QLineEdit(widget1);
        textEditAlterNumber->setObjectName(QStringLiteral("textEditAlterNumber"));

        horizontalLayout_8->addWidget(textEditAlterNumber);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        labelAddEmailAdress = new QLabel(widget1);
        labelAddEmailAdress->setObjectName(QStringLiteral("labelAddEmailAdress"));
        labelAddEmailAdress->setFont(font6);

        horizontalLayout_9->addWidget(labelAddEmailAdress);

        textEditEmailAddress = new QLineEdit(widget1);
        textEditEmailAddress->setObjectName(QStringLiteral("textEditEmailAddress"));

        horizontalLayout_9->addWidget(textEditEmailAddress);


        verticalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton->raise();
        MainText->raise();
        Version_Text->raise();
        label->raise();
        tabWidget->raise();
        pushButton_2->raise();
        frame->raise();
        AddCustomerButton->raise();
        Device_security->raise();
        labelAddUser->raise();
        AddCustomerFrame->raise();

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
        pushButton_2->setText(QApplication::translate("SecondWindow", "DetermineEvent", Q_NULLPTR));
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
#ifndef QT_NO_TOOLTIP
        AddCustomerButton->setToolTip(QApplication::translate("SecondWindow", "<html><head/><body><p>This allows the admin to add a user to the database.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AddCustomerButton->setText(QApplication::translate("SecondWindow", "AddCustomer", Q_NULLPTR));
        labelAddUser->setText(QApplication::translate("SecondWindow", "USER INFORMATION", Q_NULLPTR));
        labelAddName->setText(QApplication::translate("SecondWindow", "Name:", Q_NULLPTR));
        labelAddSurname->setText(QApplication::translate("SecondWindow", "Surname:", Q_NULLPTR));
        labelAddTown->setText(QApplication::translate("SecondWindow", "Town:", Q_NULLPTR));
        labelAddStreetAddress->setText(QApplication::translate("SecondWindow", "StreetAddress:", Q_NULLPTR));
        labelAddAge->setText(QApplication::translate("SecondWindow", "Age:", Q_NULLPTR));
        labelAddSex->setText(QApplication::translate("SecondWindow", "Sex:(m/f)", Q_NULLPTR));
        labelAddContactNumber->setText(QApplication::translate("SecondWindow", "ContactNumber:", Q_NULLPTR));
        labelAddAlternateNumber->setText(QApplication::translate("SecondWindow", "AlternateNumber:", Q_NULLPTR));
        labelAddEmailAdress->setText(QApplication::translate("SecondWindow", "EmailAddress:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
