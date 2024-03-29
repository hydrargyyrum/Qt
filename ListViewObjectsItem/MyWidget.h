#pragma once
#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>

class MyWidget : public QWidget {
    Q_OBJECT
public:
    //MyWidget(QWidget* parent = nullptr/*, QSqlDatabase db*/); // такой конструктор будет, когда подтянем БД
    MyWidget(QWidget* parent = nullptr, int k = -1);


protected:
    QMessageBox* msgBox_pic;
    QMessageBox* msgBox_name;
    QLabel* plbl_pic;
    QLabel* plbl;
    QLabel* plbl_name;
    QLabel** mplbl;
    QLabel* plbl_circle;
    QHBoxLayout* phbxLayout;
    QVBoxLayout* pvbxLayout;
    QCursor cur_name;
    QCursor cur_image;
    int k;

    QString colorSelection(int l);//заглушка - вместо l будет поле БД или сама БД для определения цвета
    void fillLayout();
};
