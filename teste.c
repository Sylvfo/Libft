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

int main() {
    char data[] = "Hello, World!";
    char buffer[10];
    
    // Copy 13 bytes from data to buffer, even if they overlap
    memmove(buffer, data, 12);
    
    printf("Copied string: %s\n", buffer);
    
    return 0;
}

