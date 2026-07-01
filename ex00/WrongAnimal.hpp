/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemoula <mlemoula@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:59:45 by mlemoula          #+#    #+#             */
/*   Updated: 2026/07/01 20:00:22 by mlemoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& src);
    WrongAnimal& operator=(const WrongAnimal& src);
    ~WrongAnimal();

    std::string getType() const;
    void makeSound() const;
};

#endif
