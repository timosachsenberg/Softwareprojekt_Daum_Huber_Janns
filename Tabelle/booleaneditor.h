#ifndef BOOLEANEDITOR_H
#define BOOLEANEDITOR_H

#include <QItemDelegate>
#include <booleanwidget.h>

class BooleanEditor : public QItemDelegate
{
    Q_OBJECT
public:
    explicit BooleanEditor(QObject *parent = 0);
    void paint(QPainter *painter, const QStyleOptionViewItem &option,
               const QModelIndex &index) const override;
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const override;
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const override;

signals:

public slots:
    void commitAndCloseEditor();

};

#endif // BOOLEANEDITOR_H
