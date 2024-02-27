/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 14:02:28 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter
{
private:
    std::string name;
    AMateria* inventory[4];

public:
    Character(std::string const & name);
    Character(Character const & other);
    virtual ~Character();
    Character & operator=(Character const & other);

    virtual std::string const & getName() const override;
    virtual void equip(AMateria* m) override;
    virtual void unequip(int idx) override;
    virtual void use(int idx, ICharacter& target) override;

private:
    void copyInventoryFrom(const Character & other);
    void clearInventory();
};

#endif
