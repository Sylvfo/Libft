/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:54:16 by marvin            #+#    #+#             */
/*   Updated: 2023/10/26 15:54:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void) 
{
    const char *str = "Bonjour, monde !";
    char c = 'z';
    char *ptr = strchr(str, c);

    if (ptr != NULL) {
        printf("Le caractère '%c' a été trouvé à la position %ld dans la chaîne.\n", c, ptr - str);
    } else {
        printf("Le caractère '%c' n'a pas été trouvé dans la chaîne.\n", c);
    }

    return (0);
}
