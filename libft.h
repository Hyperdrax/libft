/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:53:34 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/27 10:21:59 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

// ---list-functions---
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
/**	
 * @brief Counts the number of nodes in a list.
 * @param lst The beginning of the list.
 * @return Length of the list.
*/
int		ft_lstsize(t_list *lst);

/**
 * @brief Adds the node ’new’ at the beginning of the list.
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the node to be added to the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Adds the node ’new’ at the end of the list.
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the node to be added to the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.
 * @param lst The node to free.
 * @param del The address of the function used to delete the content.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * @brief Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.
 * @param lst The address of a pointer to a node.
 * @param del: The address of the function used to delete the content of the node.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ to the content of each node.
 * @param lst The address of a pointer to an element.
 * @param f The address of the function used to iterate on the list.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
 * @param content The content to create the node with.
 * @return The new node
*/
t_list	*ft_lstnew(void *content);

/**
 * @brief Returns the last node of the list.
 * @param lst The beginning of the list.
 * @return The last node of the list.
*/
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 * @return The new list. NULL if the allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// ---is-checks---
/**
 * @brief Checks if the parameter is alphanumeric
 * @param i character to check
 * @return If the character is alphanumeric, returns 1, otherwise returns 0.
 */
int		ft_isalnum(int i);

/**
 * @brief Checks if the parameter is alphabetical
 * @param i character to check
 * @return If the character is alphabetical, returns 1, otherwise returns 0.
 */
int		ft_isalpha(int i);

/**
 * @brief Checks if the parameter is an ASCII character
 * @param i character to check
 * @return If the character is an ASCII character, returns 1, otherwise returns 0.
 */
int		ft_isascii(int i);

/**
 * @brief Checks if the parameter is a digit
 * @param i character to check
 * @return If the character is a digit, returns 1, otherwise returns 0.
 */
int		ft_isdigit(int i);

/**
 * @brief Checks if the parameter is a printable character
 * @param i character to check
 * @return If the character is a printable character, returns 1, otherwise returns 0.
 */
int		ft_isprint(int i);

// ---output-functions---
/**
 * @brief Outputs the character ’c’ to the given file descriptor.
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string ’s’ to given file descriptor.
 * @param s the string to output.
 * @param fd the file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string ’s’ to given file descriptor, followed by a newline.
 * @param s the string to output.
 * @param fd the file descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer ’n’ to given file descriptor.
 * @param n the integer to output.
 * @param fd the file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd);

// ---convert-functions---
/**
 * @brief Converts the string argument str to an integer
 * @param str string to convert
 * @return The converted integer, or 0 if no valid conversion could be performed.
*/
int		ft_atoi(const char *str);

/**
 * @brief Converts the lowercase letter to corresponding uppercase letter
 * @param i lowercase letter to convert
 * @return The converted uppercase letter.
*/
int		ft_toupper(int i);

/**
 * @brief Converts the uppercase letter to corresponding lowercase letter
 * @param i uppercase letter to convert
 * @return The converted lowercase letter.
*/
int		ft_tolower(int i);

/**
 * @brief Coverts the integer n into a character string.
 * @param n integer to convert
 * @return The string representing the integer passed as argument.
*/
char	*ft_itoa(int n);

// ---memory-functions---
/**
 * @brief Compares the first n bytes of memory area str1 and memory area str2.
 * @param s1 This is the pointer to a block of memory.
 * @param s2 This is the pointer to a block of memory.
 * @param n  This is the number of bytes to be compared.
 * @return 0 if equal, positive if s1 > s2, negative if s1 < s2.
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Place n zero-valued bytes in the area pointed to by s.
 * @param s This is the pointer to a block of memory.
 * @param n This is the number of bytes to be set to zero.
*/
void	ft_bzero(void *s, size_t n);

/**
 * @brief Allocates the requested memory and returns a pointer to it. Sets allocated Memory to zero.
 * @param count This is the number of elements to be allocated.
 * @param size 	This is the size of elements.
*/
void	*ft_calloc(size_t count, size_t size);

/**
 * @brief Copies the character c to the first n characters of the string pointed to, by the argument str.
 * @param str This is a pointer to the block of memory to fill.
 * @param c − This is the value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
 * @param n This is the number of bytes to be set to the value.
*/
void	*ft_memset(void *str, int c, size_t n);

/**
 * @brief searches for the first occurrence of the character c in the first n bytes of the string pointed to, by the argument str.
 * @param s This is the pointer to the block of memory where the search is performed.
 * @param c This is the value to be passed as an int, but the function performs a byte per byte search using the unsigned char conversion of this value.
 * @param n This is the number of bytes to be analyzed.
*/
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Copies n characters from s2 to s1, but for overlapping memory blocks. Safer than memcpy.
 * @param s1 This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
 * @param s2 This is pointer to the source of data to be copied, type-casted to a pointer of type void*.
 * @param n This is the number of bytes to be copied.
*/
void	*ft_memmove(void *s1, const void *s2, size_t n);

/**
 * @brief Copies n characters from memory area src to memory area dest.
 * @param dest This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
 * @param src This is pointer to the source of data to be copied, type-casted to a pointer of type void*.
 * @param n This is the number of bytes to be copied.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

// ---string-functions---
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strchr(const char *s, int i);
char	*ft_strdup(const char *s);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *str, char c);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif
