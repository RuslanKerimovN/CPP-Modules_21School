/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:55:20 by botilia           #+#    #+#             */
/*   Updated: 2022/07/19 16:41:41 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReadAndReplaceSubstringInNewFile.h"

int ft_error(int i)
{
    if (i == 1)
        std::cerr << "Error\nEnter filename, replaceable string and new string" << std::endl;
    else if (i == 2)
        std::cerr << "Error\nFilename or replaceable string or new string is empty" << std::endl;
    else if (i == 3)
        std::cerr << "Error\nFile not found" << std::endl;
    return 0;
}

int main(int argc, char **argv)
{
    std::string newFileName;
    std::string lineForRead;
    
    if (argc != 4)
        return ft_error(1);
    
    ReadAndReplaceSubstringInNewFile enteredData(argv[1], argv[2], argv[3]);
    if (enteredData.getFilename().empty() || enteredData.getReplaceableString().empty()
        || enteredData.getNewString().empty())
        return ft_error(2);
    
    newFileName = enteredData.makeNameForNewFile(argv[1]);
    std::ifstream in(argv[1]);
    if (!in)
        return ft_error(3);
    std::ofstream out;
    out.open(newFileName);
    
    while (getline(in, lineForRead)) {
        lineForRead = enteredData.makeStringForWrite(lineForRead);
        out << lineForRead << std::endl;
    }
    in.close();
    out.close();
    return 0;
}