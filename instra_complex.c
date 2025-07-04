
#include "push_swap.h"

void	ss(t_list **stack_a, t_list **stack_b, char c)
{
	if (stack_a)
		sa_sb(stack_a, 0);
	if (stack_b)
		sa_sb(stack_b, 0);
	if (c)
		ft_printf("ss\n");
}

void	rr(t_list **stack_a, t_list **stack_b, char c)
{
	if (stack_a)
		ra_rb(stack_a, 0);
	if (stack_b)
		ra_rb(stack_b, 0);
	if (c)
		ft_printf("rr\n");
}

void	rrr(t_list **stack_a, t_list **stack_b, char c)
{
	if (stack_a)
		rra_rrb(stack_a, 0);
	if (stack_b)
		rra_rrb(stack_b, 0);
	if (c)
		ft_printf("rrr\n");
}
