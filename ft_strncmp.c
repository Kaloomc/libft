/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <fgarnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 08:19:44 by fgarnier          #+#    #+#             */
/*   Updated: 2025/10/14 08:19:46 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while ((s1[i] == s2[i] && s1[i] && s2[i]) && c < n)
	{
		i++;
		c++;
	}
	if (c == n)
		return (0);
	return (s1[i] - s2[i]);
}