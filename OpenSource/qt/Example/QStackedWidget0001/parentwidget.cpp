#include "parentwidget.h"
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QStringLiteral>
#include <QTextCodec>

ParentWidget::ParentWidget(QWidget *parent):QDialog(parent)
{
    QPushButton *pButton = new QPushButton(this);
    QLabel *pFirstPage= new QLabel(this);
    QLabel *pSecondPage = new QLabel(this);
    QLabel *pThirdPage = new QLabel(this);
    m_pStackedWidget = new QStackedWidget(this);

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
    pButton->setText(tr("change"));
    pButton->resize(100,100);
    pButton->move(300,300);
    pFirstPage->setText(tr("AAAAAAAA"));
    pSecondPage->setText(tr("BBBBBBBB��"));
    pThirdPage->setText(tr("CCCCCCC"));

    // ���ҳ�棨�����л���
    m_pStackedWidget->addWidget(pFirstPage);
    m_pStackedWidget->addWidget(pSecondPage);
    m_pStackedWidget->addWidget(pThirdPage);

    QVBoxLayout *pLayout = new QVBoxLayout();
    pLayout->addWidget(pButton, 0, Qt::AlignLeft | Qt::AlignVCenter);
    pLayout->addWidget(m_pStackedWidget);
    pLayout->setSpacing(10);
    pLayout->setContentsMargins(10, 10, 10, 10);
    setLayout(pLayout);

    // �����л���ť�ź����
    connect(pButton, &QPushButton::clicked, this, &ParentWidget::switchPage);



}


ParentWidget::~ParentWidget()
{

}


// �л�ҳ��
void ParentWidget::switchPage()
{
    int nCount = m_pStackedWidget->count();
    int nIndex = m_pStackedWidget->currentIndex();

    // ��ȡ��һ����Ҫ��ʾ��ҳ������
    ++nIndex;

    // ����Ҫ��ʾ��ҳ���������ڵ�����ҳ��ʱ���л�����ҳ
    if (nIndex >= nCount)
        nIndex = 0;

    m_pStackedWidget->setCurrentIndex(nIndex);
}
