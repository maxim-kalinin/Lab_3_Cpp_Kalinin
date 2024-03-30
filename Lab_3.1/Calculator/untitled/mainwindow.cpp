#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    delete ui->mainToolBar;

    sDisplay = ""; // clear value
    cAction = ' '; // clear
    sValue1 = sValue2 ="";

    this->setWindowTitle(" Калькулятор");
    this->resize(236,245);

    lineEdit1 = new QLineEdit(this);
    lineEdit1->setGeometry(16,15,200,25);
    lineEdit1->setAlignment(Qt::AlignRight);
    lineEdit1->setFont(QFont("", 10, QFont::Bold));
    //lineEdit1->setText("123.45");

    btn1 = new QPushButton(this);
    btn1->setGeometry(15,55,35,33);
    btn1->setText("1");
    connect(btn1, SIGNAL(clicked()), this, SLOT(btn1_clicked()));

    btn2 = new QPushButton(this);
    btn2->setGeometry(55,55,35,33);
    btn2->setText("2");
    connect(btn2, SIGNAL(clicked()), this, SLOT(btn2_clicked()));

    btn3 = new QPushButton(this);
    btn3->setGeometry(95,55,35,33);
    btn3->setText("3");
    connect(btn3, SIGNAL(clicked()), this, SLOT(btn3_clicked()));

    btn4 = new QPushButton(this);
    btn4->setGeometry(15,90,35,33);
    btn4->setText("4");
    connect(btn4, SIGNAL(clicked()), this, SLOT(btn4_clicked()));

    btn5 = new QPushButton(this);
    btn5->setGeometry(55,90,35,33);
    btn5->setText("5");
    connect(btn5, SIGNAL(clicked()), this, SLOT(btn5_clicked()));

    btn6 = new QPushButton(this);
    btn6->setGeometry(95,90,35,33);
    btn6->setText("6");
    connect(btn6, SIGNAL(clicked()), this, SLOT(btn6_clicked()));

    btn7 = new QPushButton(this);
    btn7->setGeometry(15,125,35,33);
    btn7->setText("7");
    connect(btn7, SIGNAL(clicked()), this, SLOT(btn7_clicked()));

    btn8 = new QPushButton(this);
    btn8->setGeometry(55,125,35,33);
    btn8->setText("8");
    connect(btn8, SIGNAL(clicked()), this, SLOT(btn8_clicked()));

    btn9 = new QPushButton(this);
    btn9->setGeometry(95,125,35,33);
    btn9->setText("9");
    connect(btn9, SIGNAL(clicked()), this, SLOT(btn9_clicked()));

    btn0 = new QPushButton(this);
    btn0->setGeometry(15,160,75,33);
    btn0->setText("0");
    connect(btn0, SIGNAL(clicked()), this, SLOT(btn0_clicked()));

 //----------------------------------------------------------------------

    btnPlus = new QPushButton(this);
    btnPlus->setGeometry(145,55,35,33);
    btnPlus->setText("+");
    connect(btnPlus, SIGNAL(clicked()), this, SLOT(btnPlus_clicked()));

    btnMinus = new QPushButton(this);
    btnMinus->setGeometry(145,90,35,33);
    btnMinus->setText("-");
    connect(btnMinus, SIGNAL(clicked()), this, SLOT(btnMinus_clicked()));

    btnMnojit = new QPushButton(this);
    btnMnojit->setGeometry(145,125,35,33);
    btnMnojit->setText("*");
    connect(btnMnojit, SIGNAL(clicked()), this, SLOT(btnMnojit_clicked()));

    btnDelit = new QPushButton(this);
    btnDelit->setGeometry(145,160,35,33);
    btnDelit->setText("/");
    connect(btnDelit, SIGNAL(clicked()), this, SLOT(btnDelit_clicked()));

 //----------------------------------------------------------------------

    btnAnd = new QPushButton(this);
    btnAnd->setGeometry(185,55,35,33);
    btnAnd->setText("And");
    connect(btnAnd, SIGNAL(clicked()), this, SLOT(btnAnd_clicked()));

    btnOr = new QPushButton(this);
    btnOr->setGeometry(185,90,35,33);
    btnOr->setText("Or");
    connect(btnOr, SIGNAL(clicked()), this, SLOT(btnOr_clicked()));

    btnXor = new QPushButton(this);
    btnXor->setGeometry(185,125,35,33);
    btnXor->setText("Xor");
    connect(btnXor, SIGNAL(clicked()), this, SLOT(btnXor_clicked()));

    btnNot = new QPushButton(this);
    btnNot->setGeometry(185,160,35,33);
    btnNot->setText("Not");
    connect(btnNot, SIGNAL(clicked()), this, SLOT(btnNot_clicked()));

