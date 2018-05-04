/********************************************************************************
** Form generated from reading UI file 'scaling.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCALING_H
#define UI_SCALING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScalingClass
{
public:
    QGroupBox *groupBox;
    QLabel *label_image;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_catch_image;
    QPushButton *pushButton_input_image;
    QPushButton *pushButton_measure;
    QPushButton *pushButton_scaling;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_pix;
    QLabel *label_real;
    QVBoxLayout *verticalLayout_7;
    QDoubleSpinBox *doubleSpinBox_test;
    QDoubleSpinBox *doubleSpinBox_real;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_scaling;
    QCheckBox *checkBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *ScalingClass)
    {
        if (ScalingClass->objectName().isEmpty())
            ScalingClass->setObjectName(QStringLiteral("ScalingClass"));
        ScalingClass->resize(673, 460);
        groupBox = new QGroupBox(ScalingClass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(250, 0, 411, 431));
        label_image = new QLabel(groupBox);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(10, 20, 391, 401));
        groupBox_2 = new QGroupBox(ScalingClass);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 249, 144));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_catch_image = new QPushButton(groupBox_2);
        pushButton_catch_image->setObjectName(QStringLiteral("pushButton_catch_image"));

        verticalLayout->addWidget(pushButton_catch_image);

        pushButton_input_image = new QPushButton(groupBox_2);
        pushButton_input_image->setObjectName(QStringLiteral("pushButton_input_image"));

        verticalLayout->addWidget(pushButton_input_image);

        pushButton_measure = new QPushButton(groupBox_2);
        pushButton_measure->setObjectName(QStringLiteral("pushButton_measure"));

        verticalLayout->addWidget(pushButton_measure);

        pushButton_scaling = new QPushButton(groupBox_2);
        pushButton_scaling->setObjectName(QStringLiteral("pushButton_scaling"));

        verticalLayout->addWidget(pushButton_scaling);


        gridLayout->addLayout(verticalLayout, 0, 0, 2, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_pix = new QLabel(groupBox_2);
        label_pix->setObjectName(QStringLiteral("label_pix"));

        verticalLayout_3->addWidget(label_pix);

        label_real = new QLabel(groupBox_2);
        label_real->setObjectName(QStringLiteral("label_real"));

        verticalLayout_3->addWidget(label_real);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        doubleSpinBox_test = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_test->setObjectName(QStringLiteral("doubleSpinBox_test"));
        doubleSpinBox_test->setAutoFillBackground(false);
        doubleSpinBox_test->setDecimals(1);
        doubleSpinBox_test->setMaximum(1000);
        doubleSpinBox_test->setSingleStep(0.1);

        verticalLayout_7->addWidget(doubleSpinBox_test);

        doubleSpinBox_real = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_real->setObjectName(QStringLiteral("doubleSpinBox_real"));
        doubleSpinBox_real->setEnabled(true);
        doubleSpinBox_real->setCursor(QCursor(Qt::ArrowCursor));
        doubleSpinBox_real->setDecimals(1);
        doubleSpinBox_real->setMaximum(1000);
        doubleSpinBox_real->setSingleStep(0.1);

        verticalLayout_7->addWidget(doubleSpinBox_real);


        gridLayout->addLayout(verticalLayout_7, 0, 2, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_scaling = new QLabel(groupBox_2);
        label_scaling->setObjectName(QStringLiteral("label_scaling"));

        verticalLayout_6->addWidget(label_scaling);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_6->addWidget(checkBox);


        gridLayout->addLayout(verticalLayout_6, 1, 1, 1, 2);

        layoutWidget = new QWidget(ScalingClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(ScalingClass);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        groupBox->raise();

        retranslateUi(ScalingClass);

        QMetaObject::connectSlotsByName(ScalingClass);
    } // setupUi

    void retranslateUi(QWidget *ScalingClass)
    {
        ScalingClass->setWindowTitle(QApplication::translate("ScalingClass", "Scaling", 0));
        groupBox->setTitle(QApplication::translate("ScalingClass", "\345\233\276\345\203\217\346\230\276\347\244\272", 0));
        label_image->setText(QApplication::translate("ScalingClass", "label_show_image", 0));
        groupBox_2->setTitle(QApplication::translate("ScalingClass", "\347\233\270\346\234\272\346\240\207\345\256\232", 0));
        pushButton_catch_image->setText(QApplication::translate("ScalingClass", "\346\213\215\347\205\247", 0));
        pushButton_input_image->setText(QApplication::translate("ScalingClass", "\345\257\274\345\205\245\345\233\276\347\211\207", 0));
        pushButton_measure->setText(QApplication::translate("ScalingClass", "\346\265\213\351\207\217", 0));
        pushButton_scaling->setText(QApplication::translate("ScalingClass", "\350\275\254\346\215\242", 0));
        label_pix->setText(QApplication::translate("ScalingClass", "\345\203\217\347\264\240\345\260\272\345\257\270\357\274\232", 0));
        label_real->setText(QApplication::translate("ScalingClass", "\345\256\236\351\231\205\345\260\272\345\257\270\357\274\232", 0));
        doubleSpinBox_test->setSuffix(QApplication::translate("ScalingClass", "mm", 0));
        doubleSpinBox_real->setPrefix(QString());
        doubleSpinBox_real->setSuffix(QApplication::translate("ScalingClass", "mm", 0));
        label_scaling->setText(QApplication::translate("ScalingClass", "\350\275\254\346\215\242\346\257\224\344\276\213\357\274\232", 0));
        checkBox->setText(QApplication::translate("ScalingClass", "\345\236\202\347\233\264", 0));
    } // retranslateUi

};

namespace Ui {
    class ScalingClass: public Ui_ScalingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCALING_H
