/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(960, 540);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(960, 540));
        MainWindow->setMaximumSize(QSize(960, 540));
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, -1, 960, 540));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        graphicsView->setFont(font);
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/image/SPRING2013_SKY.png);"));
        graphicsView->setMidLineWidth(0);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(20, 20, 81, 81));
        pushButton->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(81, 81));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 110, 81, 81));
        pushButton_2->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(81, 81));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 960, 540));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/13479904_1786575618228430_2049148933_n.jpg")));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 960, 540));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/13487406_1786575614895097_1961140791_n.jpg")));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 200, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(480, 340, 330, 200));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setMidLineWidth(0);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(480, 340, 330, 200));
        label_4->setFont(font1);
        label_4->setMidLineWidth(0);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(480, 340, 330, 200));
        label_5->setFont(font1);
        label_5->setMidLineWidth(0);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(480, 340, 330, 200));
        label_6->setFont(font1);
        label_6->setMidLineWidth(0);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(480, 340, 330, 200));
        label_7->setFont(font1);
        label_7->setMidLineWidth(0);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(480, 340, 480, 200));
        label_8->setFont(font1);
        label_8->setMidLineWidth(0);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(480, 340, 330, 200));
        label_9->setFont(font1);
        label_9->setMidLineWidth(0);
        label_9->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        graphicsView->raise();
        label->raise();
        label_2->raise();
        pushButton_2->raise();
        pushButton->raise();
        pushButton_3->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "Grade", 0));
        label_3->setText(QApplication::translate("MainWindow", "0\345\210\206  \344\275\240\346\234\211\350\252\215\347\234\237\346\211\223\357\274\237", 0));
        label_4->setText(QApplication::translate("MainWindow", "20\345\210\206\357\274\237  \345\253\251\357\274\201", 0));
        label_5->setText(QApplication::translate("MainWindow", "40\345\210\206\357\274\237  \350\252\215\347\234\237\351\273\236\345\245\275\345\227\216\357\274\237", 0));
        label_6->setText(QApplication::translate("MainWindow", "60\345\210\206\357\274\237  \351\200\231\346\250\243\346\211\215\345\217\212\346\240\274\357\274\237", 0));
        label_7->setText(QApplication::translate("MainWindow", "80\345\210\206\357\274\237\345\245\275\345\203\217\345\276\210\344\272\206\344\270\215\350\265\267", 0));
        label_8->setText(QApplication::translate("MainWindow", "100\345\210\206\351\230\277\344\270\215\345\260\261\345\245\275\346\243\222\346\243\222", 0));
        label_9->setText(QApplication::translate("MainWindow", "\345\216\273\344\275\240\347\232\204", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
