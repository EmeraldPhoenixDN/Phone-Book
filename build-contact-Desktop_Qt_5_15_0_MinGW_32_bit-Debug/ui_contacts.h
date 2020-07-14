/********************************************************************************
** Form generated from reading UI file 'contacts.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTS_H
#define UI_CONTACTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Contacts
{
public:
    QAction *actionNew_Contact;
    QAction *actionClose;
    QAction *actionEmail_All_Contacts;
    QAction *actionSMTP_Settings;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *new_contact;
    QPushButton *edit_contact;
    QPushButton *email_button;
    QPushButton *pushButton_3;
    QPushButton *delete_contact;
    QSpacerItem *verticalSpacer;
    QPushButton *exit_app;
    QListWidget *listWidget;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *name_show;
    QLabel *job_show;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *phone_show;
    QHBoxLayout *horizontalLayout_3;
    QLabel *email_show;
    QPushButton *call_button;
    QPushButton *pushButton;
    QFrame *line;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QPushButton *save_remember;
    QPlainTextEdit *remember_show;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEmail_All_Contacts;
    QMenu *menuSettings;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Contacts)
    {
        if (Contacts->objectName().isEmpty())
            Contacts->setObjectName(QString::fromUtf8("Contacts"));
        Contacts->resize(800, 600);
        Contacts->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Contacts->setWindowIcon(icon);
        Contacts->setWindowOpacity(1.000000000000000);
        actionNew_Contact = new QAction(Contacts);
        actionNew_Contact->setObjectName(QString::fromUtf8("actionNew_Contact"));
        actionClose = new QAction(Contacts);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionEmail_All_Contacts = new QAction(Contacts);
        actionEmail_All_Contacts->setObjectName(QString::fromUtf8("actionEmail_All_Contacts"));
        actionSMTP_Settings = new QAction(Contacts);
        actionSMTP_Settings->setObjectName(QString::fromUtf8("actionSMTP_Settings"));
        centralwidget = new QWidget(Contacts);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        new_contact = new QPushButton(centralwidget);
        new_contact->setObjectName(QString::fromUtf8("new_contact"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        new_contact->setFont(font);

        verticalLayout->addWidget(new_contact);

        edit_contact = new QPushButton(centralwidget);
        edit_contact->setObjectName(QString::fromUtf8("edit_contact"));
        edit_contact->setFont(font);

        verticalLayout->addWidget(edit_contact);

        email_button = new QPushButton(centralwidget);
        email_button->setObjectName(QString::fromUtf8("email_button"));

        verticalLayout->addWidget(email_button);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(true);
        pushButton_3->setFont(font1);

        verticalLayout->addWidget(pushButton_3);

        delete_contact = new QPushButton(centralwidget);
        delete_contact->setObjectName(QString::fromUtf8("delete_contact"));
        delete_contact->setFont(font);

        verticalLayout->addWidget(delete_contact);

        verticalSpacer = new QSpacerItem(30, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        exit_app = new QPushButton(centralwidget);
        exit_app->setObjectName(QString::fromUtf8("exit_app"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        exit_app->setFont(font2);
        exit_app->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(exit_app);


        gridLayout->addLayout(verticalLayout, 0, 3, 1, 1);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Segoe Print\";"));
        listWidget->setSortingEnabled(true);

        gridLayout->addWidget(listWidget, 0, 1, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(400, 0));
        frame->setMaximumSize(QSize(250, 16777215));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 300));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(70, 50));
        label->setMaximumSize(QSize(50, 50));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/people_106508.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        name_show = new QLabel(frame_2);
        name_show->setObjectName(QString::fromUtf8("name_show"));
        name_show->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Segoe Print\";"));

        horizontalLayout->addWidget(name_show);


        verticalLayout_3->addLayout(horizontalLayout);

        job_show = new QLabel(frame_2);
        job_show->setObjectName(QString::fromUtf8("job_show"));
        job_show->setStyleSheet(QString::fromUtf8("\n"
"font: italic 12pt \"Calibri\";"));
        job_show->setWordWrap(true);

        verticalLayout_3->addWidget(job_show);

        line_2 = new QFrame(frame_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        phone_show = new QLabel(frame_2);
        phone_show->setObjectName(QString::fromUtf8("phone_show"));
        phone_show->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Calibri\";"));

        horizontalLayout_2->addWidget(phone_show);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        email_show = new QLabel(frame_2);
        email_show->setObjectName(QString::fromUtf8("email_show"));
        email_show->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Calibri\";"));
        email_show->setWordWrap(true);

        horizontalLayout_3->addWidget(email_show);

        call_button = new QPushButton(frame_2);
        call_button->setObjectName(QString::fromUtf8("call_button"));
        call_button->setMaximumSize(QSize(50, 50));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../icon-256x256.png"), QSize(), QIcon::Normal, QIcon::Off);
        call_button->setIcon(icon1);
        call_button->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(call_button);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(50, 50));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../images.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(100, 50));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(frame_2);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(0, 35));
        frame_3->setMaximumSize(QSize(16777215, 16777215));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Calibri\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_2);

        save_remember = new QPushButton(frame_3);
        save_remember->setObjectName(QString::fromUtf8("save_remember"));
        save_remember->setMinimumSize(QSize(20, 0));
        save_remember->setMaximumSize(QSize(50, 16777215));
        save_remember->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/Edit-validated-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        save_remember->setIcon(icon3);
        save_remember->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(save_remember);


        verticalLayout_4->addLayout(horizontalLayout_4);

        remember_show = new QPlainTextEdit(frame_3);
        remember_show->setObjectName(QString::fromUtf8("remember_show"));
        remember_show->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Cambria\";\n"
"background-color: rgb(85, 170, 127);\n"
"color: rgb(255, 255, 255);"));
        remember_show->setFrameShape(QFrame::NoFrame);
        remember_show->setFrameShadow(QFrame::Plain);
        remember_show->setLineWidth(1);
        remember_show->setTextInteractionFlags(Qt::TextEditorInteraction);

        verticalLayout_4->addWidget(remember_show);


        verticalLayout_2->addWidget(frame_3);


        gridLayout->addWidget(frame, 0, 2, 1, 1);

        Contacts->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Contacts);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEmail_All_Contacts = new QMenu(menubar);
        menuEmail_All_Contacts->setObjectName(QString::fromUtf8("menuEmail_All_Contacts"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        Contacts->setMenuBar(menubar);
        statusbar = new QStatusBar(Contacts);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Contacts->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEmail_All_Contacts->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menuFile->addAction(actionNew_Contact);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuEmail_All_Contacts->addSeparator();
        menuEmail_All_Contacts->addAction(actionEmail_All_Contacts);
        menuSettings->addAction(actionSMTP_Settings);

        retranslateUi(Contacts);

        QMetaObject::connectSlotsByName(Contacts);
    } // setupUi

    void retranslateUi(QMainWindow *Contacts)
    {
        Contacts->setWindowTitle(QCoreApplication::translate("Contacts", "Contacts", nullptr));
        actionNew_Contact->setText(QCoreApplication::translate("Contacts", "New Contact", nullptr));
        actionClose->setText(QCoreApplication::translate("Contacts", "Close", nullptr));
        actionEmail_All_Contacts->setText(QCoreApplication::translate("Contacts", "Email All Contacts", nullptr));
        actionSMTP_Settings->setText(QCoreApplication::translate("Contacts", "SMTP Settings", nullptr));
        new_contact->setText(QCoreApplication::translate("Contacts", "New Contact", nullptr));
        edit_contact->setText(QCoreApplication::translate("Contacts", "Edit Contact", nullptr));
        email_button->setText(QCoreApplication::translate("Contacts", "Email Contact", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Contacts", "Email All Contacts", nullptr));
        delete_contact->setText(QCoreApplication::translate("Contacts", "Delete Contact", nullptr));
        exit_app->setText(QCoreApplication::translate("Contacts", "Exit", nullptr));
        label->setText(QString());
        name_show->setText(QCoreApplication::translate("Contacts", "Name Label", nullptr));
        job_show->setText(QCoreApplication::translate("Contacts", "Job Label", nullptr));
        phone_show->setText(QCoreApplication::translate("Contacts", "Phone Label", nullptr));
        email_show->setText(QCoreApplication::translate("Contacts", "Email Label", nullptr));
        call_button->setText(QString());
        pushButton->setText(QString());
        label_2->setText(QCoreApplication::translate("Contacts", "Note", nullptr));
        save_remember->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("Contacts", "File", nullptr));
        menuEmail_All_Contacts->setTitle(QCoreApplication::translate("Contacts", "Mass", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("Contacts", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Contacts: public Ui_Contacts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTS_H
