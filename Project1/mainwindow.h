#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWinindow;
}
QT_END_NAMESPACE

class MainWinindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWinindow(QWidget *parent = nullptr);
    ~MainWinindow();

private:
    Ui::MainWinindow *ui;
};
#endif // MAINWINDOW_H
