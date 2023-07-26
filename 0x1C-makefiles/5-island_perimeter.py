#!/usr/bin/python3
def island_perimeter(grid):
    perimeter = 0
    for j in grid:
        for i in j:
            if i == 1:
                perimeter += 2
    return (perimeter + 2)
