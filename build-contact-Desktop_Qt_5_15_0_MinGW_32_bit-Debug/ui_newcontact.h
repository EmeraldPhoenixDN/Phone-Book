/********************************************************************************
** Form generated from reading UI file 'newcontact.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCONTACT_H
#define UI_NEWCONTACT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewContact
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *name_label;
    QLineEdit *name_edit;
    QLabel *phone_label;
    QLineEdit *phone_edit;
    QLabel *email_label;
    QLineEdit *email_edit;
    QLabel *label_3;
    QLineEdit *job_edit;
    QLabel *label;
    QLineEdit *meeting_edit;
    QLabel *label_2;
    QLineEdit *remember_edit;
    QSpacerItem *verticalSpacer_3;
    QPushButton *save_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *NewContact)
    {
        if (NewContact->objectName().isEmpty())
            NewContact->setObjectName(QString::fromUtf8("NewContact"));
        NewContact->resize(400, 335);
        NewContact->setMaximumSize(QSize(400, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewContact->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(NewContact);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_4 = new QLabel(NewContact);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 24pt \"MS Shell Dlg 2\";"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        name_label = new QLabel(NewContact);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, name_label);

        name_edit = new QLineEdit(NewContact);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));
        name_edit->setMaxLength(20);

        formLayout->setWidget(0, QFormLayout::FieldRole, name_edit);

        phone_label = new QLabel(NewContact);
        phone_label->setObjectName(QString::fromUtf8("phone_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, phone_label);

        phone_edit = new QLineEdit(NewContact);
        phone_edit->setObjectName(QString::fromUtf8("phone_edit"));
        phone_edit->setMaxLength(14);

        formLayout->setWidget(1, QFormLayout::FieldRole, phone_edit);

        email_label = new QLabel(NewContact);
        email_label->setObjectName(QString::fromUtf8("email_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, email_label);

        email_edit = new QLineEdit(NewContact);
        email_edit->setObjectName(QString::fromUtf8("email_edit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, email_edit);

        label_3 = new QLabel(NewContact);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        job_edit = new QLineEdit(NewContact);
        job_edit->setObjectName(QString::fromUtf8("job_edit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, job_edit);

        label = new QLabel(NewContact);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label);

        meeting_edit = new QLineEdit(NewContact);
        meeting_edit->setObjectName(QString::fromUtf8("meeting_edit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, meeting_edit);

        label_2 = new QLabel(NewContact);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_2);

        remember_edit = new QLineEdit(NewContact);
        remember_edit->setObjectName(QString::fromUtf8("remember_edit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, remember_edit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        save_button = new QPushButton(NewContact);
        save_button->setObjectName(QString::fromUtf8("save_button"));

        verticalLayout->addWidget(save_button);

        cancel_button = new QPushButton(NewContact);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));

        verticalLayout->addWidget(cancel_button);


        retranslateUi(NewContact);

        QMetaObject::connectSlotsByName(NewContact);
    } // setupUi

    void retranslateUi(QDialog *NewContact)
    {
        NewContact->setWindowTitle(QCoreApplication::translate("NewContact", "New Contact", nullptr));
        label_4->setText(QCoreApplication::translate("NewContact", "Add New Contact", nullptr));
        name_label->setText(QCoreApplication::translate("NewContact", "Name", nullptr));
        phone_label->setText(QCoreApplication::translate("NewContact", "Phone Number", nullptr));
        email_label->setText(QCoreApplication::translate("NewContact", "Email Address       ", nullptr));
        label_3->setText(QCoreApplication::translate("NewContact", "Job Title", nullptr));
        label->setText(QCoreApplication::translate("NewContact", "Organization", nullptr));
        label_2->setText(QCoreApplication::translate("NewContact", "What to Remember", nullptr));
        save_button->setText(QCoreApplication::translate("NewContact", "Save", nullptr));
        cancel_button->setText(QCoreApplication::translate("NewContact", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewContact: public Ui_NewContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCONTACT_H
