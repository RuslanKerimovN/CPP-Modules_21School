/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadAndReplaceSubstringInNewFile.hpp               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:41:27 by botilia           #+#    #+#             */
/*   Updated: 2022/07/19 15:58:18 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READANDREPLACESUBSTRINGINNEWFILE_HPP
#define READANDREPLACESUBSTRINGINNEWFILE_HPP

#include "ReadAndReplaceSubstringInNewFile.h"

class ReadAndReplaceSubstringInNewFile {
    private:
            std::string filename;
            std::string replaceableString;
            std::string newString;
            
    public:
            ReadAndReplaceSubstringInNewFile(std::string filename,
            std::string replaceableString, std::string newString);
            std::string getFilename();
            std::string getReplaceableString();
            std::string getNewString();
            std::string makeNameForNewFile(std::string oldFile);
            std::string makeStringForWrite(std::string lineForRead);
            ~ReadAndReplaceSubstringInNewFile();
};

#endif
