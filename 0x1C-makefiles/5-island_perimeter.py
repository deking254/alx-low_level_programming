#!/usr/bin/python3
"""calculate the perimeter"""


def island_perimeter(grid):
    """the function for operation"""
    perimeter = 0
    for j in grid:
        for i in j:
            if i == 1:
                perimeter += 2
    return (perimeter + 2)
