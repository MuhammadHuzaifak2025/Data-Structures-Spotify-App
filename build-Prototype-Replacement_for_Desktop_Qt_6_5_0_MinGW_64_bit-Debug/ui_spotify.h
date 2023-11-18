/********************************************************************************
** Form generated from reading UI file 'spotify.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPOTIFY_H
#define UI_SPOTIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spotify
{
public:
    QLabel *label_4;
    QPushButton *play_button;
    QPushButton *skip_behind_button;
    QPushButton *skip_foward_button;
    QSlider *musicTimer;
    QSlider *volumeSlider;
    QPushButton *mute_button;
    QLabel *SongName;
    QLabel *songDuration;
    QPushButton *skip_ten_seconds_foward;
    QPushButton *skip_ten_seconds_back;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *SideBar_1;
    QLabel *SideBar_2;
    QPushButton *Home_Button;
    QPushButton *Search_Button;
    QStackedWidget *Pages;
    QWidget *Home;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *greeting;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *Layout;
    QWidget *Search;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *Layout_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *Layout_3;
    QPushButton *pushButton;
    QListWidget *Playlist;

    void setupUi(QDialog *spotify)
    {
        if (spotify->objectName().isEmpty())
            spotify->setObjectName("spotify");
        spotify->resize(1269, 700);
        spotify->setStyleSheet(QString::fromUtf8("background-color: black;"));
        label_4 = new QLabel(spotify);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 620, 1271, 91));
        label_4->setStyleSheet(QString::fromUtf8("background-color: black;"));
        play_button = new QPushButton(spotify);
        play_button->setObjectName("play_button");
        play_button->setGeometry(QRect(600, 630, 50, 50));
        QFont font;
        font.setPointSize(14);
        play_button->setFont(font);
        play_button->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px;\n"
"border-radius: 20px;"));
        play_button->setIconSize(QSize(30, 30));
        skip_behind_button = new QPushButton(spotify);
        skip_behind_button->setObjectName("skip_behind_button");
        skip_behind_button->setGeometry(QRect(550, 640, 30, 30));
        skip_behind_button->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px;\n"
"border-radius: 15px;"));
        skip_foward_button = new QPushButton(spotify);
        skip_foward_button->setObjectName("skip_foward_button");
        skip_foward_button->setGeometry(QRect(670, 640, 30, 30));
        skip_foward_button->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px;\n"
"border-radius: 15px;"));
        musicTimer = new QSlider(spotify);
        musicTimer->setObjectName("musicTimer");
        musicTimer->setGeometry(QRect(360, 680, 570, 22));
        musicTimer->setStyleSheet(QString::fromUtf8("QSlider::add-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #BBB, stop:1 #BBB);\n"
"    height: 3px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #FFF, stop:1 #FFF);\n"
"    height: 3px;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #FFF, stop:1 #DDD);\n"
"    width: 3px;\n"
"    margin: 0px 0; \n"
"\n"
"}\n"
"QSlider::groove:horizontal {\n"
"    height: 3px; \n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #BBB, stop:1 #BBB);\n"
"    margin: 0px 0;\n"
"}"));
        musicTimer->setMaximum(100);
        musicTimer->setOrientation(Qt::Horizontal);
        volumeSlider = new QSlider(spotify);
        volumeSlider->setObjectName("volumeSlider");
        volumeSlider->setGeometry(QRect(1090, 650, 160, 22));
        volumeSlider->setStyleSheet(QString::fromUtf8("QSlider::add-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #BBB, stop:1 #BBB);\n"
"    height: 3px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #FFF, stop:1 #FFF);\n"
"    height: 3px;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #FFF, stop:1 #DDD);\n"
"    width: 3px;\n"
"    margin: 0px 0; \n"
"\n"
"}\n"
"QSlider::groove:horizontal {\n"
"    height: 3px; \n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #BBB, stop:1 #BBB);\n"
"    margin: 0px 0;\n"
"}"));
        volumeSlider->setOrientation(Qt::Horizontal);
        mute_button = new QPushButton(spotify);
        mute_button->setObjectName("mute_button");
        mute_button->setGeometry(QRect(1040, 650, 30, 30));
        mute_button->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px;\n"
"border-radius:10px;"));
        SongName = new QLabel(spotify);
        SongName->setObjectName("SongName");
        SongName->setGeometry(QRect(20, 640, 171, 71));
        SongName->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Segoe UI Semibold\";\n"
"\n"
"color: #FFF;"));
        songDuration = new QLabel(spotify);
        songDuration->setObjectName("songDuration");
        songDuration->setGeometry(QRect(295, 693, 49, 16));
        songDuration->setStyleSheet(QString::fromUtf8("color:grey;"));
        songDuration->setAlignment(Qt::AlignCenter);
        skip_ten_seconds_foward = new QPushButton(spotify);
        skip_ten_seconds_foward->setObjectName("skip_ten_seconds_foward");
        skip_ten_seconds_foward->setGeometry(QRect(710, 640, 30, 30));
        skip_ten_seconds_foward->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px;\n"
"border-radius: 15px;"));
        skip_ten_seconds_back = new QPushButton(spotify);
        skip_ten_seconds_back->setObjectName("skip_ten_seconds_back");
        skip_ten_seconds_back->setGeometry(QRect(510, 640, 30, 30));
        skip_ten_seconds_back->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px;\n"
"border-radius: 15px;"));
        listWidget = new QListWidget(spotify);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(30, 160, 231, 192));
        label = new QLabel(spotify);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 300, 620));
        SideBar_1 = new QLabel(spotify);
        SideBar_1->setObjectName("SideBar_1");
        SideBar_1->setGeometry(QRect(10, 10, 271, 111));
        SideBar_1->setStyleSheet(QString::fromUtf8("background-color: rgba(20, 20, 20,0.7);\n"
"border-radius: 20px;"));
        SideBar_2 = new QLabel(spotify);
        SideBar_2->setObjectName("SideBar_2");
        SideBar_2->setGeometry(QRect(10, 130, 271, 481));
        SideBar_2->setStyleSheet(QString::fromUtf8("background-color: rgba(20, 20, 20,0.7);\n"
"border-radius: 20px;"));
        Home_Button = new QPushButton(spotify);
        Home_Button->setObjectName("Home_Button");
        Home_Button->setGeometry(QRect(20, 20, 251, 41));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        Home_Button->setFont(font1);
        Home_Button->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: rgba(40, 40, 40,0.7);\n"
"text-align: left;\n"
"padding-left: 5px;\n"
"color: white;"));
        Search_Button = new QPushButton(spotify);
        Search_Button->setObjectName("Search_Button");
        Search_Button->setGeometry(QRect(20, 70, 251, 41));
        Search_Button->setFont(font1);
        Search_Button->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: rgba(40, 40, 40,0.7);\n"
"text-align: left;\n"
"padding-left: 5px;\n"
"color: white;"));
        Pages = new QStackedWidget(spotify);
        Pages->setObjectName("Pages");
        Pages->setGeometry(QRect(310, 10, 941, 601));
        Pages->setStyleSheet(QString::fromUtf8("background-color: black;"));
        Home = new QWidget();
        Home->setObjectName("Home");
        scrollArea = new QScrollArea(Home);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 951, 601));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgba(20, 20, 20,0.7);\n"
"border-radius: 20px;\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 951, 601));
        greeting = new QLabel(scrollAreaWidgetContents);
        greeting->setObjectName("greeting");
        greeting->setGeometry(QRect(10, 20, 311, 41));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        greeting->setFont(font2);
        greeting->setStyleSheet(QString::fromUtf8("color: white;"));
        horizontalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 90, 921, 211));
        Layout = new QHBoxLayout(horizontalLayoutWidget);
        Layout->setObjectName("Layout");
        Layout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        Pages->addWidget(Home);
        Search = new QWidget();
        Search->setObjectName("Search");
        scrollArea_2 = new QScrollArea(Search);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(0, 0, 951, 601));
        scrollArea_2->setStyleSheet(QString::fromUtf8("background-color: rgba(20, 20, 20,0.7);\n"
"border-radius: 20px;\n"
""));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 951, 601));
        lineEdit = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 20, 331, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(\":icons/seach.png\");\n"
"background-color: rgba(50,50,50,0.7);\n"
"border-radius: 20px;\n"
"padding: 5px;\n"
"color: white;"));
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 80, 121, 41));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: transparent;"));
        horizontalLayoutWidget_2 = new QWidget(scrollAreaWidgetContents_2);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 130, 921, 211));
        Layout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        Layout_2->setObjectName("Layout_2");
        Layout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_3 = new QWidget(scrollAreaWidgetContents_2);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 360, 921, 211));
        Layout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        Layout_3->setObjectName("Layout_3");
        Layout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        Pages->addWidget(Search);
        pushButton = new QPushButton(spotify);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 570, 75, 24));
        Playlist = new QListWidget(spotify);
        Playlist->setObjectName("Playlist");
        Playlist->setGeometry(QRect(30, 370, 231, 192));
        Playlist->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4->raise();
        play_button->raise();
        skip_behind_button->raise();
        skip_foward_button->raise();
        musicTimer->raise();
        volumeSlider->raise();
        mute_button->raise();
        SongName->raise();
        songDuration->raise();
        skip_ten_seconds_foward->raise();
        skip_ten_seconds_back->raise();
        label->raise();
        SideBar_1->raise();
        SideBar_2->raise();
        Home_Button->raise();
        Search_Button->raise();
        listWidget->raise();
        Pages->raise();
        pushButton->raise();
        Playlist->raise();

        retranslateUi(spotify);

        Pages->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(spotify);
    } // setupUi

    void retranslateUi(QDialog *spotify)
    {
        spotify->setWindowTitle(QCoreApplication::translate("spotify", "Dialog", nullptr));
        label_4->setText(QString());
        play_button->setText(QString());
        skip_behind_button->setText(QString());
        skip_foward_button->setText(QString());
        mute_button->setText(QString());
        SongName->setText(QString());
        songDuration->setText(QString());
        skip_ten_seconds_foward->setText(QString());
        skip_ten_seconds_back->setText(QString());
        label->setText(QCoreApplication::translate("spotify", "TextLabel", nullptr));
        SideBar_1->setText(QString());
        SideBar_2->setText(QString());
        Home_Button->setText(QString());
        Search_Button->setText(QString());
        greeting->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("spotify", "Search a song name", nullptr));
        label_2->setText(QCoreApplication::translate("spotify", "Browse All", nullptr));
        pushButton->setText(QCoreApplication::translate("spotify", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class spotify: public Ui_spotify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPOTIFY_H
