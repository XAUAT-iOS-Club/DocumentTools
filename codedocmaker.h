/*****************************************************************************
*  Code document generate tool                                               *
*  Copyright (C) 2022 Wu Qingyun.  EmperorWQY@outlook.com                    *
*                                                                            *
*                                                                            *
*  @file     codedocmaker.h                                                  *
*  @brief    header file of class for generate code document                 *
*  Details.                                                                  *
*                                                                            *
*  @author   Wu Qingyun                                                      *
*  @email    emperorwqy@outlook.com                                          *
*  @version  1.0.0.0                                                         *
*  @date     2022/5/23                                                       *
*  @license  GNU General Public License (GPL)                                *
*                                                                            *
*****************************************************************************/

#ifndef CODEDOCMAKER_H
#define CODEDOCMAKER_H

#include <QString>
#include <QStringList>

#ifndef SUCCESS
#define SUCCESS 1                       /*Success*/
#endif

#ifndef FAIL
#define FAIL 2                          /*Fail*/
#endif

#ifndef EXCEPTION
#define EXCEPTION 3                     /*Excepiton*/
#endif

#ifndef PARAM_ERROR
#define PARAM_ERROR 4                   /*Parameter error*/
#endif

#ifndef PATH_ERROR
#define PATH_ERROR 5                    /*File path error*/
#endif

/**
 * @brief  class for generate the doucument file
 */
class CodeDocMaker
{
public:
    /**
     * @brief constructor
     * @param inputFiles                input filename list
     * @param outputFile                output filename
     * @param option                    generate option , true if the document less than 60 pages , otherwise false
     *
     * @return void
     */
    CodeDocMaker(QStringList inputFiles,QString outputFile,bool option);

    /**
     * @brief use this function to generate the code document file
     * @param void
     * @param option                    generate option , true if the document less than 60 pages , otherwise false
     *
     * @return error code @see above
     */
    int makeFile();
private:
    QString outputFile;                 /*input filename list*/
    QStringList inputFiles;             /*output filename*/
    bool option;                        /*generate option , true if the document less than 60 pages , otherwise false*/

//------------------------------------------------------------------------------------------------------------
// the followings are the definitions of some private functions which could be used in generating the document
//------------------------------------------------------------------------------------------------------------
private:
    int appendText(QString content);
    int clearText();
    int trim();
    int setPagination();
    int setHeaderText(QString content);
    int setFooterText(QString content);
    int setCopyrightInfo();
    int cutPages();
};

#endif // CODEDOCMAKER_H
