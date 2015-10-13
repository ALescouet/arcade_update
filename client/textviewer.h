/* The MIT License (MIT)

Copyright (c) [2015] [Alexis Lescouet]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE. */

#ifndef TEXTVIEWER_H
#define TEXTVIEWER_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QFile>
#include <QGroupBox>
#include <QBoxLayout>

class TextViewer : public QWidget
{
    Q_OBJECT
public:
    explicit TextViewer(QWidget *parent = 0, QString default_text="No descrition available", QString filename="");
    
signals:

public slots:
    void setfile(int devnb);
    void setfile(QString filename);

private slots:
    void refresh();

private:
    QTextEdit *text;
    QString default_content;
    QFile content;
    QPushButton *closebutton;
    QPushButton *refreshbutton;
    QGroupBox *groupvbox;
    QGroupBox *grouphbox;
    QBoxLayout *vbox;
    QBoxLayout *hbox;
};

#endif // TEXTVIEWER_H
