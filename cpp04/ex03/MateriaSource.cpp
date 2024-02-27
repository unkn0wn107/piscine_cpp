/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 14:00:26 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : learnedMaterias(), learnedCount(0) {}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < this->learnedCount; ++i)
        {
            delete this->learnedMaterias[i];
            this->learnedMaterias[i] = nullptr;
        }
        this->learnedCount = other.learnedCount;
        for (int i = 0; i < other.learnedCount; ++i)
            this->learnedMaterias[i] = other.learnedMaterias[i]->clone();
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < this->learnedCount; ++i)
        delete this->learnedMaterias[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (this->learnedCount < 4 && m != nullptr)
        this->learnedMaterias[this->learnedCount++] = m;
    else
        delete m; // Prevent memory leak if the materia cannot be learned
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->learnedCount; ++i)
        if (this->learnedMaterias[i]->getType() == type)
            return this->learnedMaterias[i]->clone();
    return nullptr;
}