//------------------------------------------------------------------------

    btnZptay = new QPushButton(this);
    btnZptay->setGeometry(95,160,35,33);
    btnZptay->setText(",");
    connect(btnZptay, SIGNAL(clicked()), this, SLOT(btnZptay_clicked()));

    btnClear = new QPushButton(this);
    btnClear->setGeometry(15,200,100,30);
    btnClear->setText("очистить");
    connect(btnClear, SIGNAL(clicked()), this, SLOT(btnClear_clicked()));

    btnRezult = new QPushButton(this);
    btnRezult->setGeometry(120,200,100,30);
    btnRezult->setText("вычислить");
    connect(btnRezult, SIGNAL(clicked()), this, SLOT(btnRezult_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}



//=======================  МЕТОДЫ СИГНАЛОВ  =========================

void MainWindow::btn1_clicked()
{
sDisplay += "1";
sValue2 += "1"; //
lineEdit1->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}

void MainWindow::btn2_clicked()
{
sDisplay += "2";
sValue2 += "2";
lineEdit1->setText(sDisplay);
}

void MainWindow::btn3_clicked()
{
sDisplay += "3";
sValue2 += "3"; //
lineEdit1->setText(sDisplay);
}

void MainWindow::btn4_clicked()
{
sDisplay += "4";
sValue2 += "4";
lineEdit1->setText(sDisplay);
}

void MainWindow::btn5_clicked()
{
sDisplay += "5";
sValue2 += "5"; //
lineEdit1->setText(sDisplay);
}

void MainWindow::btn6_clicked()
{
sDisplay += "6";
sValue2 += "6";
lineEdit1->setText(sDisplay);
}

void MainWindow::btn7_clicked()
{
sDisplay += "7";
sValue2 += "7"; //
lineEdit1->setText(sDisplay);
}

void MainWindow::btn8_clicked()
{
sDisplay += "8";
sValue2 += "8";
lineEdit1->setText(sDisplay);
}

void MainWindow::btn9_clicked()
{
sDisplay += "9";
sValue2 += "9";
lineEdit1->setText(sDisplay);
}

void MainWindow::btn0_clicked()
{
sDisplay += "0";
sValue2 += "0";
lineEdit1->setText(sDisplay);
}


// АРИФМЕТИЧЕСКИЕ ОПЕРАЦИИ -------------------------------------------

void MainWindow::btnPlus_clicked()
{
cAction = '+'; // устанавливаем символ операции +
sValue1 = sDisplay; // сохраняем первую переменную
sDisplay += "+";
sValue2 = "";
lineEdit1->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}

void MainWindow::btnMinus_clicked()
{
cAction = '-';
sValue1 = sDisplay;
sDisplay += "-";
sValue2 = "";
lineEdit1->setText(sDisplay);
}

void MainWindow::btnMnojit_clicked()
{
cAction = '*';
sValue1 = sDisplay;
sDisplay += "*";
sValue2 = "";
lineEdit1->setText(sDisplay);
}

void MainWindow::btnDelit_clicked()
{
cAction = '/';
sValue1 = sDisplay;
sDisplay += "/";
sValue2 = "";
lineEdit1->setText(sDisplay);
}


// ЛОГИЧЕСКИЕ ОПЕРАЦИИ -------------------------------------------

void MainWindow::btnAnd_clicked()
{
cAction = '&';
sValue1 = sDisplay;
sDisplay += "&";
sValue2 = "";
lineEdit1->setText(sDisplay);
}

void MainWindow::btnOr_clicked()
{
cAction = '|';
sValue1 = sDisplay;
sDisplay += "|";
sValue2 = "";
lineEdit1->setText(sDisplay);
}

void MainWindow::btnXor_clicked()
{
cAction = '^';
sValue1 = sDisplay;
sDisplay += "^";
sValue2 = "";
lineEdit1->setText(sDisplay);
}

void MainWindow::btnNot_clicked()
{
cAction = '~';
sValue1 = sDisplay;
sDisplay = "~" + sValue1;
sValue2 = "";
lineEdit1->setText(sDisplay);

int iValue1 = sValue1.toInt();
int iResult = ~iValue1;
// добавляем в строку символ "~" и результат
sDisplay += "=" + QString::number(iResult);
lineEdit1->setText(sDisplay);

}

//-----------------------------------------------------------------------

void MainWindow::btnZptay_clicked()
{
cAction = ',';
sValue1 = sDisplay;
sDisplay += ",";
sValue2 = "";
lineEdit1->setText(sDisplay);
}

// очищает окно данных
void MainWindow::btnClear_clicked()
{
sDisplay = ""; //clear value
lineEdit1->setText(""); // clear окно ввода (lineEdit)
sValue1 = ""; //clear value
sValue2 = ""; //clear value
}

// выводит результат вычисления
void MainWindow::btnRezult_clicked()
{
double dValue1 = sValue1.toDouble(); // преобразуем строку в double
double dValue2 = sValue2.toDouble(); // преобразуем строку в double
int iValue1 = sValue1.toInt();
int iValue2 = sValue2.toInt();
double dResult = 0;

// выявляем какую операцию необходимо выполнить

if (cAction == '+') dResult = dValue1 + dValue2;

if (cAction == '-') dResult = dValue1 - dValue2;

if (cAction == '*') dResult = dValue1 * dValue2;

if (cAction == '/') dResult = dValue1 / dValue2;

if (cAction == '&') dResult = iValue1 & iValue2;

if (cAction == '|') dResult = iValue1 | iValue2;

if (cAction == '^') dResult = iValue1 ^ iValue2;

// добавляем в строку символ "=" и результат
sDisplay += "=" + QString::number(dResult);

// выводим текст с полученным результатом
lineEdit1->setText(sDisplay);
}


















