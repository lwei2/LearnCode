/*acquirediskspace.h */

#ifndef ACQUIREDISKSPACE_H
#define ACQUIREDISKSPACE_H

#include <QDialog>

class QLineEdit;

class AcquireDiskSpace : public QDialog
{
    Q_OBJECT

public:
    AcquireDiskSpace( QWidget *parent = 0 );
    ~AcquireDiskSpace();

protected slots:
    void slotDiskChanged( const QString& );

private:
    void GetDiskSpace( QString strDisk, double& dTotalBytes, double& dFreeBytes );

private:
    QLineEdit* m_pEdtTotalSpace;
    QLineEdit* m_pEdtFreeSpace;
};

#endif // ACQUIREDISKSPACE_H
