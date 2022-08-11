/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadAndReplaceSubstringInNewFile.cpp               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:49:22 by botilia           #+#    #+#             */
/*   Updated: 2022/07/19 16:32:45 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReadAndReplaceSubstringInNewFile.h"

ReadAndReplaceSubstringInNewFile::ReadAndReplaceSubstringInNewFile(std::string filename,
            std::string replaceableString, std::string newString) : filename(filename),
            replaceableString(replaceableString), newString(newString) {}

std::string ReadAndReplaceSubstringInNewFile::getFilename() {
    return this->filename;
}

std::string ReadAndReplaceSubstringInNewFile::getReplaceableString() {
    return this->replaceableString;
}
std::string ReadAndReplaceSubstringInNewFile::getNewString() {
    return this->newString;
}

std::string ReadAndReplaceSubstringInNewFile::makeNameForNewFile(std::string oldFile) {
    std::string newFileName;
    
    newFileName = oldFile.append(".replace");
    return newFileName;
}

std::string ReadAndReplaceSubstringInNewFile::makeStringForWrite(std::string lineForRead) {
    size_t positionOnLine = 0;

    while ((positionOnLine = lineForRead.find(replaceableString, positionOnLine)) != std::string::npos)
    {
        lineForRead.erase(positionOnLine, replaceableString.length());
        lineForRead.insert(positionOnLine, newString);
    }
    std::string modifiedLine = lineForRead;
    return modifiedLine;
}

ReadAndReplaceSubstringInNewFile::~ReadAndReplaceSubstringInNewFile() {}