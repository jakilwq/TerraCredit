/********************************************************************************
** Form generated from reading UI file 'zcreditcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZCREDITCONTROLDIALOG_H
#define UI_ZCREDITCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZCreditControlDialog
{
public:
    QVBoxLayout *verticalLayout_1;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_1;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnEsc;
    QHBoxLayout *horizontalLayout;
    QWidget *layoutAmount;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelZCredit;
    QLabel *labelZCredit_int;
    QSpacerItem *horizontalSpacer_3;
    QWidget *layoutQuantity;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout3;
    QPushButton *pushButtonAll;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZCreditControlDialog)
    {
        if (ZCreditControlDialog->objectName().isEmpty())
            ZCreditControlDialog->setObjectName(QStringLiteral("ZCreditControlDialog"));
        ZCreditControlDialog->resize(681, 550);
        ZCreditControlDialog->setMinimumSize(QSize(681, 550));
        verticalLayout_1 = new QVBoxLayout(ZCreditControlDialog);
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ZCreditControlDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 12, 0, 20);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(20, -1, 30, -1);
        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_1);

        labelTitle = new QLabel(frame);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 40));
        labelTitle->setMaximumSize(QSize(16777215, 40));
        labelTitle->setStyleSheet(QStringLiteral("padding-left:30px;"));
        labelTitle->setAlignment(Qt::AlignCenter);
        labelTitle->setMargin(7);

        horizontalLayout_12->addWidget(labelTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        btnEsc = new QPushButton(frame);
        btnEsc->setObjectName(QStringLiteral("btnEsc"));
        btnEsc->setMinimumSize(QSize(24, 24));
        btnEsc->setMaximumSize(QSize(24, 24));

        horizontalLayout_12->addWidget(btnEsc);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(-1);
#endif
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, 20, 10);
        layoutAmount = new QWidget(frame);
        layoutAmount->setObjectName(QStringLiteral("layoutAmount"));
        horizontalLayout_9 = new QHBoxLayout(layoutAmount);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        labelZCredit = new QLabel(layoutAmount);
        labelZCredit->setObjectName(QStringLiteral("labelZCredit"));

        horizontalLayout_9->addWidget(labelZCredit);

        labelZCredit_int = new QLabel(layoutAmount);
        labelZCredit_int->setObjectName(QStringLiteral("labelZCredit_int"));

        horizontalLayout_9->addWidget(labelZCredit_int);

        horizontalLayout_9->setStretch(1, 1);

        horizontalLayout->addWidget(layoutAmount);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        layoutQuantity = new QWidget(frame);
        layoutQuantity->setObjectName(QStringLiteral("layoutQuantity"));
        horizontalLayout_10 = new QHBoxLayout(layoutQuantity);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        labelQuantity = new QLabel(layoutQuantity);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        horizontalLayout_10->addWidget(labelQuantity);

        labelQuantity_int = new QLabel(layoutQuantity);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        horizontalLayout_10->addWidget(labelQuantity_int);

        horizontalLayout_10->setStretch(1, 1);

        horizontalLayout->addWidget(layoutQuantity);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setSpacing(0);
        horizontalLayout3->setObjectName(QStringLiteral("horizontalLayout3"));
        horizontalLayout3->setContentsMargins(20, -1, 20, 10);
        pushButtonAll = new QPushButton(frame);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));
        pushButtonAll->setMinimumSize(QSize(180, 40));
        pushButtonAll->setCheckable(true);

        horizontalLayout3->addWidget(pushButtonAll);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout3->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, -1, 20, -1);
        treeWidget = new QTreeWidget(frame);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(4, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(3, QStringLiteral("zCREDIT Version"));
        __qtreewidgetitem->setText(2, QStringLiteral("zCREDIT ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(6);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout_3->addWidget(treeWidget);


        verticalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, -1, 26, -1);
        horizontalSpacer_6 = new QSpacerItem(558, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setMinimumSize(QSize(150, 35));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_1->addWidget(frame);


        retranslateUi(ZCreditControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZCreditControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZCreditControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZCreditControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZCreditControlDialog)
    {
        ZCreditControlDialog->setWindowTitle(QApplication::translate("ZCreditControlDialog", "Select zCREDIT to Spend", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("ZCreditControlDialog", "Coin Control", Q_NULLPTR));
        btnEsc->setText(QApplication::translate("ZCreditControlDialog", "PushButton", Q_NULLPTR));
        labelZCredit->setText(QApplication::translate("ZCreditControlDialog", "zCredit", Q_NULLPTR));
        labelZCredit_int->setText(QApplication::translate("ZCreditControlDialog", "0.00 ", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("ZCreditControlDialog", "Quantity:", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("ZCreditControlDialog", "0", Q_NULLPTR));
        pushButtonAll->setText(QApplication::translate("ZCreditControlDialog", "Select/Deselect All", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("ZCreditControlDialog", "Is Spendable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZCreditControlDialog: public Ui_ZCreditControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZCREDITCONTROLDIALOG_H
