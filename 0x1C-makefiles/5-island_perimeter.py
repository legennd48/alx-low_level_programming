#!/usr/bin/python3
"""
Module: Calculate perimeter of an island in a 2D grid
"""


def island_perimeter(grid):
    """Calculate the perimeter of an island in a 2D grid.

    Args:
        grid (list[list[int]]): A 2D grid where 1 represents
    land and 0 represents water.

    Returns:
        int: The perimeter of the island.
    """

    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                # Check top neighbor
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1

                # Check bottom neighbor
                if row == (len(grid) - 1) or grid[row + 1][col] == 0:
                    perimeter += 1

                # Check left neighbor
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1

                # Check right neighbor
                if col == (len(grid[0]) - 1) or grid[row][col + 1] == 0:
                    perimeter += 1

    return perimeter
