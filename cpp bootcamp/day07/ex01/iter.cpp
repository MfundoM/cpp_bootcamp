/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:56:07 by mmthethw          #+#    #+#             */
/*   Updated: 2018/06/14 11:56:09 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void iter(T *array, int ArrayLength, void (*f)(T const &))
{
    if (sizeof(array) > 0)
    {
        for (int i = 0 ; i < ArrayLength; i++)
        {
            f(array[i]);
        }
    }
    return ;
}

template <typename T>
void printArray(T const &ArrayData)
{
  std::cout << "[" << ArrayData << "]" << "\n";

  return ;
}

int main(void)
{
    int         array1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::string array2[] = {"a", "ab", "abc", "abcd", "abcde", "abcdef", "abcdefg"};

    iter(array1, 10, printArray);
    std::cout << std::endl;

    iter(array2, 7, printArray);

    return (0);
}
