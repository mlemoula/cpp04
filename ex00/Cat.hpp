/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemoula <mlemoula@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:59:24 by mlemoula          #+#    #+#             */
/*   Updated: 2026/07/01 18:59:24 by mlemoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& src);
    Cat& operator=(const Cat& src);
    virtual ~Cat();

    void makeSound() const;
};

#endif
