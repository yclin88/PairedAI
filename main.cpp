#include "widget.h"

#include <QApplication>
#include <QFont>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    // Create four widget dialogs
    Widget w1, w2, w3, w4;
    
    // Configure Dialog 1 - Top-left, Red theme
    w1.setWindowTitle("Dialog 1 - Red");
    w1.resize(350, 250);
    w1.move(50, 50);
    w1.setStyleSheet("QWidget { background-color: #FFE6E6; color: #8B0000; }");
    QFont font1 = w1.font();
    font1.setPointSize(12);
    font1.setBold(true);
    w1.setFont(font1);
    
    // Configure Dialog 2 - Top-right, Blue theme
    w2.setWindowTitle("Dialog 2 - Blue");
    w2.resize(350, 250);
    w2.move(450, 50);
    w2.setStyleSheet("QWidget { background-color: #E6F2FF; color: #00008B; }");
    QFont font2 = w2.font();
    font2.setPointSize(14);
    font2.setItalic(true);
    w2.setFont(font2);
    w2.setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint);
    
    // Configure Dialog 3 - Bottom-left, Green theme
    w3.setWindowTitle("Dialog 3 - Green");
    w3.resize(350, 250);
    w3.move(50, 350);
    w3.setStyleSheet("QWidget { background-color: #E6FFE6; color: #006400; border: 3px solid #228B22; }");
    QFont font3 = w3.font();
    font3.setPointSize(16);
    font3.setFamily("Courier");
    w3.setFont(font3);
    
    // Configure Dialog 4 - Bottom-right, Purple theme
    w4.setWindowTitle("Dialog 4 - Purple");
    w4.resize(350, 250);
    w4.move(450, 350);
    w4.setStyleSheet("QWidget { background-color: #F0E6FF; color: #4B0082; border: 2px dashed #8B008B; }");
    QFont font4 = w4.font();
    font4.setPointSize(10);
    font4.setUnderline(true);
    w4.setFont(font4);
    w4.setWindowFlags(Qt::Window | Qt::WindowStaysOnTopHint);
    
    // Show all four dialogs
    w1.show();
    w2.show();
    w3.show();
    w4.show();
    
    return a.exec();
}
