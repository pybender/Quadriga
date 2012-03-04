
#include <QString>
#include <QIODevice>

#include "troikaformats/materialfile.h"
#include "troikaformats/materialdefinition.h"

#include "materialcommand.h"

TroikaMaterialDefinition TroikaMaterialFile::parse(const QString &name, QIODevice *materialFile)
{
    TroikaMaterialDefinition result;
    result.setName(name);



    return result;
}
