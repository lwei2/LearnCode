#include <QApplication>

#include <QTreeView>

#include "objecttreemodel.h"

int main( int argc, char **argv )
{
    QApplication app( argc, argv );

    QObject root;
    root.setObjectName( "root" );

    QObject *child;
    QObject *foo = new QObject( &root );
    foo->setObjectName( "foo" );
    child = new QObject( foo );
    child->setObjectName( "Mark" );
    child = new QObject( foo );
    child->setObjectName( "Bob" );
    child = new QObject( foo );
    child->setObjectName( "Kent" );

    QObject *bar = new QObject( &root );
    bar->setObjectName( "bar" );

    child = new QObject( bar );
    child->setObjectName( "Ole" );
    child = new QObject( bar );
    child->setObjectName( "Trond" );
    child = new QObject( bar );
    child->setObjectName( "Kjetil" );
    child = new QObject( bar );
    child->setObjectName( "Lasse" );

    QObject *baz = new QObject( &root );
    baz->setObjectName( "baz" );
    child = new QObject( baz );
    child->setObjectName( "Bengt" );
    child = new QObject( baz );
    child->setObjectName( "Sven" );


    ObjectTreeModel model( &root );

    QTreeView tree;
    tree.setModel( &model );

    tree.show();

    return app.exec();
}
