#include "datafilemenu.h"

DataFileMenu::DataFileMenu()
{
    //Set the background to white
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);

    setFixedSize(480, 277);
}

DataFileMenu::~DataFileMenu()
{
    if (currentButton)
    {
        currentButton->deleteLater();
        allButton->deleteLater();
        browseButton->deleteLater();
        cancelButton->deleteLater();

        currentButton = allButton = browseButton = cancelButton = Q_NULLPTR;
    }
}

void DataFileMenu::BuildUIElements()
{
    QFont font;
    font.setPointSize(25);

    currentButton = new QPushButton(this);
    currentButton->setGeometry(10, 10, 460, 55);
    currentButton->setText("Select Current File");
    currentButton->setFont(font);
    currentButton->setStyleSheet("QPushButton { background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #6fa0cc, stop:1 #627c8a); }");

    allButton = new QPushButton(this);
    allButton->setGeometry(10, 75, 460, 55);
    allButton->setText("Select All Files");
    allButton->setFont(font);
    allButton->setStyleSheet("QPushButton { background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #6fa0cc, stop:1 #627c8a); }");

    browseButton = new QPushButton(this);
    browseButton->setGeometry(10, 140, 460, 55);
    browseButton->setText("Browse");
    browseButton->setFont(font);
    browseButton->setStyleSheet("QPushButton { background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #6fa0cc, stop:1 #627c8a); }");

    cancelButton = new QPushButton(this);
    cancelButton->setGeometry(10, 210, 460, 55);
    cancelButton->setText("Cancel");
    cancelButton->setFont(font);
    cancelButton->setStyleSheet("QPushButton { background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #6fa0cc, stop:1 #627c8a); }");
}
