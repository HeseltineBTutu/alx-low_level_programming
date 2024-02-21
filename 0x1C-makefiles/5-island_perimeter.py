def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (List[List[int]]): A list of lists of integers representing the grid where:
                            - 0 represents a water zone
                            - 1 represents a land zone
                            - Grid cells are connected horizontally/vertically (not diagonally).
                            - Grid is rectangular, width and height don’t exceed 100
                            - Grid is completely surrounded by water, and there is one island (or nothing).

    Returns:
    int: The perimeter of the island.

    Example:
    grid = [[0, 1, 0, 0],
            [1, 1, 1, 0],
            [0, 1, 0, 0],
            [1, 1, 0, 0]]
    island_perimeter(grid)  # Output: 16

    Explanation:
    The perimeter is calculated as follows:
    - The top edge of the island has a perimeter of 4.
    - The right edge of the island has a perimeter of 4.
    - The bottom edge of the island has a perimeter of 4.
    - The left edge of the island has a perimeter of 4.
    Total perimeter = 4 + 4 + 4 + 4 = 16.
    """
    if not grid:
        return 0
    
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                
                # Check adjacent cells
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
                    
    return perimeter
