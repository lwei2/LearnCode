#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>


class LoginDlg : public QDialog
{
    Q_OBJECT
public:
    LoginDlg(QWidget *parent = nullptr);
    ~LoginDlg();

public slots:
    virtual void accept();

private:
    QLineEdit *usrLineEdit;
    QLineEdit *pwdLineEdit;
    QLabel *usrLabel;
    QLabel *pwdLabel;
    QGridLayout *gridLayout;

    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QHBoxLayout *btnLayout;

    QVBoxLayout *dlgLayout;
};

#endif // LOGINDLG_H
