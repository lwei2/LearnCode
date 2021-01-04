#include "logindlg.h"
#include "alltextmsg.h"

LoginDlg::LoginDlg(QWidget *parent):QDialog(parent)
{
    usrLabel = new QLabel(USER_NAME_INFO);
    pwdLabel = new QLabel(USER_PWD_INFO);
    usrLineEdit = new QLineEdit;
    pwdLineEdit = new QLineEdit;
    pwdLineEdit->setEchoMode(QLineEdit::Password);

    gridLayout = new QGridLayout;
    gridLayout->addWidget(usrLabel,0,0,1,1);
    gridLayout->addWidget(usrLineEdit,0,1,1,3);
    gridLayout->addWidget(pwdLabel,1,0,1,1);
    gridLayout->addWidget(pwdLineEdit,1,1,1,3);


    okBtn = new QPushButton(BTN_OK_INFO);
    cancelBtn = new QPushButton(CANCEL_OK_INFO);
    btnLayout = new QHBoxLayout;
    btnLayout->setSpacing(60);
    btnLayout->addWidget(okBtn);
    btnLayout->addWidget(cancelBtn);

    dlgLayout = new QVBoxLayout;
    dlgLayout->setMargin(40);
    dlgLayout->addLayout(gridLayout);
    dlgLayout->addStretch(40);
    dlgLayout->addLayout(btnLayout);
    setLayout(dlgLayout);

    connect(okBtn,SIGNAL(clicked()),this,SLOT(accept()));
    connect(cancelBtn,SIGNAL(clicked()),this,SLOT(reject()));

    setWindowTitle(LOGIN_INFO);
    resize(300,200);
}

LoginDlg::~LoginDlg()
{

}

void LoginDlg::accept()
{
    if(usrLineEdit->text().trimmed() == tr("lwei2")
        && pwdLineEdit->text() == tr("lwei2"))
    {
        QDialog::accept();
    }
    else
    {
        QMessageBox::warning(this,WARNNING_INFO, USERNAME_OR_PWD_IS_ERROR_INFO,QMessageBox::Yes);
        usrLineEdit->setFocus();
    }
}
