#include "progressbar.h"

ProgressBar::ProgressBar(QWidget *parent) : QWidget(parent)
{
    m_Progress = new QProgressBar(this);
    m_Progress->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;}"
                          "QProgressBar::chunk {background-color: #05B8CC;width: 20px;}");
    m_Progress->setOrientation(Qt::Horizontal);
    m_Progress->setMinimum(0);
    m_Progress->setMaximum(100);
    m_Progress->setTextVisible(false);
    m_Progress->resize(this->width()*80/100, this->height()*10/100);
    m_Progress->move(this->width()*15/100, this->height()*45/100);

}

ProgressBar::~ProgressBar()
{

}
