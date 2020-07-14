/********************************************************************************
** Form generated from reading UI file 'editcontact.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCONTACT_H
#define UI_EDITCONTACT_H

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

class Ui_editcontact
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *name_label;
    QLineEdit *name_edit;
    QLabel *phone_label;
    QLineEdit *phone_edit;
    QLabel *email_label;
    QLineEdit *email_edit;
    QSpacerItem *verticalSpacer_3;
    QPushButton *save_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *editcontact)
    {
        if (editcontact->objectName().isEmpty())
            editcontact->setObjectName(QString::fromUtf8("editcontact"));
        editcontact->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        editcontact->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(editcontact);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_4 = new QLabel(editcontact);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 24pt \"MS Shell Dlg 2\";"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        verticalSpacer_2 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        name_label = new QLabel(editcontact);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, name_label);

        name_edit = new QLineEdit(editcontact);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name_edit);

        phone_label = new QLabel(editcontact);
        phone_label->setObjectName(QString::fromUtf8("phone_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, phone_label);

        phone_edit = new QLineEdit(editcontact);
        phone_edit->setObjectName(QString::fromUtf8("phone_edit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, phone_edit);

        email_label = new QLabel(editcontact);
        email_label->setObjectName(QString::fromUtf8("email_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, email_label);

        email_edit = new QLineEdit(editcontact);
        email_edit->setObjectName(QString::fromUtf8("email_edit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, email_edit);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 33, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        save_button = new QPushButton(editcontact);
        save_button->setObjectName(QString::fromUtf8("save_button"));

        verticalLayout_2->addWidget(save_button);

        cancel_button = new QPushButton(editcontact);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));

        verticalLayout_2->addWidget(cancel_button);


        retranslateUi(editcontact);

        save_button->setDefault(true);


        QMetaObject::connectSlotsByName(editcontact);
    } // setupUi

    void retranslateUi(QDialog *editcontact)
    {
        editcontact->setWindowTitle(QCoreApplication::translate("editcontact", "Contact", nullptr));
        label_4->setText(QCoreApplication::translate("editcontact", "Edit Contact", nullptr));
        name_label->setText(QCoreApplication::translate("editcontact", "Name", nullptr));
        phone_label->setText(QCoreApplication::translate("editcontact", "Phone Number", nullptr));
        email_label->setText(QCoreApplication::translate("editcontact", "Email Address       ", nullptr));
        save_button->setText(QCoreApplication::translate("editcontact", "Save", nullptr));
        cancel_button->setText(QCoreApplication::translate("editcontact", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editcontact: public Ui_editcontact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCONTACT_H
