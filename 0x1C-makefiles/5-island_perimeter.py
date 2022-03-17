#!/usr/bin/python3
""" Defines a perimeter island function """

def island_perimeter(grid):
    """ Returns the perimeter of an island: 0 is water, 1 is dirt"""
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                if  grid[i - 1][j] == 0:
                    perimeter = perimeter + 1
                if  grid[i + 1][j] == 0:
                    perimeter = perimeter + 1
                if  grid[i][j - 1] == 0:
                    perimeter = perimeter + 1
                if  grid[i][j + 1] == 0:
                    perimeter = perimeter + 1
    return (perimeter)
