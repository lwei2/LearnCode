#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include <QWidget>
#include <QProgressBar>

class ProgressBar : public QWidget
{
    Q_OBJECT
public:
    ProgressBar(QWidget *parent = nullptr);
    ~ProgressBar();
private:
    QProgressBar    *m_Progress;

signals:

};

#endif // PROGRESSBAR_H
