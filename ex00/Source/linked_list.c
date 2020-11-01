#include "ft_rush02.h"

t_dict	*create_node(char *key, char *val)
{
	t_dict	*dict;

	dict = (t_dict*)malloc(sizeof(t_dict));
	dict->key = key;
	dict->value = val;
	dict->next = 0;
	return (dict);
}

void	push_front(char *key, char *val)
{
	t_dict	*node;

	if (!g_dict)
		g_dict = create_node(key, val);
	else
	{
		node = g_dict;
		g_dict = create_node(key, val);
		g_dict->next = node;
	}
}

char	*get_val(char *key)
{
	t_dict	*node;

	node = g_dict;
	while (node)
	{
		if (ft_is_same(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (0);
}
