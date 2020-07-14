/********************************************************************************
** Form generated from reading UI file 'smtpsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMTPSETTINGS_H
#define UI_SMTPSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SmtpSettings
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *server_edit;
    QLabel *label_2;
    QLineEdit *port_edit;
    QLabel *label_3;
    QLineEdit *username_edit;
    QLabel *label_4;
    QLineEdit *password_edit;
    QSpacerItem *verticalSpacer;
    QPushButton *save_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *SmtpSettings)
    {
        if (SmtpSettings->objectName().isEmpty())
            SmtpSettings->setObjectName(QString::fromUtf8("SmtpSettings"));
        SmtpSettings->resize(400, 300);
        verticalLayout = new QVBoxLayout(SmtpSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_5 = new QLabel(SmtpSettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(SmtpSettings);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        server_edit = new QLineEdit(SmtpSettings);
        server_edit->setObjectName(QString::fromUtf8("server_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, server_edit);

        label_2 = new QLabel(SmtpSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        port_edit = new QLineEdit(SmtpSettings);
        port_edit->setObjectName(QString::fromUtf8("port_edit"));
        port_edit->setMinimumSize(QSize(50, 0));
        port_edit->setMaximumSize(QSize(50, 16777215));
        port_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, port_edit);

        label_3 = new QLabel(SmtpSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        username_edit = new QLineEdit(SmtpSettings);
        username_edit->setObjectName(QString::fromUtf8("username_edit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, username_edit);

        label_4 = new QLabel(SmtpSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        password_edit = new QLineEdit(SmtpSettings);
        password_edit->setObjectName(QString::fromUtf8("password_edit"));
        password_edit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, password_edit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        save_button = new QPushButton(SmtpSettings);
        save_button->setObjectName(QString::fromUtf8("save_button"));

        verticalLayout->addWidget(save_button);

        cancel_button = new QPushButton(SmtpSettings);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));

        verticalLayout->addWidget(cancel_button);


        retranslateUi(SmtpSettings);

        save_button->setDefault(true);


        QMetaObject::connectSlotsByName(SmtpSettings);
    } // setupUi

    void retranslateUi(QDialog *SmtpSettings)
    {
        SmtpSettings->setWindowTitle(QCoreApplication::translate("SmtpSettings", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("SmtpSettings", "Configure Email SMTP Settings", nullptr));
        label->setText(QCoreApplication::translate("SmtpSettings", "Email Server", nullptr));
        label_2->setText(QCoreApplication::translate("SmtpSettings", "Port", nullptr));
        label_3->setText(QCoreApplication::translate("SmtpSettings", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("SmtpSettings", "Password", nullptr));
        save_button->setText(QCoreApplication::translate("SmtpSettings", "Save", nullptr));
        cancel_button->setText(QCoreApplication::translate("SmtpSettings", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmtpSettings: public Ui_SmtpSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMTPSETTINGS_H
