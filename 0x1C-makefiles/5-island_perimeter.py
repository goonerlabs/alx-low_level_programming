#!/usr/bin/python3
""" mesures the preimeter of an island """


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    w = len(grid[0])
    h = len(grid)
    e = 0
    n = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                n += 1
                if j > 0 and grid[i][j - 1] == 1:
                    e += 1
                if i > 0 and grid[i - 1][j] == 1:
                    e += 1
                if j < w - 1 and grid[i][j + 1] == 1:
                    e += 1
                if i < h - 1 and grid[i + 1][j] == 1:
                    e += 1

    return n * 4 - e
