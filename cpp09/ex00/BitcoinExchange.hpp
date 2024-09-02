/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 01:13:44 by agaley            #+#    #+#             */
/*   Updated: 2024/09/02 12:18:30 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <algorithm>

class BitcoinExchange {
public:
    BitcoinExchange();
    bool loadDatabase(const std::string &filename);
    void processLine(const std::string &line);

private:
    std::map<std::string, double> database;
    void handleError(const std::string &message);
};

#endif
