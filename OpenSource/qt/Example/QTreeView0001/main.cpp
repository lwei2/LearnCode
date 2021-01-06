
#include <QApplication>
#include <QTreeView>
#include <QTableView>
#include <QListView>
#include <QSplitter>
#include <QStandardItem>
#include <QStandardItemModel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QTreeView *pTreeView = new QTreeView();
    QTableView *pTableView = new QTableView();
    QListView *pListView = new QListView();

    QSplitter splitter;
    splitter.addWidget(pTreeView);
    splitter.addWidget(pTableView);
    splitter.addWidget(pListView);

    QStandardItemModel model(5,2);
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            QStandardItem *item = new QStandardItem(QString("Row:%0, Column:%1").arg(i).arg(j));
            if(j == 0)
            {
                for(int k = 0; k < 3; k++)
                {
                    QStandardItem *child = new QStandardItem( QString("Item %0").arg(k) );
                    child->setEditable( false );
                    item->appendRow( child );
                }
            }
            model.setItem(i, j, item);
        }
    }
    model.setHorizontalHeaderItem( 0, new QStandardItem( "Foo" ) );
    model.setHorizontalHeaderItem( 1, new QStandardItem( "Bar-Baz" ) );

    pTreeView->setModel( &model );
    pListView->setModel( &model );
    pTableView->setModel( &model );

    pListView->setSelectionModel(pTreeView->selectionModel());
    pTableView->setSelectionModel(pTreeView->selectionModel());

    pTableView->setSelectionBehavior( QAbstractItemView::SelectRows );
    pTableView->setSelectionMode( QAbstractItemView::SingleSelection );

    splitter.show();
    return app.exec();
}
