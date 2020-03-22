## Encryption Logic:
1. Division of the text / string into two-letter blocks, with only one letter in the last block.
2. Each block will be a cell in the linked list.
3. Each cell in the linked list is responsible for storing the block characters, their respective positions in the vector containing several accented and non-accented letters, and some Boolean variables to have a control from the data, indicating whether it is a number or some special character.
4. After the linked list has been filled in, the cells are inserted in the second file, inverting the characters of each block, but with the formatting criteria following:
### Assuming the cell contains two letters of the vector:
- If the letter 1 is greater than the letter 2 -> the letter 1 becomes the corresponding letter in the vector to the sum of the positions of the two letters, and that same letter that was replaced is printed as a capital letter in the file.
- If the letter 1 is less than the letter 2 -> the letter 1 becomes the corresponding letter in the vector to the subtraction of the positions of the two letters and that same letter that was replaced is printed as a lower case in the file.
### Assuming the cell contains at least one number or a special character from other specific vectors:
- The letter 1 and the letter 2 are both replaced by the corresponding letter in the given vector at twice the position of the character.
5. In addition, the sum of the positions with the vector size multiplied by 2 is also inserted in the file, in order to keep the number in a 3-digit permanence

## Decryption Logic:
1. It is basically the reverse of the cryptographic logic, but the conditions of each character must be checked again, to determine if it is a letter, number, sum of positions, or special character and thus be properly treated.
2. The second file is read, therefore filling in the linked list.
3. After reading, the letters of each block are recalculated inversely from the information dated in each cell of the list.
4. During this process, the letters already modified are inserted in an auxiliary file.
5. Finally, this auxiliary file is overlapped on the second file, printing the decrypted text for the user.