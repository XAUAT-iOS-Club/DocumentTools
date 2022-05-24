#include "codedocmaker.h"

CodeDocMaker::CodeDocMaker(QStringList inputFiles,QString outputFile,bool option)
{
    this->inputFiles = inputFiles;
    this->outputFile = outputFile;
    this->option = option;
}

int CodeDocMaker::makeFile()
{
    return FAIL;
}

int CodeDocMaker::appendText(QString content)
{
    return FAIL;
}

int CodeDocMaker::clearText()
{
    return FAIL;
}

int CodeDocMaker::trim()
{
    return FAIL;
}

int CodeDocMaker::setPagination()
{
    return FAIL;
}

int CodeDocMaker::setHeaderText(QString content)
{
    return FAIL;
}

int CodeDocMaker::setFooterText(QString content)
{
    return FAIL;
}

int CodeDocMaker::setCopyrightInfo()
{
    return FAIL;
}

int CodeDocMaker::cutPages()
{
    return FAIL;
}
