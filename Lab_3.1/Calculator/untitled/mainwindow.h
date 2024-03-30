#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QString sDisplay; // для хранения строки вывода
    QString sValue1, sValue2;
    char cAction; // для хранения операции вычисления

    QLineEdit *lineEdit1;

    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn0;

    QPushButton *btnPlus;
    QPushButton *btnMinus;
    QPushButton *btnMnojit;
    QPushButton *btnDelit;

    QPushButton *btnAnd;
    QPushButton *btnOr;
    QPushButton *btnXor;
    QPushButton *btnNot;

    QPushButton *btnZptay;
    QPushButton *btnClear;
    QPushButton *btnRezult;

private slots:

    void btn1_clicked();
    void btn2_clicked();
    void btn3_clicked();
    void btn4_clicked();
    void btn5_clicked();
    void btn6_clicked();
    void btn7_clicked();
    void btn8_clicked();
    void btn9_clicked();
    void btn0_clicked();

    void btnPlus_clicked();
    void btnMinus_clicked();
    void btnMnojit_clicked();
    void btnDelit_clicked();

    void btnAnd_clicked();
    void btnOr_clicked();
    void btnXor_clicked();
    void btnNot_clicked();

    void btnZptay_clicked();
    void btnClear_clicked();
    void btnRezult_clicked();

};

#endif // MAINWINDOW_H













