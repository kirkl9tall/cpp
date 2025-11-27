/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 14:17:15 by abismail          #+#    #+#             */
/*   Updated: 2025/11/23 14:17:46 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

struct Megaphone
{
    void announce(char *c);
    void finish();
};

void Megaphone::announce(char *c)
{
    int i = 0;
    while (c[i])
    std::cout << static_cast<char>(std::toupper(c[i++]));
}
void Megaphone::finish()
{
    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    Megaphone a;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        a.finish();
    }
    else
    {
        int i = 1;
        while (argv[i])
        a.announce(argv[i++]);
        a.finish();
    }
}