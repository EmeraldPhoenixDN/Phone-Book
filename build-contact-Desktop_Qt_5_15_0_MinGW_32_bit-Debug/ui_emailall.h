/********************************************************************************
** Form generated from reading UI file 'emailall.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAILALL_H
#define UI_EMAILALL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EmailAll
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *listWidget;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *subject_edit;
    QLabel *label_2;
    QComboBox *personalize;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *file;
    QPushButton *browse_button;
    QLabel *label_4;
    QTextEdit *message_edit;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *send_button;
    QPushButton *cancel_button;
    QVBoxLayout *status_layout;

    void setupUi(QDialog *EmailAll)
    {
        if (EmailAll->objectName().isEmpty())
            EmailAll->setObjectName(QString::fromUtf8("EmailAll"));
        EmailAll->resize(800, 600);
        EmailAll->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        EmailAll->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(EmailAll);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(EmailAll);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(label);

        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);


        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(EmailAll);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(500, 0));
        frame_2->setMaximumSize(QSize(500, 16777215));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame_4);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        subject_edit = new QLineEdit(frame_4);
        subject_edit->setObjectName(QString::fromUtf8("subject_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, subject_edit);

        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        personalize = new QComboBox(frame_4);
        personalize->setObjectName(QString::fromUtf8("personalize"));
        personalize->setMinimumSize(QSize(0, 30));

        formLayout->setWidget(1, QFormLayout::FieldRole, personalize);

        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        file = new QLineEdit(frame_4);
        file->setObjectName(QString::fromUtf8("file"));

        horizontalLayout_3->addWidget(file);

        browse_button = new QPushButton(frame_4);
        browse_button->setObjectName(QString::fromUtf8("browse_button"));

        horizontalLayout_3->addWidget(browse_button);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        message_edit = new QTextEdit(frame_4);
        message_edit->setObjectName(QString::fromUtf8("message_edit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, message_edit);


        verticalLayout->addWidget(frame_4);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(0, 20));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        send_button = new QPushButton(frame_3);
        send_button->setObjectName(QString::fromUtf8("send_button"));

        horizontalLayout_2->addWidget(send_button);

        cancel_button = new QPushButton(frame_3);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));

        horizontalLayout_2->addWidget(cancel_button);


        verticalLayout->addWidget(frame_3);


        horizontalLayout->addWidget(frame_2);


        verticalLayout_3->addLayout(horizontalLayout);

        status_layout = new QVBoxLayout();
        status_layout->setObjectName(QString::fromUtf8("status_layout"));

        verticalLayout_3->addLayout(status_layout);


        retranslateUi(EmailAll);

        QMetaObject::connectSlotsByName(EmailAll);
    } // setupUi

    void retranslateUi(QDialog *EmailAll)
    {
        EmailAll->setWindowTitle(QCoreApplication::translate("EmailAll", "Customized Mass Email", nullptr));
        label->setText(QCoreApplication::translate("EmailAll", "Choose Recipients", nullptr));
        label_3->setText(QCoreApplication::translate("EmailAll", "Subject", nullptr));
        label_2->setText(QCoreApplication::translate("EmailAll", "Add Personalization", nullptr));
        personalize->setCurrentText(QString());
        label_5->setText(QCoreApplication::translate("EmailAll", "Attache Files", nullptr));
        browse_button->setText(QCoreApplication::translate("EmailAll", "Browse", nullptr));
        label_4->setText(QCoreApplication::translate("EmailAll", "Message Text", nullptr));
        send_button->setText(QCoreApplication::translate("EmailAll", "Send", nullptr));
        cancel_button->setText(QCoreApplication::translate("EmailAll", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmailAll: public Ui_EmailAll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAILALL_H
