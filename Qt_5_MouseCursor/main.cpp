// ======================================================================
 //  main.cpp
 // ======================================================================
 //                   This file is a part of the book
 //             "Qt 5.10 Professional programming with C++"
 //                       http://qt-book.com
 // ======================================================================
 //  Copyright (c) 2017 by Max Schlee
 // ======================================================================

 #include <QtWidgets>

 // ----------------------------------------------------------------------
 int main(int argc, char** argv)
 {
     QApplication app(argc, argv);
     QWidget      wgt;
     QPixmap      pix("/home/hydrargyrum/cur.png");
     QCursor      cur(pix);

    // wgt.setCursor(cur);
     QGuiApplication::setOverrideCursor(Qt::WaitCursor);
     wgt.resize(180, 100);
     wgt.show();

     return app.exec();
 }
