/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *widget_main;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QComboBox *port_comboBox;
    QComboBox *buadrate_comboBox;
    QComboBox *databits_comboBox;
    QComboBox *parity_comboBox;
    QComboBox *stopbits_comboBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *open_port_Button;
    QPushButton *check_port_Button;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *rencode_view;
    QLineEdit *rencode_lineEdit;
    QPushButton *print_button;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(762, 624);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget_main = new QWidget(centralwidget);
        widget_main->setObjectName(QStringLiteral("widget_main"));
        widget_main->setStyleSheet(QStringLiteral(""));
        verticalLayout_9 = new QVBoxLayout(widget_main);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        groupBox_3 = new QGroupBox(widget_main);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        widget = new QWidget(groupBox_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(230, 16777215));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(100, 220));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 20, 131, 141));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        port_comboBox = new QComboBox(layoutWidget);
        port_comboBox->setObjectName(QStringLiteral("port_comboBox"));

        verticalLayout_2->addWidget(port_comboBox);

        buadrate_comboBox = new QComboBox(layoutWidget);
        buadrate_comboBox->setObjectName(QStringLiteral("buadrate_comboBox"));

        verticalLayout_2->addWidget(buadrate_comboBox);

        databits_comboBox = new QComboBox(layoutWidget);
        databits_comboBox->setObjectName(QStringLiteral("databits_comboBox"));

        verticalLayout_2->addWidget(databits_comboBox);

        parity_comboBox = new QComboBox(layoutWidget);
        parity_comboBox->setObjectName(QStringLiteral("parity_comboBox"));

        verticalLayout_2->addWidget(parity_comboBox);

        stopbits_comboBox = new QComboBox(layoutWidget);
        stopbits_comboBox->setObjectName(QStringLiteral("stopbits_comboBox"));

        verticalLayout_2->addWidget(stopbits_comboBox);

        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 50, 141));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        layoutWidget_3 = new QWidget(groupBox_2);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 160, 181, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        open_port_Button = new QPushButton(layoutWidget_3);
        open_port_Button->setObjectName(QStringLiteral("open_port_Button"));
        open_port_Button->setMinimumSize(QSize(50, 32));

        horizontalLayout_4->addWidget(open_port_Button);

        check_port_Button = new QPushButton(layoutWidget_3);
        check_port_Button->setObjectName(QStringLiteral("check_port_Button"));
        check_port_Button->setEnabled(true);
        check_port_Button->setMinimumSize(QSize(80, 32));
        check_port_Button->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_4->addWidget(check_port_Button);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        groupBox_4->setMinimumSize(QSize(50, 0));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(5, 16, 5, 5);
        plainTextEdit = new QPlainTextEdit(groupBox_4);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setEnabled(true);

        gridLayout->addWidget(plainTextEdit, 0, 1, 1, 2);


        verticalLayout_4->addWidget(groupBox_4);


        horizontalLayout_5->addWidget(widget);

        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        rencode_view = new QLabel(groupBox);
        rencode_view->setObjectName(QStringLiteral("rencode_view"));
        rencode_view->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(rencode_view->sizePolicy().hasHeightForWidth());
        rencode_view->setSizePolicy(sizePolicy2);
        rencode_view->setScaledContents(false);
        rencode_view->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(rencode_view);

        rencode_lineEdit = new QLineEdit(groupBox);
        rencode_lineEdit->setObjectName(QStringLiteral("rencode_lineEdit"));
        rencode_lineEdit->setEnabled(false);

        verticalLayout_5->addWidget(rencode_lineEdit);

        print_button = new QPushButton(groupBox);
        print_button->setObjectName(QStringLiteral("print_button"));
        print_button->setMinimumSize(QSize(0, 40));

        verticalLayout_5->addWidget(print_button);


        horizontalLayout_5->addWidget(groupBox);


        verticalLayout_9->addWidget(groupBox_3);


        gridLayout_2->addWidget(widget_main, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox_3->setTitle(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\351\205\215\347\275\256", 0));
        label->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", 0));
        label_4->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", 0));
        label_5->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", 0));
        open_port_Button->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
        check_port_Button->setText(QApplication::translate("MainWindow", "\346\243\200\346\265\213", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\260\203\350\257\225\344\277\241\346\201\257", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\272\214\347\273\264\347\240\201\346\230\276\347\244\272", 0));
        rencode_view->setText(QString());
        print_button->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H