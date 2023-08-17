/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:56:51 by cwijaya           #+#    #+#             */
/*   Updated: 2023/08/05 14:56:52 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// int	len(const int *array);
int	is_valid(int **grid, int row, int col, int val);
int	check_visibility(int *clues[4], int **ans);

int solve_skyscraper(int **ans, int *clues[4], int size)
{
    int row = 0, col = 0;
    int stack[size * size * 3]; // Stack to store the row, col, and value
    int top = -1; // Top of the stack

    while (row < size) {
        if (ans[row][col] == 0) {
            int val;

			val = ans[row][col] + 1;
            while (val <= size) {
                if (is_valid(ans, row, col, val) && check_visibility(clues, ans)) {
                    ans[row][col] = val;
                    break;
                }
                val++;
            }

            if (val > size) {
                // No valid value found for the current cell, backtrack.
                ans[row][col] = 0;

                // Move to the previous cell
                do {
                    top -= 2;
                    col = stack[top + 1];
                    row = stack[top];
                } while (ans[row][col] != 0);

                continue;
            }

            // Store the current row, col, and value on the stack
            stack[++top] = row;
            stack[++top] = col;
            stack[++top] = val;
        }

        // Move to the next cell
        col++;
        if (col == size) {
            col = 0;
            row++;
        }
    }

    return (1);
}
