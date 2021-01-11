#include "listwidget.h"

ListWidget::ListWidget(QWidget *parent) : QWidget(parent)
{
    initColtrol();
    initAction();
    resetView();
    setDir("E:/SourceCode/res");
}

ListWidget::~ListWidget()
{

}

void ListWidget::setDir(const QString &dirPath)
{
    clear();
    resetModel(getImageFileInfoList(dirPath));
}

void ListWidget::clear()
{
    model->clear();
}

void ListWidget::initColtrol()
{
    //创建模型
    model = new QStandardItemModel(this);

    //创建视图
    view = new QListView(this);
    view->setModel(model);
    view->setSelectionRectVisible(true);
    view->setSelectionMode(QAbstractItemView::ExtendedSelection);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(view);

    //创建快捷键
    menu = new QMenu(this);
    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &QWidget::customContextMenuRequested, [=](const QPoint &pos)
    {
        menu->exec(mapToGlobal(pos));
    });
}

void ListWidget::initAction()
{
    addActionFlow();
    menu->addSeparator();

    addActionWrapping();
    menu->addSeparator();

    addActionMoveMent();
    menu->addSeparator();

    addActionResizeMode();
    menu->addSeparator();

    addActionViewMode();
}

void ListWidget::resetModel(const QFileInfoList &infos)
{
    for(auto &info : infos)
    {
        QStandardItem *imageItem = new QStandardItem;
        imageItem->setIcon(QIcon(info.absoluteFilePath()));
        imageItem->setText(info.fileName());
        model->appendRow(imageItem);
    }
}

void ListWidget::resetView()
{
    view->setIconSize(QSize(100,100));
    view->setSpacing(10);
}

QFileInfoList ListWidget::getImageFileInfoList(const QString &dirPath) const
{
    QDir dir(dirPath);
    QStringList filters;
    filters<<"*.png"<<"*.bmp"<<"*.jpg"<<"*.jpeg";
    return dir.entryInfoList(filters, QDir::Files, QDir::Name);
}

void ListWidget::addActionFlow()
{
    QAction *actLeftToRight = new QAction("LeftToRight");
    connect(actLeftToRight, &QAction::triggered, [=](bool)
    {
        view->setFlow(QListView::LeftToRight);
    });

    QAction *actTopToBottom = new QAction("TopToBottom");
    connect(actTopToBottom, &QAction::triggered, [=](bool)
    {
        view->setFlow(QListView::TopToBottom);
    });

    QList <QAction*> actions;
    actions<<actLeftToRight<<actTopToBottom;
    setActions(actions);
    actTopToBottom->setChecked(true);
}

void ListWidget::addActionWrapping()
{
    QAction *actWrapping = new QAction("Wrapping");
    connect(actWrapping, &QAction::toggled, [=](bool b)
    {
        view->setWrapping(b);
    });
    QList <QAction *> actions;
    actions<<actWrapping;
    setActions(actions);
}

void ListWidget::addActionMoveMent()
{
    QAction *actStatic = new QAction("Static");
    connect(actStatic, &QAction::triggered, [=](bool)
    {
        view->setMovement(QListView::Static);
    });

    QAction *actFree = new QAction("Free");
    connect(actFree, &QAction::triggered, [=](bool)
    {
        view->setMovement(QListView::Free);
    });

    QAction *actSnap = new QAction("Snap");
    connect(actSnap, &QAction::triggered, [=](bool)
    {
        view->setMovement(QListView::Snap);
    });

    QList <QAction *> actions;
    actions << actStatic << actFree << actSnap;
    setActions(actions);
    actStatic->setChecked(true);
}

void ListWidget::addActionResizeMode()
{
    QAction *actFixed = new QAction("Fixed");
    connect(actFixed, &QAction::triggered, [=](bool)
    {
        view->setResizeMode(QListView::Fixed);
    });

    QAction *actAdjust = new QAction("Adjust");
    connect(actAdjust, &QAction::triggered, [=](bool)
    {
        view->setResizeMode(QListView::Adjust);
    });
    QList <QAction *> actions;
    actions << actFixed << actAdjust;
    setActions(actions);
    actFixed->setChecked(true);
}

void ListWidget::addActionViewMode()
{
    QAction *actListMode = new QAction("ListMode");
    connect(actListMode, &QAction::triggered, [=](bool)
    {
        view->setViewMode(QListView::ListMode);
    });

    QAction *actIconMode = new QAction("IconMode");
    connect(actIconMode, &QAction::triggered, [=](bool)
    {
        view->setViewMode(QListView::IconMode);
    });

    QList <QAction *> actions;
    actions << actListMode << actIconMode;
    setActions(actions);
    actListMode->setChecked(true);
}

void ListWidget::setActions(const QList<QAction*>& actions)
{
    QActionGroup *actionGroup = new QActionGroup(this);
    for(auto action : actions)
    {
        action->setCheckable(true);
        actionGroup->addAction(action);
        menu->addAction(action);
    }
}
