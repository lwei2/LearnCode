/*acquirediskspace.cpp */

#include "acquirediskspace.h"

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QComboBox>
#include <QGridLayout>
#include <QMessageBox>

#include "windows.h"

AcquireDiskSpace::AcquireDiskSpace( QWidget *parent )
    : QDialog( parent )
{
    setWindowFlags( Qt::WindowTitleHint );
    resize( 400, 400 );
    setStyleSheet( "QDialog{background:white;}" );

    m_pEdtTotalSpace = new QLineEdit;
    m_pEdtTotalSpace->setEnabled( false );
    m_pEdtTotalSpace->setMinimumHeight( 30 );
    m_pEdtFreeSpace = new QLineEdit;
    m_pEdtFreeSpace->setEnabled( false );
    m_pEdtFreeSpace->setMinimumHeight( 30 );

    //Disk
    QComboBox* pCmbDisk = new QComboBox;
    pCmbDisk->addItem( "C:/" );
    pCmbDisk->addItem( "D:/Test" );
    pCmbDisk->addItem( "E:/" );
    pCmbDisk->addItem( "F:/" );
    pCmbDisk->addItem( "G:/" );
    pCmbDisk->setMinimumHeight( 30 );

    //Button
    QPushButton* pBtnOK = new QPushButton( "OK" );
    pBtnOK->setMinimumHeight( 30 );
    QHBoxLayout* pBtnLayout = new QHBoxLayout;
    pBtnLayout->addWidget( pBtnOK );

    //MainLayout
    QGridLayout* pMainLayout = new QGridLayout;
    pMainLayout->addWidget( new QLabel( "Total:" ), 0, 0, Qt::AlignRight );
    pMainLayout->addWidget( m_pEdtTotalSpace, 0, 1 );
    pMainLayout->addWidget( new QLabel( "GB" ), 0, 2 );

    pMainLayout->addWidget( new QLabel( "Free:" ), 1, 0, Qt::AlignRight );
    pMainLayout->addWidget( m_pEdtFreeSpace, 1, 1 );
    pMainLayout->addWidget( new QLabel( "GB" ), 1, 2 );
    pMainLayout->addWidget( new QLabel( "Disk:" ), 2, 0, Qt::AlignRight );
    pMainLayout->addWidget( pCmbDisk, 2, 1 );
    pMainLayout->addLayout( pBtnLayout, 3, 1 );
    setLayout( pMainLayout );

    //connects
    connect( pCmbDisk, SIGNAL( currentIndexChanged( const QString& ) ), this, SLOT( slotDiskChanged( const QString& ) ) );
    connect( pBtnOK, SIGNAL( clicked() ), this, SLOT( accept() ) );

    //Init
    QString strDisk = pCmbDisk->currentText();
    slotDiskChanged( strDisk );
}

AcquireDiskSpace::~AcquireDiskSpace()
{

}

void AcquireDiskSpace::slotDiskChanged( const QString& strDisk )
{
    double dTotalBytes, dFreeBytes;
    GetDiskSpace( strDisk, dTotalBytes, dFreeBytes );
    m_pEdtTotalSpace->setText( QString::number( dTotalBytes, 'f', 3 ) );
    m_pEdtFreeSpace->setText( QString::number( dFreeBytes, 'f', 3 ) );
}

void AcquireDiskSpace::GetDiskSpace( QString strDisk, double& dTotalBytes, double& dFreeBytes )
{
    LPCWSTR lpcwstrDriver = (LPCWSTR)strDisk.utf16();
    ULARGE_INTEGER lFreeBytesAvailable, lTotalBytesTemp, lTotalFreeBytes;

    if( !GetDiskFreeSpaceEx( lpcwstrDriver, &lFreeBytesAvailable, &lTotalBytesTemp, &lTotalFreeBytes ) )
    {
        QMessageBox::warning( 0, "Warning", "Acquire Disk Space Failed !" );
        dTotalBytes = -1;
        dFreeBytes = -1;
        return;
    }

    //unit : GB
    dTotalBytes = lTotalBytesTemp.QuadPart / 1024.0 / 1024 / 1024;
    dFreeBytes = lTotalFreeBytes.QuadPart / 1024.0 / 1024 / 1024;
}
