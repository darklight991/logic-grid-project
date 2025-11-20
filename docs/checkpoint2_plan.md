# Checkpoint 2: Second Feature Plan

## Feature Name
Mistake Checker

## Description
This feature checks the puzzle for duplicate numbers in rows, columns, and 3x3 subgrids. It prints any mistakes found, helping the player identify errors in their puzzle.

## Why This Feature?
I chose this feature to enhance the game's usability. It builds on the puzzle grid implemented in the first feature by providing feedback and making the game more interactive.

## Classes Involved
- Puzzle: Implements the checkMistakes() function
- Game: Integrates the feature into the game menu
- Cell: Stores values and fixed status for each puzzle cell

## Expected User Workflow
1. The user starts the game and generates a puzzle.
2. The user selects the "Check Mistakes" option from the game menu.
3. The game prints any duplicate numbers in rows, columns, or subgrids.
4. The user can correct mistakes or generate a new puzzle.

## Estimated Time
Approximately 3-4 hours
