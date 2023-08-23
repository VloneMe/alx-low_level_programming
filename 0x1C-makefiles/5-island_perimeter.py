#!/usr/bin/python3
"""island_perimeter module"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in the grid
    """
    perimeter = 0

    """
    # Determine the number of rows and columns in the grid
    """
    num_rows = len(grid)
    num_cols = len(grid[0])

    """
    # Iterate through the rows and columns of the grid
    """
    for row_idx, row in enumerate(grid):
        for col_idx, cell in enumerate(row):
            if cell == 1:
                """
                # Check adjacent cells and increment the perimeter counter
                """
                if row_idx == 0 or grid[row_idx - 1][col_idx] != 1:
                    perimeter += 1
                if col_idx == 0 or grid[row_idx][col_idx - 1] != 1:
                    perimeter += 1
                if col_idx == num_cols - 1 or grid[row_idx][col_idx + 1] != 1:
                    perimeter += 1
                if row_idx == num_rows - 1 or grid[row_idx + 1][col_idx] != 1:
                    perimeter += 1
    return perimeter
