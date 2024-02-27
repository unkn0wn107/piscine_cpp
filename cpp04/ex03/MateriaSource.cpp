/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 18:15:21 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _learnedCount(0) {}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < this->_learnedCount; ++i)
        {
            delete this->_materias[i];
            this->_materias[i] = NULL;
        }
        this->_learnedCount = other._learnedCount;
        for (int i = 0; i < other._learnedCount; ++i)
            this->_materias[i] = other._materias[i]->clone();
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < this->_learnedCount; ++i)
        delete this->_materias[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (this->_learnedCount < 4 && m != NULL)
        this->_materias[this->_learnedCount++] = m;
    else if (m != NULL)
        delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->_learnedCount; ++i)
        if (this->_materias[i]->getType() == type)
            return this->_materias[i]->clone();
    return NULL;
}
