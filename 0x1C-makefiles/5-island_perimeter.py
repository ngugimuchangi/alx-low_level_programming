#!/usr/bin/python3
""" Island perimeter module """


def island_perimeter(grid):
    """ Island perimeter function
        Args:
            grid: a matrix of cells representing islad
                  0 represents a water zone
                  1 represents a land zone
                  Each cell is a square with a side lenght 1
                  Grids are connected horizontally/vertically
                  Grid is rectangular, width and height don't excedd 100
    """
    perimeter = 0
    for row in range(len(grid)):
        for cell in range(len(grid[row])):
            if grid[row][cell] == 1:
                # check top and bottom adjacent cells
                if row == 0:
                    perimeter += 1
                    nxt = row + 1
                    if nxt < len(grid):
                        if grid[nxt][cell] == 0:
                            perimeter += 1
                    else:
                        perimeter += 1
                elif row == len(grid) - 1:
                    perimeter += 1
                    prev = row - 1
                    if grid[prev][cell] == 0:
                        perimeter += 1
                else:
                    nxt = row + 1
                    prev = row - 1
                    if grid[nxt][cell] == 0:
                        perimeter += 1
                    if grid[prev][cell] == 0:
                        perimeter += 1

                # check left and right adjacent cells
                if cell == 0:
                    perimeter += 1
                    nxt = cell + 1
                    if nxt < len(grid[row]):
                        if grid[row][nxt] == 0:
                            perimeter += 1
                    else:
                        perimeter += 1
                elif cell == len(grid[row]) - 1:
                    perimeter += 1
                    prev = cell - 1
                    if grid[row][prev] == 0:
                        perimeter += 1
                else:
                    nxt = cell + 1
                    prev = cell - 1
                    if grid[row][nxt] == 0:
                        perimeter += 1
                    if grid[row][prev] == 0:
                        perimeter += 1
    return perimeter
