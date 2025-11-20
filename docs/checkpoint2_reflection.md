# Checkpoint 2: Reflection

## What I Implemented
I implemented the Mistake Checker feature, which checks the puzzle grid for duplicate numbers in rows, columns, and 3x3 subgrids. I integrated it into the game menu, allowing players to check for mistakes during gameplay.

## Integration with First Feature
The Mistake Checker builds directly on the puzzle generation feature. It uses the existing Puzzle and Cell classes and works seamlessly with generated puzzles.

## Challenges Faced
- Resolving merge conflicts while adding the feature.
- Making sure the checker correctly identifies duplicates in all rows, columns, and subgrids.
- Integrating it into the game menu without causing recursive calls or crashes.

## What I Learned
- How to implement a feature that interacts with an existing data structure.
- Best practices for debugging and testing C++ programs.
- Handling Git rebase conflicts and maintaining code integrity.

## Testing Results
- Tested puzzles with duplicates: correctly identifies all mistakes.
- Tested completed puzzle with no mistakes: outputs "No mistakes found. Great job!"
- Integrated test after puzzle generation: works without errors.

## Design Decisions
- Chose to print mistakes to the console instead of attempting automatic correction.
- Added a game menu option for better usability.
- Implemented separate loops for rows, columns, and subgrids for clarity.

## Time Spent
Approximately 4 hours
