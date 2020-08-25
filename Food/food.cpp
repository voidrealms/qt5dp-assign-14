#include "food.h"


Food::Food(QObject *parent)
{
    Q_UNUSED(parent);
    qInfo() << this << "created";
}

QString Food::name()
{
    return QString("Junk food Plugin");
}

QStringList Food::commands()
{
    //list of supported commands
    QStringList list;

    list << "pizza";
    list << "chips";
    list << "candy";
    list << "soda";

    return list;
}

void Food::execute(QString command, QStringList args)
{
    Q_UNUSED(args);
    QStringList list = commands();
    if(list.contains(command))
    {
        qInfo() << this << "execute" << command;
    }
}
