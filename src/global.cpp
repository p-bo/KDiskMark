#include "global.h"

#include <QString>
#include <QObject>

int Global::getOutputColumnsCount()
{
    return 77;
}

QString Global::getToolTipTemplate()
{
    return QObject::tr("<h1>%1 MB/s<br/>%2 GB/s<br/>%3 IOPS<br/>%4 μs</h1>");
}

QString Global::getComparisonLabelTemplate()
{
    return "<p align=\"center\">%1 [%2]</p>";
}

QString Global::getRWSequentialRead()
{
    return "read";
}

QString Global::getRWSequentialWrite()
{
    return "write";
}

QString Global::getRWRandomRead()
{
    return "randread";
}

QString Global::getRWRandomWrite()
{
    return "randwrite";
}
